

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    double h, l ;
    cin >> h >> l ;
    
    /*
    first thank to open my code and second i can not do this code i try many time but does not undersatand then i search it in google 
    this is a isosceles triangle means it's two side are same
    simply h+A is equal to AL means last position of the lily 
    
    so we can use 
    AL = h+A 
    A 
    L 
    squre(AL) = squre(A) + squre(L)
    squre(h+A) = squre(A) + squre(L)
    squre(h)+2hA +squre(A) = squre(A) +squre(L)
    squre(h)+2hA = squre(L)
    2XA = squre(L) - squre(h)
    A = (squre(L) - squre(h))/2h
    
    */
    cout << fixed << setprecision(10) << ( l*l - h*h ) / ( 2 * h ) ;
    

    return 0;
}