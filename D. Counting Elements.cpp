#include<bits/stdc++.h>
using namespace std ;
int main ()
{

    int n ;
    cin >> n ;
    int a[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }

    sort(a,a+n) ;
    int count = 1, out = 0 ;
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        if ( a[i] == a[i+1] )
        {
            count++ ;
        }
        else if ( a[i] != a[i+1] )
        {
            if ( (a[i] + 1) == a[i+1] )
            {
                out += count ;

            }
            count = 1 ;
        }
    }
    cout << out << endl ;
}
