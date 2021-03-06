// Number is divided by 7

#include "lab_oop_05.h"

void	rule_3(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out)
{
	int	nbr;

#if DEBUG
	std::cout << "[debug] rule_3\n";
#endif

	f1.clear();
	f1.seekg(0, std::ios::beg);
	f2.clear();
	f2.seekg(0, std::ios::beg);
	f3.clear();
	f3.seekg(0, std::ios::beg);
	f_out << "[Numbers that are divided by 7]\n";
	while (f1 >> nbr)
		if (!(nbr % 7))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
	while (f2 >> nbr)
		if (!(nbr % 7))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
	while (f3 >> nbr)
		if (!(nbr % 7))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
		return ;
}