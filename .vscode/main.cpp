#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string userAnswerCountry;
    string firstFavoritePlayer;
    string secondFavoritePlayer;


    cout << "What is your name? ";
    cin >> name;
    cout << "What country are you from? ";
    cin >> userAnswerCountry;
    cout << "I want to know your two favorite cricket player names" << endl;
    cout << "Enter your first favorite cricket player name: ";
    cin >> firstFavoritePlayer;
    cout << "Now enter your second favorite cricket player name: ";
    cin >> secondFavoritePlayer;

    cout << name << " is from " << userAnswerCountry << " and his favorite 2 cricket players name is " << firstFavoritePlayer + " and " + secondFavoritePlayer << "." << endl;

    return 0;
}

