#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

bool isPermutation(string input1, string input2) {
    
    int l1=input1.length();
    int l2=input2.length();
    
    if(l1==l2){

        sort(input1.begin(),input1.end());
        sort (input2.begin(),input2.end());
        
           for (int i = 0; i < l1;  i++){
       if (input1[i] != input2[i])
         return false;
           }
          return true;
}



    

    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");

}