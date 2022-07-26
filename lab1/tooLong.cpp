#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    for(int i = 0; i < x; i++){
        char str[] = " ";
        cin >> str;
        int len = strlen(str);
        if(len > 10){
            char first = str[0];
            char last = str[len - 1];
            int middle = len - 2;
            cout << first << middle << last << endl;

        }
        else{
            cout << str << endl;
        }

    }
}
