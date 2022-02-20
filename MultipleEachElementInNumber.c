// C++ program to compute
// product of digits in the number.
#include<bits/stdc++.h>
using namespace std;

/* Function to get product of digits */
int getProduct(int n)
{
	int product = 1;

	while (n != 0)
	{
		product = product * (n % 10);
		n = n / 10;
	}

	return product;
}

// Driver program
int main()
{
	int n = 4513;
	cout << (getProduct(n));
}

// This code is contributed by
// Surendra_Gangwar
