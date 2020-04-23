//
//  Greedy_회의실배정(1931번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/21.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    
    multimap<int,int> mm;
    multimap<int,int>::iterator iter;
    multimap<int,int>::iterator iterPlus;
    
    
    int N;
    cin >> N;
    
    int k,v = 0;
    
    for(int i = 0; i<N; i++){
        
        cin >> v >> k;
        
        mm.insert(pair<int,int>(k,v));
      
    }
    
   //  for(iter = mm.begin(); iter != mm.end(); iter++){
         
     //    cout << "first: " << iter->first << " second : " << iter->second << endl;
         
   //  }
    
    
    
    
    
    
    int a = mm.begin()->first;
    int count = 0;
    
    //if((mm.begin() -> first) == (mm.begin()->second)){
    //           count--;
    //}
    
    
    int chk=0;
    bool change = false;
    int keep = 0;
    int finish = 0;
  
    for(iter = mm.begin(); iter != mm.end(); iter++){

        //bool chkPlus = false;
        
        chk++;
        change = false;
        
        
        
        
        
        if(chk == 1){
            if(a >= iter->second){
                count++;
                change = true;
                
            }
        }
        else{
            
            if(a <= iter->second){
                count++;
                a = iter->first;
                change = true;
                //chkPlus = true;
            }
            else if((a > iter->second) && (keep == a) && ((iter->second)>=finish)){
                count++;
                a = iter->first;
                change = true;
            }
            
            
        }
        
        if(change==true){
            keep = iter->second;
            
            if((iter->first) != (iter->second)){
                finish = iter->first;
            }
        }
        
        
        
      
    }
    
    cout << count << endl;
    return 0;
}

