#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    cout<<endl<<"Hello Ray!"<<endl<<"Let's calculate how long it will take you to reach a financial goal."<<endl;

    cout << endl<<"Enter the financial goal: " << endl;
    int final;
    cin>>final;

    cout <<endl<< "Enter the monthly starting rent: " << endl;
    int initialRent;
    cin>>initialRent;

    cout<<endl<<"Enter the monthly costs associated with this property: "<<endl;
    int costs;
    cin>>costs;

    int rent = initialRent-costs;

    cout <<endl<< "Enter the annual increase: " << endl;
    double increase;
    cin>>increase;

    int annualRent = rent*12;
    int sum=annualRent;
    int years =1;

    double rate;

    int previousSum;
     cout<<endl<<"After "<<years<<" year, we have a total of "<<sum<<" income.";

    while(final>sum)
    {
        rate = pow(increase,years);
        previousSum=sum;
        sum+=annualRent*rate;
        years++;

        cout<<endl<<"After "<<years<<" years, we have a total of "<<sum<<" income.";

    }
    int excess = final-previousSum;
    //cout<<endl<<"Number of whole years: "<<years-1;
    //cout<<endl<<"Amount to earn in year "<<years<<" to reach target: "<<excess;

    int finalMonthlyRent =rent*rate;
   // cout<<endl<<"final monthly rent: "<<finalMonthlyRent;
    //cout<<endl<<"excess amount: "<<excess;
    float numerator = (excess%finalMonthlyRent);
    double monthFraction = numerator/finalMonthlyRent;
    int days = monthFraction*30;
    int numMonths = excess/finalMonthlyRent;




    cout<<endl<<endl<<"To make your amount of "<<final<<", you need "<<years-1<<" year(s), "<<numMonths<<" month(s) and "<<days<<" day(s) of rental income.";
    //cout<<endl<<"Number of months: "<<numMonths;
    //cout<<endl<<"Number of days: "<<days;
    cout<<endl<<endl;


    return 0;
}
