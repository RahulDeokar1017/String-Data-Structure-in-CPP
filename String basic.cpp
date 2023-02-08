#include<iostream>
using namespace std;

int main(){
    char name[10] ;//"Rahul";
    
   

    cout<<"Enter the element"<<endl;

    cin>>name;
    cout<<name<<endl;

    int count=0;

    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    cout<<count<<endl;


    return 0;
}