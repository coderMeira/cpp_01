//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex04.hpp"

bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int	main(int ac, char** av)
{
	if (ac == 4)
	{
		std::string oldFile = av[1];
		std::string newFile = av[1];
		size_t ext = newFile.find_last_of(".");
		if (ext != std::string::npos)
			newFile = newFile.substr(0, ext);
		newFile.append(".replace");
		std::ifstream  filein(oldFile);
		std::ofstream  fileout(newFile);
		std::string	strTemp;
		if (filein)
		{
			if (is_empty(filein))
				std::remove(newFile.c_str());
			else
			{
				while (filein >> strTemp)
				{
					if(strTemp == av[2])
						strTemp = av[3];
					strTemp += " ";
					fileout << strTemp;
				}
				filein.close();
				fileout.close();
			}
		}
		else
		{
			std::cout << "Error: " << oldFile << " doesn't exist\n";
			std::remove(oldFile.c_str());
			std::remove(newFile.c_str());
		}
	}
	else
		std::cout << "Wrong number of arguments. Usage: ./ex04 <filename> s1 s2\n";
	return (0);
}
