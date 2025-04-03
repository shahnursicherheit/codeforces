#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n, m, k ;
    cin >> n >> m >> k ;
    int r[n], index[n], min = INT_MAX, index_ofrow = -1, value = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> r[i] >> index[i] ;
    }
    
    for ( int i = 1 ; i <= m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( r[j] == i )
            {
                if ( min > index[j] )
                {
                    min = index[j] ;
                }
            }
        }
        value += min  ;
        min = INT_MAX ;
    }
    //int value = ( ( min + 2 ) * m * r[index_ofrow]) - 1 ;
    if ( value > k )
    cout << k << endl ;
    else
    cout << value << endl ;
}