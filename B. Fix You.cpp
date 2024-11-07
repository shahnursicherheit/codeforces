#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int  s , d ;
        cin >> s >> d ;
        char a[s][d] ;

        for ( int i = 0 ; i < s ; i++ )
        {
            for ( int j = 0 ; j < d ; j++ )
            {
                cin >> a[i][j] ;
            }
        }
        int count = 0 ;
        for ( int i = d - 1 ; i >= 0  ; i-- )
        {
            if ( a[s-1][i] == 'D' )
            {
                count++ ;
            }
        }
        for ( int i = s - 1 ; i >= 0 ; i-- )
        {
            if ( a[i][d-1] == 'R' )
            {
                count++ ;
            }
        }
        cout << count << endl ;
    }
}
