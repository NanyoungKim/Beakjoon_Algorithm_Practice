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
    bool same = false;
  
    for(iter = mm.begin(); iter != mm.end(); iter++){

        //bool chkPlus = false;
        
        chk++;
       
        
        
        if(chk == 1){
            if(a >= iter->second){
                count++;
                //chkPlus = true;
            }
        }
        else{
            
            if(a <= iter->second){
                count++;
                a = iter->first;
                //chkPlus = true;
            }
            else if((a > iter->second) && (same==true) ){
                count++;
                a = iter->first;
            }
            
            
        }
        
         same = false;
        
        if(iter->first == iter-> second){
            same  = true;
        }
        
        
      
    }
    
    cout << count << endl;
    return 0;
}

