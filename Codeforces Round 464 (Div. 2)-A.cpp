///Md. Econozzaman Econ
///Department of CSE 
///BAIUST

////-----------------Lib------------------------------------
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;

///-------------Define-----------------------------------------------
#define H3XU5 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long int
#define pii pair<int, int>
#define pll pair<long long, long long> // Changed 'll' to 'long long'
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define int long long // Changed 'int' to 'long long'
#define endl "\n"
#define PI acos(-1.0)
#define IN freopen("input.txt",'r',stdin)
#define cin1(x) cin >> x
#define cin2(x,y) cin >> x >> y
#define cin3(x, y, z) cin >> x >> y >> z
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(d,min(a,min(b,c)))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(d,max(a,max(b,c)))
#define no cout << "NO" << endl ;
#define yes cout << "YES" << endl ;
#define Count(C, x) count(C.begin(), C.end(), x)

///----------------------------Read-Write-------------------------------------
#define READ freopen("input.txt","r",stdin) // Removed semicolon
#define WRITE freopen("output.txt","w",stdout) // Removed semicolon

///----------------------------loop------------------------------------------

#define fo(i,a,m) for(long long i = a ; i < m ; i++) // Changed 'll' to 'long long'
#define refor(i,a,m) for(long long i = a ; i > m ; i--) // Changed 'll' to 'long long'
#define foreq(i,a,m) for(long long i = a ; i <= m ; i++) // Changed 'll' to 'long long'
#define revforeq(i,a,m) for(long long i = a ; i >= m ; i--) // Changed 'll' to 'long long'

///----------------------------print--------------------------------------------
#define cout1(x) cout << x << endl // Added missing space before '<<'
#define cout2(x,y) cout << x << " " << y << endl // Added missing space before '<<'
#define cout3(x,y,z) cout << x << " " << y << " " << z << endl // Added missing space before '<<'

//-----------------------------solve function(main code in it)---------------------------

void solve()
{
    int n,temp=0,flag=0,a,b,c,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        a=arr[i];
        b=arr[a-1];
        c=arr[b-1];
        d=arr[c-1];
        if(a==d)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
            cout<<"NO"<<endl;
    }

}

///-------------------------------main function-------------------------
int32_t main()
{
    H3XU5;

    solve();
    return 0;
}
