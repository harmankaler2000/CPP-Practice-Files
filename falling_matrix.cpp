#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>


const int width = 80;

const int flips_per_line = 5;

const int sleepTime = 100;

using namespace std;

int main()
{
    int i = 0, x = 0;
    
    //get distinct rand values at runtime
    srand(time(NULL));
    //decide whether to print the character in that particular iteration
    bool switches[width] = {0};

    //set of characters to print from
    const string ch = "1234567890qwertyuiopasdfghjkl"
                      "zxcvbnm,./';[]!@#$%^&*()-=_+";
    const int l = ch.size();

    //green font over black console
    //for hacker-y look
    system("Color 0A");

    while(true)
    {
        //loop over width
        for(i = 0; i< width; i += 2)
        {
            //prints character if switches[i] is 1
            //else print a blank character
            if(switches[i])
                cout<<ch[rand() % l] <<" ";
            else
                cout<<" ";
        }

        //flip the defined amount of boolean values
        //after each line
        for(i = 0; i != flips_per_line; ++i)
        {
            x = rand() % width;
            switches[x] = !switches[x];
        }
        cout<<endl;

        //sleep makes the function delay
        //convert to milliseconds
        this_thread::sleep_for(chrono::milliseconds(sleepTime));
    }
    return 0;
}