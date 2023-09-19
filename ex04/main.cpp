# include <iostream>
# include <cstring>
# include <string>
# include <fstream>

int	main(int ac, char **av)
{
	std::ofstream	file;
	std::string		line;

	if (ac != 4)
		return (1);
	file.open(av[0]);
	std::ifstream file (av[0]);
	if (file.is_open())
	{
		while (std::getline(file, line))
			std::cout << line << std::endl;
	}
	file.close();
	return (0);
}