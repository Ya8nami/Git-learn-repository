#include <iostream>

int Fibonacci(int n);

int main()
{
	int n;
	std::cin >> n;

	int fib = Fibonacci(n);

	std::cout << fib;
	std::cin.get();
	return 0;
}

int Fibonacci(int n)
{
	if(n == 1 || n == 2) {
		return 1;
	} else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}