// File: program3.cpp
// Author: Dylan Bowman
// Student ID: N644F787
// Assignment Number: 3
// Description: Prints out a calendar to which the user has specified
// Last Changed: September 9th 2014; 16:04

#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
     int userinput_numberdays, userinput_dayofweek;

     
     cout << "\nEnter the number of days in the month: ";
     cin >> userinput_numberdays;
     
     while (userinput_numberdays < 28 || userinput_numberdays > 31)
{       cout << "Error: input not within range please try again (eg. 28,29,30,31): ";
        cin >> userinput_numberdays;
     if (userinput_numberdays < 28 || userinput_numberdays > 31)
        break;
}    if (userinput_numberdays >= 28 && userinput_numberdays <= 31)
{    cout << "Enter the day of the week in which the month will begin (1=SUN, 7=SAT): ";
     cin >> userinput_dayofweek;
     
     while (userinput_dayofweek < 1 || userinput_dayofweek > 7)
{       cout << "Error: input not within range please try again (eg. 1=SUN, 2=MON, etc.): ";
        cin >> userinput_dayofweek;
     if (userinput_dayofweek < 1 || userinput_dayofweek > 7)
        break;
}
     if (userinput_dayofweek >= 1 && userinput_dayofweek <= 7)    
     cout << "\nSun Mon Tue Wed Thu Fri Sat\n\n";
     
     switch (userinput_dayofweek)
{    case 1: cout << setw(2) << " 1   2   3   4   5   6   7\n 8   9  10  11  12  13  14\n15  16  17  18  19  20  21\n22  23  24  25  26  27  28\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "29  30  31\n\n";
             break;
     case 2: cout << setw(2) << "     1   2   3   4   5   6\n 7   8   9  10  11  12  13\n14  15  16  17  18  19  20\n21  22  23  24  25  26  27\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "28\n\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "28  29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "28  29  30  31\n\n";
             break;
     case 3: cout << setw(2) << "         1   2   3   4   5\n 6   7   8   9  10  11  12\n13  14  15  16  17  18  19\n20  21  22  23  24  25  26\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "27  28\n\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "27  28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "27  28  29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "27  28  29  30  31\n\n";
             break;
     case 4: cout << setw(2) << "             1   2   3   4\n 5   6   7   8   9  10  11\n12  13  14  15  16  17  18\n19  20  21  22  23  24  25\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "26  27  28\n\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "26  27  28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "26  27  28  29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "26  27  28  29  31  31\n\n";
             break;
     case 5: cout << setw(2) << "                 1   2   3\n 4   5   6   7   8   9  10\n11  12  14  14  15  16  17\n18  19  20  21  22  23  24\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "25  26  27  28\n\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "25  26  27  28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "25  26  27  28  29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "25  26  27  28  29  30  31\n\n";
             break;
     case 6: cout << setw(2) << "                     1   2\n 3   4   5   6   7   8   9\n10  11  12  13  14  15  16\n17  18  19  20  21  22  23\n24";
             if (userinput_numberdays == 28)
             cout << "  25  26  27  28\n\n";
             else if (userinput_numberdays == 29)
             cout << "  25  26  27  28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << "  25  26  27  28  29  30\n\n";
             else if (userinput_numberdays == 31)
             cout << "  25  26  27  28  29  30  \n31\n\n";
             break;
     case 7: cout << setw(2) << "                         1\n 2   3   4   5   6   7   8\n 9  10  11  12  13  14  15\n16  17  18  19  20  21  22\n";
             if (userinput_numberdays == 28)
             cout << setw(2) << "23  24  25  26  27  28\n\n";
             else if (userinput_numberdays == 29)
             cout << setw(2) << "23  24  25  26  27  28  29\n\n";
             else if (userinput_numberdays == 30)
             cout << setw(2) << "23  24  25  26  27  28  29\n30\n\n";
             else if (userinput_numberdays == 31)
             cout << setw(2) << "23  24  25  26  27  28  29\n30  31\n\n";
             break;
}    



}
     if (userinput_numberdays < 28 || userinput_numberdays > 31 || userinput_dayofweek < 1 || userinput_dayofweek > 31)
     cout << "You have entered an invalid input and the program will now terminate.\n\n";


     return 0;
}
