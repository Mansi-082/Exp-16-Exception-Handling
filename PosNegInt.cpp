//Mansi Kulkarni
//23070123082
//ENTC B1

#include<iostream>
using namespace std;
int main() {
    float a;
    cout << "Enter number: ";
    cin >> a;
    try{
        if (a<0){
            throw a;
        }
        cout << "You entered "<< a <<", which is a positive integer. ";
    } catch (const float a){
        cout << "You entered "<< a <<", which is a negative integer. ";
    }
    return 0;
}
