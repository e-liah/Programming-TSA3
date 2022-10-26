#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

  float msales, income;
  string name;

  cout<<fixed<<setprecision(2); //to set the float inputs to two decimal places

  cout<<"Enter name          : "; 
  getline (cin, name);
  cout<<"Enter monthly sales : ";
  cin>>msales;

  cout<<"\n"; //blank space before the calculation result

  if (msales < 0) {
    cout<<"Invalid monthly sales input.";
  }
  else if (msales >= 50000) {
    income = (575 + (msales * 0.16));
    cout<<name<<"'s income is $"<<income;
  }
  else if (msales < 50000 == msales >= 40000) {
    income = (550 + (msales * 0.14));
    cout<<name<<"'s income is $"<<income;
  }
  else if (msales < 40000 == msales >= 30000) {
    income = (525 + (msales * 0.12));
    cout<<name<<"'s income is $"<<income;
  }
  else if (msales < 30000 == msales >= 20000) {
    income = (500 + (msales * 0.09));
    cout<<name<<"'s income is $"<<income;
  }
  else if (msales < 20000 == msales >= 10000) {
    income = (450 + (msales * 0.05));
    cout<<name<<"'s income is $"<<income;
  }
  else (msales < 10000); {
    income = (400 + (msales * 0.03));
    cout<<name<<"'s income is $"<<income;
  }

  return 0;
}