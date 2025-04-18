#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while (t-- )
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int r = 0, b = 0, finish = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {

            if ( s[i] == 'R' )
            {
                r++ ;
            }
            else if ( s[i] == 'B' )
            {
                b++ ;
            }
            if ( s[i] == 'W' || i == (n-1) )
            {
                if ( (r > 0 && b > 0 ) || ( r == 0 && b == 0 ) )
                {
                    finish = 1 ;
                    r = 0 ;
                    b = r ;
                }
                else
                {
                    finish = 0 ;
                    break ;
                }
            }
        }

        if ( finish == 0 )
        {
            cout << "NO\n" ;
        }
        else
        {
            cout << "YES\n" ;
        }
    }
}
