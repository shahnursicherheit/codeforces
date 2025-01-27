
#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int a[n], n1 = 0 , n2 = 0, p1 = 0, p2 = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        if( i % 2 == 0 )
        {
            if ( a[i] > 0 )
            {
                p1++ ;
            }
            else
            {
                n2++ ;
            }
        }
        else
        {
            if ( a[i] > 0 )
            {
                p2++ ;
            }
            else
            {
                n1++ ;
            }
        }

    }
    //p1 1
    // p2 1
    //n1 1
    //n2 2

    cout << n - max( (p1+n1),(p2+n2) ) << endl ;




    return 0;
}
