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

	double strtodbl(string a)
	{
		int n=a.length();
		int i=0;
		double ans=0;
		while(i<n){
			ans+=pow(10,n-1-i)*(a[i]-'0');
			i++;cout<<ans<<"\n";}
			return ans;
	}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("B_in.txt","r",stdin);
	
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
	string a;
	cin>>a;
	ll m=a.length();
	mll fi;
	mll la;
	re(i,m)
	{
		if(fi[a[i]]==0)fi[a[i]]=i+1;
		la[a[i]]=i+1;
	}
	// cout<<fi['A'];
	set<pll> s;
	re(i,26)
	{
		if(fi['A'+i]){
			s.insert({fi['A'+i],0});
		
		s.insert({la['A'+i],1});
	}
	}

	ll ans=-1,cnt=0;
	for(auto a:s)
	{
		if(a.ss==0)
			cnt++;
		else
			cnt--;
		ans=max(ans,cnt);
	}
	// cout<<ans;
	if(ans<=k)
		cout<<"NO";
	else
		cout<<"YES";
	cout<<strtodbl("24222");
	

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}