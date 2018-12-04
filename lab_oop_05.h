#ifndef LAB_OOP_05_H
# define LAB_OOP_05_H

# include <iostream>
# include <fstream>

# define DEBUG true

void	program_errors(const char *file_name, int i);
void	rule_1(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out);
void	rule_2(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out);
void	rule_3(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out);
void	rule_4(std::ifstream &f1, std::ifstream &f2, std::ifstream &f3, std::ofstream &f_out);

#endif