#include<iostream>
using namespace std;
int main (){
    int weight;
    cout << "watermrlon weight:";
    cin >> weight;
    if(weight %2 == 0){
          cout << "Yes" << endl;
    }
    else if (1 < weight || weight >= 100 )
    {
        cout << "No" << endl;
    }
    else if (weight < 4){
        cout << "No" << endl;
    }
    else{
         cout << "No " << endl;    
    }
    







}