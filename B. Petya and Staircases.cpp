#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m ;
    cin >> n >> m ;
    long long a[m] ;
    for ( long long i = 0 ; i < m ; i++ )
    {
        cin >> a[i] ;
    }
    sort(a,a+m) ;
    long long count = 1, j = 0, ans = 1 ;
    for ( long long i = 0 ; i < m ; i++ )
    {
        if ( a[i] == (a[i+1]-1) && (i+1) < m )
        {
            count++ ;
            if ( a[i+1] == (a[i+2]-1) && (i+2) < m )
            {
                count++ ;
                ans = -1 ;
                break;
            }
            else
            i ++ ;
        }
    }
    if ( a[m-1] == n || a[0] == 1 ) ans = -1 ;
    if ( ans == -1 )
    {
        cout << "NO\n" ;
    }
    else
    {
        cout << "YES\n" ;
    }
    
    return 0;
}