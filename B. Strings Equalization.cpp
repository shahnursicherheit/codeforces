
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int x ;
    cin >> x ;
    string s , t ;
    while ( x-- )
    {
        cin >> s >> t ;
        int n = s.length() ;
        int out = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < n ; j++ )
            {
                if ( s[i] == t[j] )
                {
                    out = 1 ;
                    break ;
                }
                
            }
        
        }
        if ( out == 0 )
        {
            cout << "NO\n" ;
        }
        else
        {
            cout << "YES\n" ;
        }
    }

    return 0;
}