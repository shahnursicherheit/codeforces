#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    int a[n][m] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            cin >> a[i][j] ;
        }
    }
    
    int min1 = INT_MAX , min2 = INT_MAX ;
    
    pair<int,int> min_list[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i][0] > a[i][1] )
        {
            min1 = a[i][1] ;
            min2 = a[i][0] ;
        }
        else
        {
            min1 = a[i][0] ;
            min2 = a[i][1] ;
        }
        
        for ( int j = 2 ; j < m ; j++ )
        {
            if ( a[i][j] < min2 )
            {
                if ( a[i][j] < min1 )
                {
                    min2 = min1 ;
                    min1 = a[i][j] ;
                }
                else
                min2 = a[i][j] ;
            }
        }
        
        min_list[i].first = min1;
        min_list[i].second = min2 ;
    }
    
    int min = INT_MAX ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( min_list[i].second < min )
        {
            min = min_list[i].second ;
        }
    }
    
    cout << min << endl ;
    

    return 0;
}