#include <iostream>

using namespace std;

int main(){

  int month_num, day;
  string month_word, sign;

  cout<<"Enter month: ";
  cin>>month_num;

  switch(month_num) {
    case 1: month_word = "January"; //January 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <=19) {
                sign = "Capricorn"; 
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 20 == day <= 31); {
                sign = "Aquarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }    
            break;
    case 2: month_word = "February"; //February 1 - 29 (including the leap year)
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 30) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 18) {
                sign = "Aquarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 19 == day <= 29); {
                sign = "Pisces";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 3: month_word = "March"; //March 1 - 31

            cout<<"Enter day: ";
            cin>>day;
    
            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 20) {
                sign = "Pisces";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 21 == day <= 31); {
                sign = "Aries";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 4: month_word = "April"; //April 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 30) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 19) {
                sign = "Aries";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 20 == day <= 30); {
                sign = "Taurus";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 5: month_word = "May"; //May 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 20) {
                sign = "Taurus";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 21 == day <= 31); {
                sign = "Gemini";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 6: month_word = "June";  //June 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 31) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 20) {
                sign = "Gemini";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 21 == day <= 30); {
                sign = "Cancer";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 7: month_word = "July"; //July 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 22) {
                sign = "Cancer";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 23 == day <= 31); {
                sign = "Leo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 8: month_word = "August"; //August 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 22) {
                sign = "Leo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 23 == day <= 31); {
                sign = "Virgo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 9: month_word = "September"; //September 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 31) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 22) {
                sign = "Virgo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 23 == day <= 30); {
                sign = "Libra";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 10: month_word = "October"; //October 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 22) {
                sign = "Libra";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 23 == day <= 31); {
                sign = "Scorpio";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 11: month_word = "November"; //November 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 31) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 21) {
                sign = "Scorpio";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 22 == day <= 30); {
                sign = "Saggittarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    case 12: month_word = "December"; //December 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 32) {
                cout<<"Invalid day of the month value.";
            }
            else if (day > 0 == day <= 21) {
                sign = "Saggittarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else (day <= 22 == day <= 31); {
                sign = "Capricorn";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            break;
    default: cout<<"Invalid month value.";
            break;
  }

  return 0;
}