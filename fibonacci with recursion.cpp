#include<iostream>
using namespace std;
#define ll long long

void fibonacci(int x)
{
	static ll n1 = 0, n2 = 1, n3;
	if (x > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << endl;

		fibonacci(x - 1);
	}
	if(x<0)
		return;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << 0 << endl;
	cout << 1 << endl;
	fibonacci(n - 2);


}