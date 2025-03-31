

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    static int max = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        
        if ( a[max] < a[i] )
        {
            max = i ;
        }
    }
    int yes = 1 ;
    for ( int i = 0 ; i < n - 1 ; i++ )
    {
        if ( i < max-1 )
        {
            if ( a[i] > a[i+1] )
            {
                yes = 0;
                break ;
            }
        }
        
        else if ( i > max )
        {
            if ( a[i] < a[i+1] )
            {
                yes = 0 ;
                break ;
            }
        }
        
    }
    
    if ( yes == 1 )
    {
        cout << "YES\n" ;
    }
    else
    {
        cout << "NO\n" ;
    }
    
    
    

    return 0;
}