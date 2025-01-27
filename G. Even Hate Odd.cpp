#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        int a[n], sumodd = 0, sumeven = 0, odd = 0, even = 0 ;

        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            if ( a[i] % 2 == 0 )
            {
                even++ ;
                sumeven += a[i] ;
            }
            else
            {
                sumodd += a[i] ;
                odd++ ;
            }
        }

        if ( n % 2 == 0 )
        {
            cout <<( max(odd, even) - min(odd, even) )/ 2 << endl;
        }
        else
            cout << -1 << endl ;


    }
}
