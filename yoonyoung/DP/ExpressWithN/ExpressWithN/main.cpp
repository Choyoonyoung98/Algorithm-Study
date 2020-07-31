//
//  main.cpp
//  ExpressWithN
//
//  Created by 조윤영 on 2020/07/31.
//  Copyright © 2020 조윤영. All rights reserved.
//
//https://programmers.co.kr/learn/courses/30/lessons/42895
//

#include <string>
#include <vector>
#define MAX_SIZE 32001

using namespace std;
int dp[MAX_SIZE];

int solution(int N, int number) {
    int answer = 0;
    dp[1] = 2; // [5/5]
    dp[2] = 4; // [5/5 + 5/5]
    dp[3] = 0; //[5/5 + 5/5 + 5/5] 
    dp[4] = 0;
    dp[5] = 1;
    
    
    return answer;
}

int main(int argc, const char * argv[]) {
    solution(5, 12);
    return 0;
}
