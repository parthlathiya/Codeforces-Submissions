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

		freopen("C_in.txt","r",stdin);
	
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

	s(a);
	s(b);
	s(l);
	s(r);
	// cout<<"Ss";
	l--;
	r--;
	map<char,int> m;
	int pr[50];
	pr[0]='a';
	rep(i,1,a)
		pr[i]=pr[i-1]+1;
	re(i,b)
		pr[a+i]=pr[a-1];
	if(a<b)
{
	re(i,a-1)
		pr[a+b+i]=pr[i];
	pr[a+b+a-1]=pr[a-1]+1;
	re(i,b)
		pr[a+b+a+i]=pr[a+b+a-1];
}
else if(a>b){

	re(i,b)
		pr[a+b+i]=pr[i];
	pr[a+b+b]=pr[a-1]+1;
	rep(i,1,a-b)
		pr[a+b+b+i]=pr[a+b+b+i-1]+1;
	re(i,b)
		pr[a+b+a+i]=pr[a+b+a-1];
}
else
{
	re(i,a-1)
		pr[a+b+i]=pr[i];
	pr[a+b+a-1]=pr[a-1]+1;
	re(i,b)
		pr[a+b+a+i]=pr[a+b+a-1];
}

if((r-l)>2*((2*a)+(2*b)))
{
	
	ll mm=2*a+2*b;
	re(i,mm)
		m[pr[i]]++;
}
else
{
	ll mm=2*a+2*b;
	rep(i,l,r+1){
		// cout<<pr[i]<<" ";
		m[pr[i%mm]]++;
	}
}

cout<<m.size();


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}