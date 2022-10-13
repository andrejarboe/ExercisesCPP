#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n;
	srand(time(0));
	n = rand() % 91 + 10;
	cout<<"The randomly selected number is :"<<n;
    cout << "\n";
	
	return 0;
}
