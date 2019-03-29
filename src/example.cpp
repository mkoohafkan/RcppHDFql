//include HDFql C++ header file (make sure it can be found by the C++ compiler)
#include <iostream>
#include "HDFql.hpp"
// [[Rcpp::export]]
int foo(std::string test)
{
	// display HDFql version in use
	std::cout << "HDFql version: "<< HDFql::Version << std::endl;
	HDFql::execute(test);
	return EXIT_SUCCESS;
}
