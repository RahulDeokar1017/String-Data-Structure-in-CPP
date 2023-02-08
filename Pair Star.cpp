#include <iostream>
using namespace std;

void pairStar(char input[]) {
 
  for(int i=0;input[i]!='\0';i++){
     
      
      if(input[i]==input[i+1])
      {
          char temp=input[i+1];
         // cout<<temp<<endl;
          
          input[i+1]='*';
         
         char temp2;
          for(int j=i+1;input[j]!='\0';j++){
              cout<<temp2<<" ";
              
              temp2=input[j+1];
              
             input[j+1]=temp;
             temp=temp2;
              
           
              
          }
      }
  }


}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
   
}