# include <iostream>
# include <cstring>
# include <string>
# include <fstream>

std::string	repalce_string(std::string str, std::string to_find, std::string to_replace);

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	new_file;
	std::string		line;
	std::string		file_name;
	std::string		to_replace;
	std::string		to_find;

	if (ac != 4)
		return (1);
	file_name = av[1];
	to_find = av[2];
	to_replace = av[3];
	file.open(file_name);
	if (file.is_open())
	{
		new_file.open(file_name + ".replace");
		while (std::getline(file, line, '\n'))
		{
			new_file << repalce_string(line, to_find, to_replace) << std::endl;
		}
		file.close();
	}
	return (0);
}

std::string	repalce_string(std::string str, std::string to_find, std::string to_replace)
{
	std::string	result;
	size_t		pos;
	size_t		found;

	pos = 0;
	while ((found = str.find(to_find, pos)) != std::string::npos) {
		result += str.substr(pos, found - pos);
		result += to_replace;
		pos = found + to_find.length();
	}
	if (result.empty() && found == std::string::npos)
		return str;
	result += str.substr(pos);
	return result;
}
