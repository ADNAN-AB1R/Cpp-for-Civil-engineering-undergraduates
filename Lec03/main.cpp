#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

namespace Block1
{
    int x = 2;
    int y = 3;

}
namespace Block2
{
    int x = 10;
    int y = 12;

}

int main()
{
    /*
    double x = 2.7140750172086;
    int y = 49;
    cout << "Ceil (x) " << ceil(x) <<endl;
    cout << "floor (x) " << floor(x) <<endl;
    cout << "sqrt (y) " << sqrt(y) <<endl;
    cout << "7^2 " << pow(7,2) <<endl;
    cout << "log(1) " << log(1)<<endl;
    cout << "sin(x) " << sin(x)<<endl;
    cout << M_PI;


    double x = M_PI;
    cout << "Normal pi: " << x << endl;
    cout << "Pi upto 10: " << setprecision(10) << x << endl;
    cout << "Pi upto 20: " << setprecision(20) << x << endl;



    // A statement block
    {
        int x = 2;
        int y = 5;
        {
            int x = 3;
            int y = 5;
            cout << "Inside block Sum " << x + y <<endl;
        }
        cout << "Outside block Sum " << x + y;
    }


    // Nested Block
    int x = 2;
    {
        int x = 44;
        cout << "Inside block x: " << x <<endl;
    }
    cout << "Outside block x: " << x <<endl;
    {
        int x = 22;
        cout << "Inside second block" << x <<endl;
    }
    cout << "Outside block " << x;

    int x = 2;
    {
        int x = 5;
    }
    cout << x;

    */

    //Namespace block Access
    cout << Block1::x + Block1::y <<endl;
    cout << Block2::x + Block2::y <<endl;
    return 0;
}
