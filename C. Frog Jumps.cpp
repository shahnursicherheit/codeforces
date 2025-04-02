#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        string s ;
        cin >> s ;
        int size = s.size(), d = 0, a[size], j = 0  ;
        for ( int i = 0 ; i < size ; i++ )
        {
            d++ ;
            if ( s[i] == 'R' )
            {
                a[j] = d ;
                j++ ;
                d = 0 ;
            }
        }
        if ( d != 0 )
        {
            a[j] = d + 1 ;
            d = 0 ;
            j++ ;
        }
        sort(a,a+j);
        cout << a[j-1] << endl ;

    }
}
