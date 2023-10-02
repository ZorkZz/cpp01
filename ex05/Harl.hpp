#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstring>
# include <string>
# include <map>

class	Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Harl::*ptr[4])(void);
};


#endif