//
//  Greedy_거스름돈(5585번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/23.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//

#include <iostream>

using namespace std;



int main(){
    
    
    
    int product = 0;
    cin >> product;
    
    int change = 1000 - product;
    
    int arr[6] = {500, 100, 50, 10, 5, 1};
    
    int coin = 0;
    int answer = 0;
    
    
    
    while(change != 0){
        
        for(int i=0; i<6; i++){
            
            if(change>=arr[i]){
            
                coin = change / arr[i];
                
                change = change - arr[i]*coin;
                
                answer += coin;
                
            }
            
        }
        
    }
    
    cout << answer << endl;
    
    
    
    return 0;
}
