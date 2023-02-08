#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char name1[10];
    char name2[15];
    char name3[2];

    cin.getline(name1,10);

    cin.getline(name2,15);

    cin.getline(name3,2);

// 1] strlen

cout<<strlen(name1)<<endl;

//2]strcmp

cout<<strcmp(name1,name2)<<endl;
//3]strcmp

strcpy(name1,name2);
cout<<name1<<endl;

strcpy(name1,"never");

cout<<name1<<endl;

//4]strncpy

strncpy(name1,name2,3);
cout<<name1<<endl;

strncpy(name1,name3,4);
cout<<name1<<endl;


    return 0;
}