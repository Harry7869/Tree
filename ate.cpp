#include <bits/stdc++.h>
    #include <string>
          #define ll long long int
          #define N 4000
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
          ll n,t;
           ll a[N+1];
           ll b[N+1];

           ll dp[N+1][N+1];

           ll rec(ll idx,ll tim)
           {
               if(tim<=0)
                return 0;
               if(idx>n)
                return 0;

               if(dp[idx][tim]!=-1)
                return dp[idx][tim];


               ll ans=LONG_MIN;
               ans=max({ans,b[idx]+rec(idx+1,tim-a[idx]),rec(idx+1,tim)});

                return dp[idx][tim]=ans;

           }

          int main()
          {
              cin >>  n >>  t;
              memset(dp,-1,sizeof(dp));
               vector <pair <ll,ll> >  vp;
              f(i,1,n)
              {
                  cin >> a[i] >>  b[i];

                  vp.pb({a[i],b[i]});
              }
              sort(all(vp));

              ll k=1;
              for(auto i:vp)
              {
                a[k]=i.fi;
                b[k++]=i.se;

              }

              cout <<  rec(1,t) << endl;


          }
