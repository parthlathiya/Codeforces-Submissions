#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1e9+7
#define maxlong 1e18+5


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("D_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	// std::vector<int> v[100];
	// std::vector<int> temp(100,4);
	// rep(i,0,100)
	// 	v[i] = temp;

	s(n);
	s(k);
	s(p);
	vpll v;
	// key 1 person 0
	re(i,n){
		cin>>a[i];
		v.pb({a[i],0});
	}
	re(i,k){
		cin>>b[i];
		v.pb({b[i],1});
	}
	srt(v);

	ll ans=-1;
	ll st=lower_bound(all(v),{p,-1})-v.begin();
	ll keycnt=0;
	vll kk;

	rep(i,st+1,v.size()){
		//lets assume there is no key at location of office
			if(v[i].ss==1){
				if(pp.size()>0){
					ri.pb({abs(pp[0]-v[i].ff),{pp[0],v[i].ff}});
					pp.pop_front();
				}
				else
					kk.pb(v[i].ff);
				
				// keycount++;
			}
			else{
					if(kk.size()==0)
						pp.pb(v.ff);
					else{

						ans=max(ans,v.ff-p);
						kk.pop_back();
					}
				}
		}


	for(ll i=st;i>=0;i--){
		//lets assume there is no key at location of office
			if(v[i].ss==1){
				if(ppp.size()>0){
					rii.pb({abs(pp[0]-v[i].ff),{pp[0],v[i].ff}});
					ppp.pop_front();
				}
				else
					kkk.pb(v[i].ff);
				
				// keycount++;
			}
			else{
					if(kkk.size()==0)
						ppp.pb(v.ff);
					else{
						ans=max(ans,v.ff-p);
						kkk.pop_back();
					}
				}
		}

		if(pp.size()>0)
		{
			srt(rii);

			kkk pp
		}




	}

	re(i,k)
		cin>>b[i];
	for

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}