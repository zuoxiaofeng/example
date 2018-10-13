#include "static-library-example2.h"
#include "static-library-example1.h"

int Fibonacci(int n)
{
	if (n <= 2) {
		return 1;
	} else {
		return add(Fibonacci(n - 1), Fibonacci(n - 2));
	}
}
