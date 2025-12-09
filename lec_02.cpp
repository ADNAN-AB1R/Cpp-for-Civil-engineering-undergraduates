#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) //Function 
{
    // int x; //Declaration
    // x = 2; //Initialization
    // int y;
    // y = 3;
    // int ans;
    // ans = x + y;
    // cout << ans;

    // int x = 2,y = 3,ans = x + y;
    // cout << ans;

    // double x = 2.3;
    // double y = 3.4;
    // cout << x + y;

    // cout << sizeof(float)<<endl;
    // cout << sizeof(double);

    // char x = 'a';
    // cout << x;


    //Sum of two integers
    int x,y,ans;
    cout << "Please enter the first number: ";
    cin >> x;
    cout << "Please enter the second number: ";
    cin >> y;
    ans = x + y;
    cout << "The summation is " << ans;

    return 0;
}

