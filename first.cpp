#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int test;
	cin>>test;
	for (int i = 0; i < test; i++)
	{
		int a,b;
		cin>> a >> b;
		cout<< a+b <<endl;
	}

	return 0;
}