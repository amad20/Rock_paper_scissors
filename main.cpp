//Amad Saeed
// This program allows you to play Rock Paper Scissors
//4/19/21
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void winner(int, int );

int computer() {
    const int min_value = 1;
    const int max_value = 3;
    int answer;
    unsigned seed = time(0);
    srand(seed);

    answer = (rand() % (max_value - min_value + 1)) + min_value;
    cout << "The computer chose ";
    if (answer == 1)
        cout << "rock\n";
    else if (answer == 2)
        cout << "paper\n";
    else if (answer == 3)
        cout << "scissors\n";
    return answer;
}
int main() {
    int decision;
    cout << "Press 1 for rock" << endl;
    cout << "Press 2 for paper" << endl;
    cout << "Press 3 for scissors" << endl;
    cout << "Enter your choice (1-3)" << endl;
    cin >> decision;
    if (decision == 1)
        cout << "You chose rock" << endl;
    else if (decision == 2)
        cout << "You chose paper" << endl;
    else if (decision == 3)
        cout << "You chose scissors" << endl;
    else if (decision > 3)
        cout << "ERROR Pick 1 for rock, 2 for paper , or 3 for scissors";
    int computerchoice = computer();
    winner(decision,computerchoice);
    return 0;
}
void winner(int decision,int computerchoice){
    if (decision == computerchoice)
        cout << "It was a tie.";
    else if (decision == 2 && computerchoice == 1)
        cout << "You Won Paper beats Rock!";
    else if (decision == 1 && computerchoice == 2)
        cout << "Computer Won Paper beats Rock";
    else if (decision == 3 && computerchoice== 1)
        cout << "Computer Won Rock beats Scissors";
    else if (decision == 1 && computerchoice == 3)
        cout << "You Win Rock beats Scissors";
    else if (decision == 3 && computerchoice == 2)
        cout << "You Won Scissors beats Paper";
    else if (decision == 2 && computerchoice == 3)
        cout << "Computer Won Scissors beats Paper";
}


