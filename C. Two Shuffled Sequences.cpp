
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    
    sort(a,a+n) ;
    int in = -1, de = -1, j = -1, k = -1, ans = 0, first[n] , second[n] ; // increasing decreasing 
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i] > in )
        {
            j++ ;
            first[j] = a[i] ;
            in = a[i] ;
        }
        else if ( a[i] > de )
        {
            k++ ;
            second[k] = a[i] ;
            de = a[i] ;
        }
        else
        {
            ans = -1 ;
            break ;
        }
    }
    
    if ( ans == -1 )
    {
        cout << "NO\n" ;
    }
    else
    {
        cout << "YES\n" << j+1 << endl ;
        for ( int i = 0 ; i <= j ; i++ )
        {
            cout << first[i] << " " ;
        }
        cout << endl << k+1 << endl ;
        for ( int i = k ; i > -1 ; i-- )
        {
            cout << second[i] << " " ;
        }
        cout << endl ;
    }

    return 0;
}