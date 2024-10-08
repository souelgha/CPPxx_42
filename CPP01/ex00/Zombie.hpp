#ifndef ZOMBIE_H
	#define ZOMBIE_H

#include<string>
#include<iostream>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[0;91m\002"
# define YELLOW "\001\033[0;93m\002"
# define MAGENTA "\001\033[0;95m\002"
# define GRAY "\001\033[0;90m\002"

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	Zombie(std::string nom);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);



#endif