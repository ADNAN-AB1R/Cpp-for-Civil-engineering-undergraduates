#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    //Even & Odd;

    int x;
    cout << "Please enter an integer number: ";
    cin >> x;

    if ( x % 2 == 0)
    {
        cout << "Even number";
    }else{
        cout << "Odd number";
    }

    

    // Cast vote

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can cast vote";
    }
    else{
        cout << "You can't cast vote";
    }

    

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    if (age < 8)
    {
        cout << "You are a baby";
    }
    else if (age < 16)
    {
        cout << "You are young";
    }
    else{
        cout << "You are adult";
    }


    

    //Calibrated eqn = 1.087523x - 0.0875231

    double load;
    cout << "Please enter the load: ";
    cin >> load;
    double cal_load = 1.087523 * load - 0.0875231;

    if (cal_load > 10)
    {
        cout << "Beyond safe limit";
    }
    else{
        cout << "Inside safe limit";
    }

    
    

    // 100 unit -->5tk 100-150unit --> 10 150unit --> 15

    int unit;
    cout << "Please enter the amount: ";
    cin >> unit;

    if (unit < 100)
    {
        cout << "Toal bill is " << unit * 5 << "tk";
    }
    else if(unit < 150){
        cout << "Toal bill is " << unit * 10 << "tk";
    }
    else{
        cout << "Toal bill is " << unit * 15 << "tk";
    }

    
    int wt,speed,axles;

    cout << "Please enter the wt(kg) of the vehicle: " ;
    cin >> wt;
    cout << "Please enter the speed of the vehicle: ";
    cin >> speed;
    cout << "Please enter the axles of the vehicle: ";
    cin >> axles;

    if ((wt*10 <= 20) && speed <= 40 && axles >= 4)
    {
        cout << "Permission granted";
    }
    else{
        cout << "Permission denied";
    }
    
    

    // time 365 days, budget 1 lac

    int time;
    double budget;

    cin >> time >> budget;

    if (time < 365 && budget < 1)
    {
        cout << "Excellent";
    }
    else if (time <365 && budget > 1)
    {
        cout << "Over budget";
    }
    else if(time >365 && budget <1){
        cout << "Delayed";
    }
    else{
        cout << "Critical";
    }
    
    

    // pass korar jonno 45 marks lagbei. attendance hocche 75 er niche. Taile grade ek komay dibe

    int mark = 60;
    double grade;
    if (mark > 80)
    {
        grade = 4;
    }
    else if (mark > 70)
    {
        grade = 3.5;
    }
    else if (mark > 60)
    {
        grade = 3.0;
    }
    else{
        grade = 2.5;
    }

    int attendace = 45;

    if (attendace < 75)
    {
        grade-=0.5;
    }

    cout << "Your grade is " << grade;
    
    */

    int year;
    cout << "Please enter the year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 ==0 && year % 100 != 0))
    {
        cout << "This is a leap year";
    }
    else{
        cout << "This isn't a leap year";
    }
    
    
    

}
