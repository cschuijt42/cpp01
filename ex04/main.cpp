#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>

int	main(int ac, char **av)
{
	// Check arg count
	if (ac != 4)
	{
		std::cerr << "Please provide three arguments." << std::endl;
		return 1;
	}

	// Check if we've got an input file
	std::ifstream input(av[1]);
	if (!input.is_open())
	{
		std::cerr << "Could not open input file: "
				  << std::strerror(errno)          << std::endl;
		return 1;
	}

	// Check if we've got an output file
	std::string	output_file = av[1];
	output_file.append(".replace");

	std::ofstream output(output_file);
	if (!output.is_open())
	{
		std::cerr << "Could not open output file: "
				  << std::strerror(errno)           << std::endl;
		input.close();
		return 1;
	}

	std::string    to_replace   = av[2];
	std::string    replace_with = av[3];
	std::string    input_line;
	
	// Loop through file line by line
	// Each line gets compared against the line to replace,
	// if they match, the replaced line gets added to the output buffer.
	while (true)
	{
		getline(input, input_line);
		if (input.eof() && input_line.empty())
			break;
		if (input_line.compare(to_replace) == 0)
			output << replace_with << std::endl;
		else
			output << input_line << std::endl;
		input_line.clear();
	}

	// Clean up
	input.close();
	output.close();
	return 0;
}
