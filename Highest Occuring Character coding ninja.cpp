#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {

 int i=0;
 int temp=0;
 char highest;

   while(input[i]!='\0'){

    int count=0;

    for(int j=0;input[j]!='\0';j++){

        if(input[i]==input[j]){
            count++;
        }
    }

    if(count>temp){
        temp=count;
        highest=input[i];
    }

  

  
 i++;
   }
 
return highest;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}