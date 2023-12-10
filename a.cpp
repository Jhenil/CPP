#include <iostream>
using namespace std;

int main() {
    string name, ask;
    int a,b,opt,add,sub,mul,div,flag;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Welcome " << name << "!!" << endl;
    cout << "----Enter requested numbers----" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    do{
    cout << "----Let's start the operations----" << endl;
    cout << "1. Add" << endl;
    cout << "2. Substract" << endl;
    cout << "3. Mulitply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose one operation among mentioned below:";
    cin >> opt;
    switch(opt) {
        case 1:
            cout << "The addition of " << a <<" and " << b <<" is " << add << endl;
        break;
        case 2:
            cout << "The substraction of " << a <<" and " << b <<" is " <<  sub << endl;
        break;
        case 3:
            cout << "The multiplication of " << a <<" and " << b <<" is " <<  mul << endl;
        break;
        case 4:
            cout << "The division of " << a <<" and " << b <<" is " <<  div << endl;
        break;
        case 5:
            exit;
        break;
        default:
            cout << "Refresh and enter a valid option:";
    }
    cout << endl << "Would you like to operate one more operation?" << endl << "Yes or No" << endl;
    cin >> ask;
    if(ask=="Yes" || ask=="yes" || ask=="Yes" || ask=="Y"){
        flag==0;
    }
    else {
        flag==1;
    }
    }while(flag==0);
    return 0;
}
