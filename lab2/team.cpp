#include <iostream>
using namespace std;

int main(){
    int x,res = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        int a,b,c;
        bool flag = false;
        cin >> a >> b >> c;
        if(a == 1){
            if(b == 1 || c == 1){
                flag = true;
            }
        }
        else if(b == 1){
                if(c == 1){
                  flag = true;
            }
        }

        if(flag == true){
            res++;
        }
    }
    cout << res;
}
