#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#pragma once



#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(){;}
        ~Zombie();
        void announce(void)const;
        void setname(std::string& name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
