#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t ;
    while (t-- )
    {
        int n ;
        cin >> n;
        int b[n-1], a[n] ;
        for ( int i = 0 ; i < n-1 ; i++ )
        {
            cin >> b[i] ;
        }
        a[0] = b[0] ;
        for ( int i = 1 ; i < n ; i++ )
        {
            //int temp ;
            if ( i == n-1 )
            {
                a[i] = b[i-1] ;
            }
            else
            {
                  a[i] = b[i]|b[i-1] ;
            }
        }
        int count = 0 ;

        for ( int i = 0 ; i < n-1 ; i++ )
        {
            int temp = a[i] & a[i+1] ;
            if ( temp == b[i] )
            {
                count++ ;
            }
        }
        /*for ( int i =  0 ; i < n ; i++ )
        {
            cout << a[i] << " " ;
        }
        cout << endl << count << endl  << endl ;*/
        if ( count == n-1 )
        {
            for ( int i = 0 ; i < n ; i++ )
            {
                cout << a[i] << " " ;
            }
            cout << endl ;
        }
        else
        {
            cout << -1 << endl ;
        }
    }
}
