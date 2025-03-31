#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n, a ;
    cin >> n >> a ;
    int t[n] ;
    int count = 0, count2 = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> t[i] ;
        
    }
    if ( t[a-1] == 1 ) count++ ;
    int j = a-1, mid = a/2 ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( t[j+i] == 1 && t[j-i] == 1 ) count += 2 ;
        else if ( j-i < 0 && t[j+i] == 1 ) count++ ;
        else if ( j+i > n && t[j-i] == 1 ) count++ ;
        
    }
    cout << count << endl ;

    return 0;
}