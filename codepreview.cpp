#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(false),cin.tie(NULL);
#define endl '\n'
#define pb(v, x) v.push_back(x);
#define vout(v) for(auto x:v) cout<<x<<' '; cout<<endl;
#define mpr make_pair
#define ump unordered_map
#define ust unordered_set
#define st set
#define lb(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ub(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define mod 1000000007 // 1e9+7
 
//Number theory functions
 
int ceil(int a, int b){
  return (a+b-1)/b;
}
int fact(int n){
  if(n==0 || n==1) return 1;
  return (n*fact(n-1))%mod;
}
 
int power(int a, int b){
  int res = 1;
  while(b){
    if(b%2) res = (res*a)%mod;
    a = (a*a)%mod;
    b = b/2;
  }
  return res;
}
int modinv(int a){
  return power(a,mod-2);
}
 
int nCr(int n, int r){
  return (fact(n)*modinv(fact(r))*modinv(fact(n-r)))%mod;
}
int nPr(int n, int r){
  return (fact(n)*modinv(fact(n-r)))%mod;
}
 
int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b,a%b);
}
int lcm(int a, int b){
  return (a*b)/gcd(a,b);
}
 
bool isPrime(int n){
  if(n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}
int distinct_primefactors(int n){
  int count = 0;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      count++;
      while(n%i==0) n = n/i;
    }
  }
  if(n>1) count++;
  return count;
}
int divisors(int n){
  int count = 0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      count++;
      if(i!=n/i) count++;
    }
  }
  return count;
}
int digitSum(int n){
  int sum = 0;
  while(n){
    sum += n%10;
    n = n/10;
  }
  return sum;
}
int digitCount(int n){
  int count = 0;
  while(n){
    count++;
    n = n/10;
  }
  return count;
}
 
//Bit Manipulation or Binary functions
 
int setBit(int n, int pos){
  return n|(1<<pos);
}
int countSetBits(int n){
  int count = 0;
  while(n){
    n = n&(n-1);
    count++;
  }
  return count;
}
 
//Sort vector of pair by second element
/* sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
return a.second < b.second;
});
*/
 
//Solve function
void solve(){
  int n,k;
  cin>>n>>k;
 
}
 
int32_t main(){
  fast;
  int t = 1;
//Comment if single test case
  cin>>t;
while(t--){
  solve();
}
  return 0;
}
