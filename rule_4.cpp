// Number is positive, even and on even position.

#include "lab_oop_05.h"

void	rule_4(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out)
{
	int	position;
	int	nbr;

#if DEBUG
	std::cout << "[debug] rule_4\n";
#endif

	f1.clear();
	f1.seekg(0, std::ios::beg);
	f2.clear();
	f2.seekg(0, std::ios::beg);
	f3.clear();
	f3.seekg(0, std::ios::beg);
	f_out << "[Numbers that are positive, even and on even position]\n";
	position = 1;
	while (f1 >> nbr)
	{
		if (nbr > 0 && !(nbr % 2) && !(position % 2))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
		position++;
	}
	position = 1;
	while (f2 >> nbr)
	{
		if (nbr > 0 && !(nbr % 2) && !(position % 2))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
		position++;
	}
	position = 1;
	while (f3 >> nbr)
	{
		if (nbr > 0 && !(nbr % 2) && !(position % 2))
		{
#if DEBUG
			std::cout << nbr << std::endl;
#endif
			f_out << nbr << "\n";
		}
		position++;
	}
	return ;
}