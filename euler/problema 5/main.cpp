#include<iostream>

using namespace std;

int main ()
{
	int arr[20];
	for (int i=0; i<20; i++) arr[i]=i+1;

	for(int i=0; i<20; i++)
		for(int j=0; j<i; j++)
			if(arr[i] % arr[j] == 0)
				arr[i] /= arr[j];

	int q=1;
	for(int i=0; i<20; i++)
		q*=arr[i];

	cout<<q;

	return 0;
}
