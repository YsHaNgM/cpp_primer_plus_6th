#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double S_interest=0.1;
  const double C_interest=0.05;
  double Daphne_all=100;
  double Cleo_all=100;
  int year=1;
  
  while(Daphne_all>=Cleo_all)
  {
    Daphne_all=100*(1+S_interest*year);
    Cleo_all=100*pow((1+C_interest),n);
    year++;
  }

  cout<<"after "<<year<<"years,"<<endl;
  cout<<"Daphne now has "<<Daphne_all<<", Cleo now has "<<Cleo_all<<endl;
}
