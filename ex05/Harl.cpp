#include "Harl.hpp"

Harl::Harl(void)
{
	this->ptr[0] = &Harl::debug;
	this->ptr[1] = &Harl::info;
	this->ptr[2] = &Harl::warning;
	this->ptr[3] = &Harl::error;
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string	str[4];

	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
	for (size_t i = 0; i < 4; i++)
	{
		if (str[i] == level)
			(this->*ptr[i])();	
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
