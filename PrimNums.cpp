#include<iostream>
using namespace std;

void showPrime(int, int);
void showPrime2(int a, int b);


int main()
{

	int x,y;
	cout<<"Enter first  number : ";
	cin>>x;

	cout<<"Enter second  number : ";
	cin>>y;
	showPrime2(x,y);

	
	return 0;
}

void showPrime(int a, int b)
{
    bool compositeNum;
    //a = 0
    //b = 10
	//loop each number
    // i is counting the list from a + 1 to b
    // if you compare to a then you will compare num to itself and it will get 
    // flagged as composite when it could be prime.
    for (int i = a + 1; i <= b; i++)
    {
        /* code */
        // j is comparing the nums form 2 to be to i 
        compositeNum = false;
        //start j at 2 because i mod 0 is bad and no need to start at 1
        for (int j = 2; j < i; j++)
        {
            /* code */

            //check for prime
           if(i%j==0)
            {
                /* code */
                compositeNum = true;
                // this break will break you out of the j loop 
                break;
            }            
        }

        if(compositeNum == false )
            std::cout << i << std::endl;
            
    }
}

void showPrime2(int a, int b)
{
	bool flag;

	for(int i=a+1;i<=b;i++)
	{

		flag=false;
		for(int j=2;j<i;j++)
		{

			if(i%j==0)
			{
				flag=true;
				break;
			}
		}

		if(flag==false && i>1)
			cout<<i<<endl;
	}
}