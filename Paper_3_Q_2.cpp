#include <iostream>
using namespace std;
void rotate(int a[], int d, int n)
{
	int r[n],i;
	for(i=0;i<n;i+=1)
	{
		if(i+d<n)
		{
			r[i]=a[i+d];
		}
		else
		{
			r[i]=a[i+d-n];
		}
	}
	cout<<"\nRoatated array: ";
	for(i=0;i<n;i+=1)
		cout<<r[i]<<" ";
}
int main()
{
	int i, d, n;
	cout<<"Enter array's size: ";
	cin>>n;
	int a[n];	
	cout<<"Enter the array: \n";
	for(i=0;i<n;i+=1)
	{
		cin>>a[i];
	}
	cout<<"Enter no. of rotations: ";
	cin>>d;
	rotate(a,d,n);
	
}
