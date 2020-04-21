//
//  Greedy_동전_0(11047번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/18.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//
//

#include <iostream>
using namespace std;


int main(){
    
    
    int N, K;
    int num = 0;
    int answer = 0;//
    
    
    cin >> N >> K;
    int *arr = new int[N];
    
    for(int i = 0; i<N; i++){
        
        cin >> num;
        arr[i] = num;
        
    }
    
    
    
    while(K != 0){
        
        for(int i=N-1; i >= 0; ){
            
            if(K - arr[i] >= 0){
                answer ++;
                K -= arr[i];
            }
            else{
                i--;
            }
        }
        
    }
    
    
    cout << answer << endl;
    
    
    return 0;
}
