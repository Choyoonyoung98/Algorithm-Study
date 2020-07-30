//
//  main.cpp
//  NTiling
//
//  Created by 조윤영 on 2020/07/29.
//  Copyright © 2020 조윤영. All rights reserved.
//
//https://www.acmicpc.net/problem/11726
//

#include <iostream>
#define MAX_SIZE 1001

using namespace std;
int N = 0;
int dp[MAX_SIZE];

void input() {
    cin>> N;
}

int solution() {
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3; i<= N; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    return dp[N];
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    cout<<solution()<<"\n";
    
    return 0;
}
