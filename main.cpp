/*#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll mod  = 1000000007;
ll gcd_a(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1;y=0;
        return a;
    }
    ll gcd = gcd_a(b,a%b,x,y);
    ll temp = x;
    x = y;
    y = temp-a/b*y;
    return gcd;
}
ll ni(ll a,ll m){
    ll x,y;
    ll gcd = gcd_a(a,m,x,y);
    if(gcd!=1)
        return -1;
    m = abs(m);
    x = (x%m+m)%m;
    return x;
}
int main()
{
    ll n,sum=0;
    scanf("%lld",&n);
    /*sum = mu(3,n+1)%mod;
    sum--;
    sum = sum/2;
    sum = ni(2,mod-2)%mod;
    printf("%lld\n",sum);
	return 0;
}*/
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
#define CLR(a,b) memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define LL long long
const LL mod = 1000000007;
LL quick_mod(LL a,LL n)
{
	LL ans = 1;
	while (n)
	{
		if (n & 1)
			ans = ans * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return ans;
}
int main()
{
	LL n;
	scanf ("%lld",&n);
	LL ans = quick_mod(3,n+1);
	ans--;
	LL inv = quick_mod(2,mod);
	printf("%lld\n",inv);
	ans = ans * inv % mod;
	printf ("%lld\n",ans);
	return 0;
}

