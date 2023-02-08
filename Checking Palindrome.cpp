#include<iostream>
using namespace std;


bool palindrome(char name[],int length){
      int i=0;
    int j=length-1;
    bool pal;
    while(i!=j){
        if(name[i]==name[j]){
            pal=true;}
            
            else{
                pal=false;
            }
            
      i++;
      j--;
      
    }
    
    return pal;
}




int get_length(char name[]){
    
  int  count=0;
  
  for(int i=0;name[i]!='\0';i++){
      count++;
  }
  return count;
}


int main(){
    char name[15];
    
    cout<<"Enter the string"<<endl;
    
    cin.getline(name,15);
    
   int length=get_length(name);
   
  
  
cout<<palindrome(name, length);
     
    
    return 0;
}