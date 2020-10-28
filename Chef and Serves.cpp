#include <iostream>
#include <map>
#include <bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		ll p1,p2,k;
		cin >> p1 >> p2 >> k;
         ll ans=(p1+p2)/k;
         if(ans%2==0)
         	cout << "CHEF" << endl;
         else
         	cout << "COOK" << endl;
	}
}
