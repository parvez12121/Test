#include <iostream>

using namespace std;

int factorial(int a)
{
	return (a == 1) ? 1 : factorial(a-1) * a;
}

int main()
{
	return 0;
}
