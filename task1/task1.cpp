// Solve function is where the implementation of the code all above is definitions that are not necessairy to see 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
typedef         vector<ll>vl;
typedef         deque<ll>dq;
typedef         pair<ll,ll>pl;
#define endl '\n'
#define testanswer if(test){cout<<"YES"<<endl;}  else {cout<<"NO"<<endl}
#define lfs cout<<fixed<<setprecision(10)
#define cinto(x) cin>>x;v.PB(x)
#define ALL(a)  (a).begin(),(a).end()
#define ALLR(a)  (a).rbegin(),(a).rend()
#define UNIQUE(a) (a).erase(unique((a).begin(),(a).end()),(a).end())
#define spa << " " <<
#define F first
#define S second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define EB emplace_back
#define aff(v) for(auto e:v) cout<<e<<" ";cout<<endl;
#define rep(i,n,m) for(ll i = (n); i < (ll)(m); i++)
#define rrep(i,n,m) for(ll i = (ll)(m) - 1; i >= (ll)(n); i--)
const ll MOD = 1e9+7;
const ll MOD9 = 998244353;
const ll INF = 1e18;
// freopen("input.txt,"r",stdin);
// freopen("output.txt,"w",stdout);


// This is the main function

void solve(){
    string s;
 getline(cin, s);
    int a , b ;
    a= 0 ; b =s.size() -1 ;
    while ( a <= b ){
        // if s[a] is not an alphabetic a++
        while ( ((s[a] >= 'a'&& s[a]<='z' )|| (s[a]>= 'A' && s[a]<='Z'  ) ) == false &&  a < b ){
            a++;
        }
         // if s[b] is not an alphabetic a++
        while ( ((s[b] >= 'a'&& s[b]<='z' )|| (s[b]>= 'A' && s[b]<='Z'  ) ) == false &&  a < b ){
            b--;
        }
        // if  s[a] is not capitalised i will capitalise it 
        if ( s[a]>= 'a' && s[a]<='z' )
            s[a]-='a'-'A';
        // if  s[b] is not capitalised i will capitalise it 
        if ( s[b]>= 'a' && s[b]<='z' )
            s[b]-='a'-'A';
 
        // if s[a] different of s[b] then it is not a palindrome and i return false 
        if( s[a]   != s[b] && a <b  ){
            cout << "false"<<endl;
            return ;}
        //else cout <<s[a] << ' '<<s[b] <<endl;
        a++;
        b--;
    }
    cout <<"true"<<endl;

    }
int main(){
        
        ios_base::sync_with_stdio(false);cin.tie(0);
        	cout<<fixed<<setprecision(15);

    
   solve();
}
