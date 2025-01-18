#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	cin >> n >> m ;
	int arr[n][m] ;
	int count = 0, sum = 0, ai[n*m], aj[n*m], k = -1 ;
	for ( int i = 0 ; i < n ; i++ )
	{
		for ( int j = 0 ; j < m ; j++ )
		{
			cin >> arr[i][j];
			if ( arr[i][j] == 0 )
			{
				count++ ;
				k++ ;
				ai[k] = i;
				aj[k] = j;
			}
			sum += arr[i][j] ;

		}
	}



	for ( int l = k ; l >= 0 ; l-- )
	{
		int i = ai[l], j = aj[l] ;
		//cout << "i and j " << i << " " << j << endl ;
		arr[i][j] = min(arr[i+1][j],arr[i][j+1])-1;
		sum += arr[i][j] ;

	}


	
	int complete = 0,incomplete = 0, i = 0, j = 0 ;
	for ( int i = 0; i < n-1 ; i++ )
	{
	    for ( int j = 0 ; j < m-1 ; j++ )
	    {
	        if ( (arr[i][j] < arr[i+1][j]) && (arr[i][j] < arr[i][j+1]) )
	        {
	            complete++ ;
	        }
	        else
	        {
	            incomplete-- ;
	        }
	    }
	}
	if ( arr[n-1][m-1] > arr[n-1][m-2] && arr[n-1][m-1] > arr[n-2][m-1] )
	{
	    complete++;
	}
	else
	incomplete-- ;
	
	
	if ( incomplete >= 0 )
	{
		cout << sum << endl ;
	}
	else
		cout << -1 << endl ;


	return 0;
}