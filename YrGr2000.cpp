//Mansi Kulkarni
//2307123082
//ENTC B1

#include<iostream>
using namespace std;
int main() {
    float a;
    cout << "Enter a year greater than 2000: ";
    cin >> a;
    try{
        if (a<2000){
            throw "You entered a year less than 2000";
        }
        cout << "You entered the year "<<a<<" which is greater than 2000";
    } catch (const char *msg){
        cout << msg;
    }
    return 0;
}
