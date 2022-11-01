#include <iostream>

using namespace std;

int main() {

  int month_num, day;
  string month_word, sign;

  cout<<"Enter month: ";
  cin>>month_num;

  switch(month_num) {
    case 1: month_word = "January"; //January 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 20 && day <= 31) { //from January 20 - 31
                sign = "Aquarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 19) { //from January 1 - 19
                sign = "Capricorn"; 
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }       
            break;
    case 2: month_word = "February"; //February 1 - 29 (including the leap year)
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 19 && day <= 29) { //from February 19 - 29
                sign = "Pisces";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 18) { //from February 1 - 18
                sign = "Aquarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 29
                cout<<"Invalid day of the month value.";
            }
            break;
    case 3: month_word = "March"; //March 1 - 31

            cout<<"Enter day: ";
            cin>>day;

            if (day >= 21 && day <= 31) { //from March 21 - 31
                sign = "Aries";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 20) { //from March 1 - 20
                sign = "Pisces";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 29
                cout<<"Invalid day of the month value.";
            }
            break;
    case 4: month_word = "April"; //April 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 20 && day <= 30) { //from April 20 - 30
                sign = "Taurus";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 19) { //from April 1 - 19
                sign = "Aries";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 30
                cout<<"Invalid day of the month value.";
            }
            break;
    case 5: month_word = "May"; //May 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 21 && day <= 31) { //from May 21 - 31
                sign = "Gemini";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 20) { //from May 1 - 20
                sign = "Taurus";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }
            break;
    case 6: month_word = "June";  //June 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 21 && day <= 30) { //from June 21 - 30
                sign = "Cancer";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 20) { //from June 1 - 20
                sign = "Gemini";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 30
                cout<<"Invalid day of the month value.";
            }  
            break;
    case 7: month_word = "July"; //July 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 23 && day <= 31) { //from July 23 - 31
                sign = "Leo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 22) { //from July 1 - 22
                sign = "Cancer";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }
            break;
    case 8: month_word = "August"; //August 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 23 && day <= 31) { //from August 23 - 31
                sign = "Virgo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 22) { //from August 1 - 22
                sign = "Leo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }
            break;
    case 9: month_word = "September"; //September 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 23 && day <= 30) { //from September 23 - 30
                sign = "Libra";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 22) { //from September 1 - 22
                sign = "Virgo";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 30
                cout<<"Invalid day of the month value.";
            }
            break;
    case 10: month_word = "October"; //October 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 23 && day <= 31) { //from October 23 - 31
                sign = "Scorpio";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 22) { //from October 1 - 22
                sign = "Libra";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }
            break;
    case 11: month_word = "November"; //November 1 - 30
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 22 && day <= 30) { //from November 22 - 30
                sign = "Sagittarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 21) { //from November 1 - 21
                sign = "Scorpio";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 30
                cout<<"Invalid day of the month value.";
            }
            break;
    case 12: month_word = "December"; //December 1 - 31
            
            cout<<"Enter day: ";
            cin>>day;

            if (day >= 22 && day <= 31) { //from December 22 - 31
                sign = "Capricorn"; 
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else if (day > 0 && day <= 21) { //from December 1 - 21
                sign = "Sagittarius";
                cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
            }
            else { //for negative numbers and numbers exceeding 31
                cout<<"Invalid day of the month value.";
            }
            break;
    default: cout<<"Invalid month value."; //if the entered month value exceeds 12
            break;
  }

  return 0;
}