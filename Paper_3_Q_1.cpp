#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n, s, bi, c=0;
	cout<<"Enter both array's size respectively: ";
	cin>>m>>n;
	int a[m];
	int b[n];
	cout<<"Enter 1st array: \n";
	for(i=0;i<m;i+=1)
	{
		cin>>a[i];
	}
	cout<<"Enter 2nd array: \n";
	for(i=0;i<n;i+=1)
	{
		cin>>b[i];
	}
	if(m>n)
	{
		s=n;
		bi=m;
	}
	else
	{
		s=m;
		bi=n;
	}
	cout<<"\nUnion: ";
	i=0;
	j=0;
	while(i<m && j<n) 
	{
        if (a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i+=1;
        }
 
        else if(b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j+=1;
        }
 
        else 
		{
            cout<<b[j]<<" ";
            j+=1;
            i+=1;
        }
    }
    while(i < m)
        cout<<a[i++] <<" ";
 
    while(j < n)
        cout<<b[j++] <<" ";
    cout<<"\nIntersection: ";
    i=0;
	j=0;
	while(i<m && j<n) 
	{
        if (a[i]<b[j])
        {
            i+=1;
        }
 
        else if(b[j]<a[i])
        {
            j+=1;
        }
 
        else 
		{
            cout<<b[j]<<" ";
            j+=1;
            i+=1;
        }
    }
    cout<<endl;
}
