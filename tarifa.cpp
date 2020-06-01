#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0;
	cin>>x;
	int n;
	cin>>n;
	int used=0;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		used+=temp;
		
	}
	cout<<x*(n+1)-used<<endl;
	return 0;
}
