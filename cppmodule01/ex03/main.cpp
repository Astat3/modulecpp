#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main() {
  std::cout << "--- Standard Subject Tests ---" << std::endl;
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }

  std::cout << "\n--- Edge Case 1: HumanB without a weapon ---" << std::endl;
  {
    HumanB unarmed("Unarmed Dan");
    unarmed.attack(); // Should handle it gracefully, you already have a null
                      // check!
  }

  std::cout << "\n--- Edge Case 2: Dangling Pointer with HumanB ---"
            << std::endl;
  {
    HumanB reckless("Reckless Rick");
    {
      Weapon tempWeapon("temporary stick");
      reckless.setWeapon(tempWeapon);
      reckless.attack();
    } // tempWeapon is destroyed here, popping off the stack.

    // At this point, Rick's _weapon pointer is dangling! It points to memory
    // that is no longer valid. We will just print a warning instead of actually
    // attacking, because dereferencing it causes undefined behavior (often a
    // segfault or printing garbage).
    std::cout << "[!] Attempting to attack with a dangling pointer is "
                 "Undefined Behavior."
              << std::endl;
    std::cout
        << "[!] Uncomment `reckless.attack()` in main.cpp to see what happens."
        << std::endl;
        reckless.attack();
  }

  std::cout << "\n--- Edge Case 3: Dangling Reference with HumanA ---"
            << std::endl;
  {
    HumanA *doomed;
    {
      Weapon tempWeapon("ephemeral blade");
      doomed = new HumanA("Doomed Dave", tempWeapon);
      doomed->attack();
    } // tempWeapon is destroyed, reference inside 'doomed' is now dangling!

    std::cout << "[!] Dave's reference is now dangling. Dereferencing is "
                 "Undefined Behavior."
              << std::endl;
    std::cout
        << "[!] Uncomment `doomed->attack()` in main.cpp to see what happens."
        << std::endl;
    doomed->attack();
    delete doomed;
  }

  return 0;
}