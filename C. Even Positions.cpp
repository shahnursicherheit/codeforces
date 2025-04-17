#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int count = 0, count2 = 0, temp = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( s[i] == '(' && s[i+1] != ')' )
            {
                //count2++ ;
                temp = 1 ;
                count2 = 0 ;
            }
             if ( s[i] == '_' && temp == 1 )
            {
                //count2++ ;
                //cout << " 1 " << count2  << endl ;
                s[i] = ')' ;
                count += count2 ;
                count2 = 0 ;
                temp = 0 ;
            }
            else if ( temp == 1 )
            {
                count2++ ;
            }
        }
        for ( int i = n-1 ; i >= 0 ; i-- )
        {
            if ( s[i] == ')' && s[i-1] != '(' )
            {
                //count2++ ;
                temp = 1 ;
                count2 = 0 ;
            }
            if ( s[i] == '_' && temp == 1 )
            {
                //count2++ ;
                //cout << " 2 " << count2  << endl ;
                s[i] = '(' ;
                count += count2 ;
                count2 = 0 ;
                temp = 0 ;
            }
            else if ( temp == 1 )
            {
                count2++ ;
            }
        }

        cout << count << endl ;
    }
}
