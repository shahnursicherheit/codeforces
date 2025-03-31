#define ll long long

#include <bits/stdc++.h>
using namespace std ;
int main()
{
    
    ll n ;
    cin >> n ;
    ll a[200001];
    for ( ll i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    
    sort(a,a+n);
    ll day = 0 ;
    for ( ll i = 0 ; i < n ; i++ )
    {
        if ( a[i] > day )
        {
            day++ ;
        }
    }
    cout << day << endl ;

    return 0;
}