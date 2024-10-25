#include<bits/stdc++.h>
using namespace std;
/* Take the day number and and print the corresponding day  1 for monday and so on for upto 7 for sunday */ 
int main(){

   int day;
   cout << "Enter the Number:";
   cin >> day;

   switch(day){
      case 1:
      cout << "Monday";
      break;

      case 2:
      cout << "Tuesday";
      break;

      case 3:
      cout << "wednesday";
      break;

      case 4:
      cout << "Thursday";
      break;

      case 5:
      cout << "Friday";
      break;

      case 6:
      cout << "Saturday";
      break;

      case 7:
      cout << "Sunday";
      break;

      default:
      cout << "invalid";
   }

    return 0;
}