//
//  main.cpp
//  Plus123
//
//  Created by 조윤영 on 2020/07/29.
//  Copyright © 2020 조윤영. All rights reserved.
//
//https://www.acmicpc.net/problem/9095
//

#include <iostream>
#define MAX_SIZE 11

using namespace std;
int solution();

int T = 0;
int N = 0;
int dp[MAX_SIZE];

void input() {
    cin>>T;
    for(int t=0; t<T; t++) {
        cin>>N;
        cout<<solution()<<"\n";
    }
}

int solution() {
    //1: 1
    //2: 1+1, 2
    //3: 1+1+1, 2+1, 1+2, 3
    
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    
    for(int i=4; i<=N; i++) {
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
    }
    
    return dp[N];
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    input();
    
    return 0;
}
