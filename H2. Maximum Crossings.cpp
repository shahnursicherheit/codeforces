#define ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ll t, n ;
    cin >> t ;
    while ( t-- )
    {
        cin >> n ;
        ll a[n] ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        }
        ll count = 0 ;
        for ( int i = 1 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < i ; j++ )
            {
                if ( a[j] >= a[i] )
                {
                    count++ ;
                }
            }
        }

        cout << count << endl ;

    }
}
