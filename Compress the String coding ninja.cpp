#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    
    
int length=input.length();

int j=0;
    for (int i = 0; i < length; i++) {

        int count = 0;
        while (i < length - 1 && input[i] ==input[i + 1]) {
            count++;
            i++;
        }
            
        count==0 ?cout<<input[i] : cout << input[i] << count;
    
}
}


int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}