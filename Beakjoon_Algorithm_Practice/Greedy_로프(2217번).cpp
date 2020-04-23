//
//  Greedy_로프(2217번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/23.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    
    
    int N;
    cin >> N;
    
    
    int lope = 0;
    vector<int> v;
    vector<int> weightVec;
    
    
    for(int i=0; i<N; i++){
        cin >> lope;
        v.push_back(lope);
    }
    
    sort(v.begin(), v.end());
    
    
    
    
    int wMax = 0;
    for(int i=0; i<N-1; i++){
        wMax = v[i+1]*(N-(i+1));
        weightVec.push_back(wMax);
    }
    
    weightVec.push_back(N*v[0]);
    
    
    sort(weightVec.begin(), weightVec.end(), greater<int>());
    
    
    
    
    cout << weightVec[0] << endl;
    
    
    return 0;
}
