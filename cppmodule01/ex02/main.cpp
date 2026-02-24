#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
// Création d'une référence: comme un alias-> meme boite différent nom
	std::string& stringREF = str;
	std::cout << "Memory address of string    : " << &str << std::endl;
	std::cout << "Memory address by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address by stringREF : " << &stringREF << std::endl;
	std::cout << "Value of the string variable    : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR   : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF   : " << stringREF << std::endl;

	return 0;
}
