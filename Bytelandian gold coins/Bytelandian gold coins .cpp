#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int a[1000000]={0};

ll rec(ll n)
{
	if(n<12)  return n;
	if(n/2 > 1000000 )
	{
		ll n_by2=rec(n/2);
		ll n_by3=rec(n/3);
		ll n_by4=rec(n/4);
		ll sum=n_by2+n_by3+n_by4;
		if(sum<=n)
			return n;
		return sum;
	}
	if (a[n/2]==0)
		a[n/2]=rec(n/2);
	if (a[n/3]==0)
		a[n/3]=rec(n/3);
	if (a[n/4]==0)
		a[n/4]=rec(n/4);
	ll sum=a[n/2] + a[n/3] + a[n/4];
	if(sum<=n)
		return n;
	return sum;
	
}

int main()
{
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	
	int t=10;
	while(t--)
	{
		ll n;  cin>>n;
		cout<<rec(n)<<"\n";
	}
	return 0;
}



