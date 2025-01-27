#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n, k ;
        cin >> n >> k ;
        string s ;
        cin >> s ;
        int out = 0 ;
        int j = n+1, l = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if (s[i] == '1' )
            {
                j = i ;
                break ;
            }
        }
        if( j <= k )
        {
            l = j+1 ;
        }
        else
        {
            l = 1 ;
            out += 1 ;
        }
// 000
            int count = 0 ;
            for ( int i = l ; i < n ; i++ )
            {
                if ( s[i] == '0' )
                {
                    count++ ;
                }
                else if ( s[i] == '1' )
                {
                    if ( count > k )
                    out += ((count-k)/(k+1)) ;
                    count = 0 ;
                }
            }

        if ( count > k )
            out += ((count)/(k+1)) ;
        /*else if ( count == n-1 )
        {
            out += ( count )
        }*/
       /* else if ( j == (n+1) )
            out += count/() ;*/

        cout << out << endl ;
    }
    return 0;
}
