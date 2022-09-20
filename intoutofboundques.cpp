#include<bits/stdc++.h>
int balancedBTs(int n) {
    
    int m = (int)pow(10, 9)+7 ;
    if( n <= 1 )
    {
        return 1; 
    }
    int x = (balancedBTs(n-1) )%m; 
    
    int y = (balancedBTs(n-2))%m ;
    

    
    int temp1 = (int)(((long long)x*x)%m );
    int temp2 = (int)(((long long)x*y*2)%m );
    
    int ans = (temp1 +temp2)%m ;

    
    return ans ;
    
    // Write your code here
}
