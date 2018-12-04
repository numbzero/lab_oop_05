#include "lab_oop_05.h"

int	main(int argc, char const *argv[])
{
	std::ifstream	f1_in;
	std::ifstream	f2_in;
	std::ifstream	f3_in;
	std::ofstream	f_out;

	if (argc != 4) program_errors(argv[0], 1);
	f1_in.open(argv[1], std::ios::in);
	if (!f1_in)	program_errors(argv[1], 2);
	f2_in.open(argv[2], std::ios::in);
	if (!f2_in) program_errors(argv[2], 2);
	f3_in.open(argv[3], std::ios::in);
	if (!f3_in) program_errors(argv[3], 2);
	f_out.open("output_files/output", std::ios::out);
	if (!f_out) program_errors("output_files/output", 3);
	rule_1(f1_in, f2_in, f3_in, f_out);
	rule_2(f1_in, f2_in, f3_in, f_out);
	rule_3(f1_in, f2_in, f3_in, f_out);
	rule_4(f1_in, f2_in, f3_in, f_out);
	f1_in.close();
	f2_in.close();
	f3_in.close();
	f_out.close();
	return 0;
}