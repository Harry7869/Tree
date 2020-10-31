#include <bits/stdc++.h>
#include <string>
      #define ll int
      #define N 100000
      #define f(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)
      #define rf(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)
      #define po pop_back
      #define pb push_back
      #define pp pair<ll,ll>
      #define lb lower_bound
      #define fi first
      #define se second
      #define debug(x) cout << #x << " = " << x << endl
      #define ub upper_bound
      #define ibs ios_base::sync_with_stdio(false)
      #define cti cin.tie(0)
      #define all(x) x.begin(),x.end()
      #define PI 3.14159265
      #define cot cout.tie(0)
      using namespace std;
       /**
        * @author :: Sawlani
        *
        */
        vector <ll> v(N+1);
        void seq()
        {
            v[0]=-1;
            v[1]=0;
            v[2]=0;
            map <ll,ll> mp;
            set <ll> s;
            s.insert(0);
            mp[0]=1;
            f(i,3,N)
            {
                if(s.find(v[i-1])==s.end())
                    v[i]=0;
                else
                {
                    v[i]=((i-1)-mp[v[i-1]]);

                }

                mp[v[i-1]]=i-1;
                s.insert(v[i-2]);
           }

        }


        int main()
        {
            seq();
             ll t;
            cin >> t ;
            f(i,1,t)
            {
                ll n;
                cin >>  n;

                ll k=v[n];
                ll cnt=0;
                f(i,1,n)
                {
                    if(k==v[i])
                        cnt++;

                }
                cout <<  cnt << endl;

            }


        }

