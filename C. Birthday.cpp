#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    cin >> n ;
    long long child[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> child[i] ;
    }

    sort(child,child+n) ;
    long long maincycle[n] ;
    int m = n-1, j = 0, count = 0, count2 = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( i % 2 == 0 )
        {
            maincycle[j] = child[i] ;
            j++ ;
        }
        else
        {
            maincycle[m] = child[i] ;
            m-- ;
        }
    }

    for ( int i = 0 ; i < n ; i++ )
    {
        cout << maincycle[i] << " " ;
    }
    cout << endl ;
    return 0;
}
