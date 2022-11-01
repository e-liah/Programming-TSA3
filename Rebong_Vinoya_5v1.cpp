#include <iostream>

using namespace std;

int main() {

  int month_num, day;
  string month_word, sign;

  cout<<"Enter month: ";
  cin>>month_num;

  if (month_num > 0 == month_num <= 12) { //input in month_num should be from 1 - 12

    if (month_num == 1) { //January 1 - 31

      month_word = "January"; 

      cout<<"Enter day: ";
      cin>>day;
      
      //massive thanks sa help in debugging, my dood

      if (day >= 20 && day <= 31) { //from January 20 - 31
        sign = "Aquarius";
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }
      else if (day > 0 && day <=19) { //from January 1 - 19
        sign = "Capricorn"; 
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }  
      else { //for negative numbers and numbers exceeding 31
        cout<<"Invalid day of the month value.";
      }
    }

    if (month_num == 2) { //February 1 - 29 (including the leap year)

      month_word = "February";

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
    }

    if (month_num == 3) { //March 1 - 31

      month_word = "March";

      cout<<"Enter day: ";
      cin>>day;

      if (day >= 21 && day <= 31) { //from March 21 - 31
        sign = "Aries";
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }
      else if (day > 0 == day <= 20) { //from March 1 - 20
        sign = "Pisces";
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }
      else { //for negative numbers and numbers exceeding 31
        cout<<"Invalid day of the month value.";
      }
    }

    if (month_num == 4) { //April 1 - 30
    
      month_word = "April";

      cout<<"Enter day: ";
      cin>>day;

      if (day >= 20 == day <= 30) { //from April 20 - 30
        sign = "Taurus";
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }
      else if (day > 0 == day <= 19) { //from April 1 - 19
        sign = "Aries";
        cout<<"Zodiac sign for "<<month_word<<" "<<day<<" is "<<sign;
      }
      else { //for negative numbers and numbers exceeding 30
        cout<<"Invalid day of the month value.";
      }
    }

    if (month_num == 5) { //May 1 - 31
    
      month_word = "May";

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
    }

    if (month_num == 6) { // June 1 - 30
    
      month_word = "June";

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
    }

    if (month_num == 7) { //July 1 - 31
    
      month_word = "July";

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
    }

    if (month_num == 8) { //August 1 - 31
    
      month_word = "August";

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
    }

    if (month_num == 9) { //September 1 - 30
    
      month_word = "September";

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
    }

    if (month_num == 10) { //October 1 - 31
    
      month_word = "October";

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
    }

    if (month_num == 11) { //November 1 - 30
    
      month_word = "November";

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
    }

    if (month_num == 12) { //December 1 - 31
    
      month_word = "December";

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
    }
    
  }
  else // if the entered month value exceeds 12
    cout<<"Invalid month value.";

  return 0;
}