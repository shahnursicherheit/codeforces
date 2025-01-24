#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long n, k, sum = 0 ;
    cin >> n >> k ;
    long long element[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> element[i] ;
    }
    sort(element, element+n) ;

    if ( element[0] >= 0 && element[n-1] >= 0 )
    {
        for ( int i = n-1 ; i >= (n-k) ; i-- ) sum += element[i] ;
    }
    else if ( element[0] < 0 && element[n-1] >= 0 )
    {
        for ( int i = n-1 ; i >= (n-k) ; i-- )
        {
            if ( element[i] >= 0 )
            {
                sum += element[i] ;
            }
        }
    }
    else if ( element[0] < 0 && element[n-1] < 0 )
    {
        sum = element[n-1] ;
    }


    cout << sum ;
}
