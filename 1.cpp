#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define in insert
#define f(n) for(ll i=0;i<n;i++)
#define f1(v) for(auto r:v) cout<<r<<" "
#define vl vector<ll>
#define rip cout<<
#define vp vector<pair<ll,ll>>  
#define map map<ll,int>
#define uMap unordered_map<ll,int>
#define nl cout<<endl
#define sv(v) sort(v.begin(),v.end())
#define sv1(v) sort(v.begin(),v.end(),greater<ll>())
#define ff(n) for(ll i = 1 ; i < n ; i++) 
#define rv(v) reverse(v.begin(),v.end())
#define maxv(a) *max_element(a.begin(),a.end())
#define minv(a) *min_element(a.begin(),a.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void pro() {
    ll n;
    cin>>n;
    vl v,v1(n);
    f(n){
        ll p;
        cin>>p;
        v.pb(p);
    }
     sv(v);
     v1[0]=v[0];
     ll s=1,k=v[0],j=v[0];
     for(int i=1;i<n;i++){
         if(v[i]>=k){
             k+=v[i];
             s++;
         }
       //  else k-=j;
         
       //  j=v[i];
         
     }
     
     
     
     
     
    //  ff(n){
    //      if(v[i]>=v1[i-1]) s++;
    //      if()
    //      v1[i]=v1[i-1]+v[i];
    //  }
     cout<<s<<endl;
     
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
  //  cin >> t;
    while(t--){
        pro();
    }
}
