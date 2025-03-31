#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, no = 0, f_s = 0, s_s = 0 ;
    cin >> n ;
    string a ;
    cin >> a ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i] != '4' && a[i] != '7' )
        {
            no = 1 ;
        }

        if ( a[i] == '7' || a[i] == '4' )
        {
            if ( i < ( n/2 ) )
            {
                f_s += a[i] ;
            }
            else
            {
                s_s += a[i] ;
            }
        }
    }

    if ( no == 0 && f_s == s_s )
    {
        cout << "YES\n" ;
    }
    else
    {
        cout << "NO\n" ;
    }


}
