#include <iostream>
#include<cstring>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void  pairStar(char input[]) {
   
  int i=0;
  while(input[i]!='\0'){
      cout<<"for loop"<<endl;
      
      if(input[i]=='x'){
          cout<<"caught"<<endl;
          for(int j=i;input[j]!='\0';j++){
              
              input[j]=input[j+1];
          }
      }
      else{
          i++;
      }
  }
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
   cout<<strlen(input);
}