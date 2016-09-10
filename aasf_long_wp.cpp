#include <iostream>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)


int hcf(int n1, int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n];
       rep(i,n)
       {
        cin>>a[i];
       }
       ll h;
       rep(i,n)
       {
            h=hcf(a[i],a[i+1]);
       }

       cout<<h*n<<endl;

    }
    

  
    return 0;
}