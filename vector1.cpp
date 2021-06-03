#include<iostream>
#include<iomanip>
#include<vector>
#include<math.h>
using namespace std;

void sum_average(vector<double> num)
{
    vector<double>::iterator it;
    double sum=0.00,average;
    for(it=num.begin();it!=num.end();++it)
    {
        sum+=*it;
    } 
    cout<<"The sum of the elements of the vector is: "<<setprecision(2)<<sum<<endl;
    average=sum/num.size();
    cout<<"The average of the elements of the vector is: "<<setprecision(2)<<average<<endl;
}

void min_max(vector<double> num)
{
    double a = INT_MIN ;
    double b = INT_MAX ;
    
    for( int i =0 ; i<num.size() ; i++ )
    {
        if( b > num[i])
        {
            b= num[i]; 
        }
        
        if(a<num[i])
        {
            a =num[i] ;
        }
    }
    
    cout<<"Minimum element of the vector is: "<<setprecision(2)<<b<<endl;
    cout<<"Maximum element of the vector is: "<<setprecision(2)<<a<<endl;
}

void standard_deviation(vector<double> num)
{
    vector<double>::iterator it;
    double mean;
    int length=num.size();
    double sum=0.00,difference,total=0.00,std_dev;
    for(it=num.begin();it!=num.end();++it)
    {
        total+=*it;
    }
    mean=total/length;
    for(it=num.begin();it!=num.end();++it)
    {
        difference=(mean-*it);
        sum+=pow(difference,2);
    }
    std_dev=pow((sum/length),0.5);
    cout<<"the standard deviation is: "<<setprecision(2)<<std_dev<<endl;
}
int main()
{
    int n;
    vector<double> num;
    cout<<"Enter number of elements you want to add to the vector";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        double inp;
        cin>>inp;
        num.push_back(inp);
    }
    cout<<"The elements of the vector are: "<<endl;
    vector<double>::iterator it1;
    for(it1=num.begin();it1!=num.end();++it1)
        cout<<*it1<<" ";
    cout<<endl;
    sum_average(num);
    min_max(num);
    standard_deviation(num);
    return 0;
}