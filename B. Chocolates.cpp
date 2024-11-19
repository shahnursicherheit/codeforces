#define ll long long
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
   int n ;
   cin  >> n ;
   ll a[n] ;
   for ( int i = 0 ; i < n ; i++ )
   {
       cin >> a[i] ;
   }
   ll maximum = a[n-1] ;
   ll next = a[n-1] ;
   for ( int i = n - 2 ; i >= 0 ; i-- )
   {

       if ( a[i] < next )
       {
           maximum += a[i] ;
           next = a[i] ;
       }
       else
       {
           ll temp = next - 1 ;
           if ( temp <= 0 )
           {
               break ;
           }
           maximum += temp ;
           next = temp ;
       }
   }

   cout << maximum << endl ;






}
