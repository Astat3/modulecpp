#include "Harl.hpp"
#include <iostream>

int main(void) {
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");


  harl.complain("");

  harl.complain("debug");
  harl.complain("error");


  harl.complain("\n");
  harl.complain("\t");

  harl.complain("ERRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"
				"RRRRRRRRRRRRRRROOOOOOOOOOOOOOOOOOOOOOOR");

  return 0;
}
