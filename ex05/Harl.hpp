#include <string>

class Harl
{
	public:
		void complain( std::string level );
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		const 	std::string complaint_strs[4] = { "DEBUG",
												  "INFO",
												  "WARNING",
												  "ERROR" };
		typedef void (Harl::*complaint)( void );
		const 	complaint complaints[4] = { &Harl::debug,
											&Harl::info,
											&Harl::warning,
											&Harl::error };
};
