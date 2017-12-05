#include <iostream>
#include <time.h>
#define MATHLIB_STANDALONE
#include "Rmath.h"

int main()
{
	auto tt = time(NULL);
	set_seed(tt, 8675309);

	for(auto i = 0; i < 25; ++i)
	{
		auto u = runif(0.0, 1.0);
		auto z = qnorm(u, 0.0, 1.0, 1, 0);
		std::cout << u << ",\t" << z << "\n";
	}

	std::cout << std::endl;

	return 0;
}

/* Compile as follows:
 * $ g++ -o rnd rnd.cpp --std=c++14 -lRmath -lm
 */
