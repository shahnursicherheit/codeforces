#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n, k ;
    cin >> n >> k ;
    string s;
    char c[k] ;
    cin >> s ;

    for ( int i = 0 ; i < k ; i++ )
    {
        cin >> c[i] ;
    }
    unsigned long long  count = 0, count1 = 0 ;
    unsigned long long substring = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < k ; j++ )
        {
            if ( s[i] == c[j] )
            {
                count1++ ;
            }
        }

        if ( count1 == 1 )
        {
            count++ ;
            count1 = 0 ;
        }
        else{
            substring += ( count*(count+1))/2 ;
            count = 0 ;
        }
    }

    if ( count > 0 )
    {
        substring += ( count*(count+1) )/2;
    }

    cout << substring << endl ;
}
