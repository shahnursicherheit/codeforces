#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int  n , m , t , g ;
    cin >> n >> m ;
    string a ;
    cin >> a ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a[i] == 'G' )
        {
            g = i ;
        }
        else if ( a[i] == 'T' )
        {
            t = i ;
        }
    }
    if ( t < g )
    {
        int temp = t ;
        t = g ;
        g = temp ;
        a[t] = 'T' ;
    }


    for ( int i = g ; i < n ; i = i + m )
    {
        if ( ( a[i+m] == '.' || a[i+m] == 'T' ) && ( i + m ) <= t )
        {
            g += m ;
        }


    }
    if ( g == t )
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }


}
/*
100 20

.....G.#.#..................#.........##....#...................#.#..........#...#.#.T..#.......#...

*/
