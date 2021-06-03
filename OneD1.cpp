// Write a program to shuffle deck of cards, display the shuffled 
//deck, sort it and display the sorted deck. The deck will be 
//represented by an array of integers where the integer values 
//correspond to a card. Sorting has to be done on the basis of suites,
//and their corresponding ranks. The priority to sort the suites is: 
//HEARTS, SPADES, DIAMONDS, CLUBS.
#include<iostream>
#include<time.h>

using namespace std;

#define suites 4
#define cards 13

void show_cards(int curr_card)
{
    switch(curr_card/cards)
    {
        case 0 : cout<<"H ";
        break;
        case 1: cout<<"S ";
        break;
        case 2: cout<<"D ";
        break;
        case 3: cout<<"C ";
        break;
    }

    if((curr_card % cards) < 9)
        cout<<((curr_card % cards)+2);
    else
    {
        switch(curr_card % cards)
        {
            case 9: cout<<"J";
            break;
            case 10: cout<<"Q";
            break;
            case 11: cout<<"K";
            break;
            case 12: cout<<"A";
            break;
        }
    }
}

void show_deck(int deck[])
{
    for(int i =0;i<suites;i++)
    {
        for(int j =0;j<cards;j++)
        {
            show_cards(deck[i*cards+j]);
            cout<<"\t";
        }
        cout<<"\n";
    }
}

void Shuffle(int deck[])
{
    for(int i = 0; i < (suites * cards); i++)
    {
        deck[i] = i;
    }
    
    for(int j = (suites * cards)-1; j > 1; j--)
    {
        int k = rand() % j;
        int temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }
    show_deck(deck);
}

void sort_deck(int deck[])
{
    for(int i = 0; i < (cards * suites - 1); i++)
    {
        for(int j = i+1; j < (cards * suites); j++)
        {
            if( deck[j] < deck[i] )
            {
                int temp = deck[j];
                deck[j] = deck[i];
                deck[i] = temp;
            }
        }
    }
}
int main()
{
    int deck[suites*cards];
    srand(time(NULL));
    cout<<"Shuffle: \n";
    Shuffle(deck);
    cout<<"Sort: \n";
    sort_deck(deck);
    show_deck(deck);
    return 0;
}