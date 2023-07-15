#include "Harl.hpp"

int main() {
	Harl	harl;

	harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("WARNING");
	harl.complain("sfdsdfsdf");
	harl.complain("ERROR");
	harl.complain("debug");

	return 0;
}
