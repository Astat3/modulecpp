#include "harl.hpp"

int main() {
  Harl harl;

  std::cout << "--- Standard tests ---" << std::endl;
  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");

  std::cout << "--- Edge cases tests ---" << std::endl;
  harl.complain("UNKNOWN");
  harl.complain("");
  harl.complain("WARNING ");
  std::cout << "--- Huge string test ---" << std::endl;
  harl.complain(std::string(1000000, 'A'));
}