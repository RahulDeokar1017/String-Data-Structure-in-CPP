#include<iostream>
using namespace std;


void reverse(char name[],int length){
    int i=0;
    int j=length-1;
    while(i!=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    
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
   
  reverse(name,length);
     
    cout<<"reverse string is: "<<name;
    
    return 0;
}