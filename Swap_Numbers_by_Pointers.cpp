#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers :\n";
	cin >> a >> b;
	int *x, *y, temp;
	x=&a;
	y=&b;
	temp=*x;
	*x=*y;
	*y=temp;
	cout << "Numbers after swapping :";
	cout << "\nFirst number = "<< a;
	cout << "\nSecond number = "<< b;
	return 0;
}
