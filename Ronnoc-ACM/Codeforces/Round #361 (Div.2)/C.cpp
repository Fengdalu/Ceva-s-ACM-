#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<fstream>
#include<numeric>
#include<iomanip>
#include<bitset>
#include<list>
#include<stdexcept>
#include<functional>
#include<utility>
#include<ctime>
#include<cassert>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<(int)(n);i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define MP make_pair
#define PB push_back
#define AA first
#define BB second
#define OP begin()
#define ED end()
#define SZ size()
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef vector<int> VI;
typedef vector<LL> VL;
#define cmin(x,y) x=min(x,y)
#define cmax(x,y) x=max(x,y)
const LL MOD = 1000000007;
const double PI = acos(-1.);
const double eps = 1e-9;
LL modPow(LL a,LL b,LL MOD){
	LL ret=1;for(;b;b>>=1){
		if(b&1)ret=ret*a%MOD;a=a*a%MOD;
	}return ret;
}

LL check(LL n){
	LL ret=0,w;
	for(LL i=2;(w=i*i*i)<=n;i++){
		ret+=n/w;
	}
	return ret;
}
void solve(){
	LL m;
	cin>>m;
	LL le=8,re=1000000000000000000LL,ge;
	while(re>=le){
		if(re-le<=1){
			if(check(le)>=m)ge=le;
			else ge=re;
			break;
		}
		LL me=(le+re)/2;
		LL fm=check(me);
		if(fm>=m)re=me;
		else le=me;
	}
	if(check(ge)==m)cout<<ge<<"\n";
	else cout<<-1<<"\n";
}

int main(){
	int _T=1;
	rep(CA,0,_T){
		solve();
	}
	return 0;
}