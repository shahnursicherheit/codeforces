#include<bits/stdc++.h>
using namespace std ;
int main ()
{

    int n ;
    cin >> n ;
    int t = 1, count = 0 ;
    int a[10], j = 0 ;
    while ( t > 0 )
    {
        int temp = n % 10 ;
        a[j] = temp ;
        j++ ;
        n = (  n - (n%10) ) / 10 ;
        if ( n < 1 )
        {
            t = -1 ;
        }


    }
    //cout << j << " " ;
    reverse(a,a+j) ;
    /*for ( int i = 0 ; i < j ; i++ )
    {
        cout << a[i] << "  " ;
    }*/
    for ( int i = 1 ; i < j ; i++ )
    {
        count += pow(2,i) ;
    }
   // cout << count << "   " ;
    int k = -1, count2 = 0 ;
    for ( int i = j-1 ; i >= 0 ; i-- )
    {
        k++ ;
        if ( a[i] ==  4 )
        {
            //int k = i + 1 ;
            //k++ ;
            count2 += pow(2,k) ;
        }
    }

    cout << count + ( pow(2,j) - count2) << endl ;
}
    /*
        4 7
        44 47 74 77
        444 447 474 477 744 747 774 777
        4444 4447 4474 4477 4744 4747 4774 4777 7444 7447 7474 7477 7744 7747 7774 7777
        44444 44447 44474 44477 44744 44747 44774 44777 47444 47447 47474 47477 47744 47747 47774 47777
        474744
        774444
        */
