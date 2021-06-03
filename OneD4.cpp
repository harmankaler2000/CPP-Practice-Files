#include<iostream>
#include<random>
#include<time.h>
using namespace std;

int main()
{
    //total possible birthdays
    int days_year = 365;
    //number of common birthdays needed
    int n;
    cout<<"Enter the number: \n";
    cin>>n;
    //initially 0 people enetered and a variable to see if it has the same birthday
    int birthday,people_entered = 0;
    vector<int> arr (days_year,false);
    for(int i = 0;i < n; i++)
    {
        //vector for no of birthdays set to false
        vector<int> arr (days_year,false);
        srand(time(0));
        while(true)
        {
            people_entered += 1;
            birthday = rand() % days_year;
            if(arr[birthday])
            {
                //two people with same birthday
                break;
            }
            arr[birthday] = true;
        }
    }
    cout<<"People needed for that to happen: "<<(float(people_entered)/float(n));
}