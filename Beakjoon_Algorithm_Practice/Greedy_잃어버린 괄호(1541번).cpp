//
//  Greedy_잃어버린 괄호(1541번).cpp
//  Beakjoon_Algorithm_Practice
//
//  Created by 김난영 on 2020/04/26.
//  Copyright © 2020 KimNanyoung. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <sstream>




using namespace std;

int main(){
    
    vector <string> stringVec;
    vector <int> v;
    int sum = 0;
    
    char arr[50];
    char* arr2[50];
    
    
    cin >> arr;
    cout << "arr: " << arr << endl;
    int cnt=0;
    
    char *ptr =  strtok(arr,"-");
    
    while(ptr != NULL){
        cnt++;
       
        arr2 = ptr;
        cout <<"ptr: " <<  ptr << endl;
        char *ptr2 = strtok(*arr2,"+");
        cout <<"ptr2: " <<  ptr2 << endl;
   
        
        cout << "ptr: " << ptr << endl;
        ptr = strtok(NULL, "-");
        cout << "ptr: " << ptr << endl;
               
        
        
        

           while(ptr2 != NULL){
               
             
               if(cnt==1){
                     if(arr[0] == '-'){
                         sum = sum - stoi(ptr2);
                     }
                     else{
                         sum = sum + stoi(ptr2);
                     }
       
               }
                     
               else{sum = sum - stoi(ptr2);}
                   
               ptr2 = strtok(NULL, "+");
               
               
           }


        
        
       
        
        
        
        
       
        
        
    }
    
    
   
    
    
    
    
    
    
    cout << "answer : " << sum << endl;
    
    
    
    return 0;
}
