#include "lab_oop_05.h"

void	program_errors(const char *file_name, int i)
{
	if (i == 1)
		std::cout << "[!] Usage: " << file_name << " file1 file2 file3\n";
	if (i == 2)
		std::cout << "[-] Unable to open file " << file_name << std::endl;
	if (i == 3)
		std::cout << "[-] Unable to create file " << file_name << std::endl;
	exit(1);
}