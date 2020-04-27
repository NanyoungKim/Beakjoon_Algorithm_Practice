//
//  Greedy_대회or인턴(2875번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/26.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//

#include <iostream>

using namespace std;


bool check(int n, int m){
    
    if( ((n-2)>=0)&&((m-1)>=0) ){
        return 1;
    }
    else{
        return 0;
    }
    
}



int main(){
    
    int N,M,K;
    cin >> N >> M >> K;     //여자, 남자, 인턴
    
    
    
    
    int teamCnt = 0;
    bool chk = false;
    
    while(1){
        
        chk = false;
        
        if(  check(N,M)  && (N+M-3-K >= 0) ){
            teamCnt++;
            N = N-2;
            M = M-1;
            chk = true;
        }
        else if((chk==false)&& !check(N,M)){
            break;
        }
        else if ((chk==false) && ((N+M-3-K) < 0)){
            break;
        }
        
        
        
        
        
        
        
    }
    
    cout << teamCnt << endl;
    
    
    
    return 0;
    
}
