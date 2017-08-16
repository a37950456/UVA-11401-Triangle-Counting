//
//  main.cpp
//  Trangle counting
//
//  Created by Tina Tsai on 2017/8/10.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;


unsigned long long dp[1000005]; /* dp[i] = 使用最大邊為i構成的triangle */

void init() {
    memset(dp,0,sizeof(dp));
    dp[3] = 0;
unsigned long long a1, n;
    for ( int i = 4 ; i <= 1000000 ; i ++ ) {
        a1 = i-3;
        n = (a1+1)/2;
        dp[i] = dp[i-1] + n*(a1-n+1) ; /* dp[i] = dp[i-1] 加上使用邊長為i的情況 */
    }
}

int main() {
    int n;
    init();
    while ( scanf("%d",&n) == 1 && n >= 3 ) {
        printf("%llu\n",dp[n]);
    }
    return 0;
}
