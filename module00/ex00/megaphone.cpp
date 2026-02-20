#include <iostream>
#include <string>


int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		return 0;
	}
	for (int i = 1; i < ac ; i++)
	{
		std::string s(av[i]);
		size_t len = s.length();
		for (size_t j = 0; j < len; j++)
		{
			if (s[j] >= 'a' && s[j]<='z')
				s[j] = s[j] - 32;
		}
		std::cout<<s<<" ";
		
	}
	std::cout<<std::endl;
	return 0;
}