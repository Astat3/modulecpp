#include "zombie.hpp"
#include <cstdlib>
#include <limits.h>
int main()
{

    int N = INT_MAX;
    
    Zombie *Horde;
    Horde = zombieHorde(N, "Hamid");
    if (!Horde)
    {
        std::cout<<"Allocation Failed"<<std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < N; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
    return EXIT_SUCCESS;
}