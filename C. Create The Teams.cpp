
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int test ; // number of test csae 
    cin >> test ;
    
    while ( test-- ) // number of times the programmer run 
    {
        long long n, x, teamCount = 0 ; // n is total team size and x is skill needed 
        cin >> n >> x ;
        long long team[n] ;
        for ( int i = 0 ; i < n  ; i++ )
        {
            cin >> team[i] ;
            if ( team[i] >= x )
            {
                teamCount++ ;
            }
        }
        
        sort(team,team+n) ;
        int count = 1 ;
        for ( int i = n-teamCount -1 ; i >= 0  ; i-- )
        {
            if ( team[i]*count >= x )
            {
                teamCount++ ;
                count = 1 ;
            }
            else
            {
                count++ ;
            }
        }
        cout << teamCount << endl ;
    }
    return 0;
}