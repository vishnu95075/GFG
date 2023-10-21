#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define Sort(x) sort(all(x))
#define outpt(v) for(auto i:v)cout<<i<<" ";
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define sti set<int>
#define mpii map<int,int>
#define pii pair<int,int>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define lop(i, N) for (int i = 0; i < N; i++)
#define loop(i, x, N) for (int i = x; i < N; i++)
#define mod %1000000007

void ans_solve()
{
   int n;
   cin>>n;
   
   ll total = 0;
   int ele;
   
   int a = 0,b = 0,c = 0;
   
   for(int i=0;i<n;i++){
       cin>>ele;
       total += ele; 
       if(ele%4 == 1)a++;
       else if(ele%4 == 3) c++;
       else if(ele%4 == 2) b++;
   }
   
   if(total%4 != 0)
   {
       cout << -1 << '\n';
       return;
   }
   
   int ans = (b+1)/2;
   int d = min(a,c);
   ans += d;
   a -= d;
   c -= d;
   
   ans += (a/4)*3 + max(0,(a%4)-1) + (c/4)*3 + max(0,(c%4)-1);
   
   cout << ans << '\n';
}

signed main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
       ans_solve();
    }
}
