#include <iostream>
#include <random>
using namespace std; 

void clearScreen() //Clears the screen
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void options() //Displays the option screen
{
    cout << "0. Exit\n" <<
            "1. Rock\n" <<
            "2. Paper\n" <<
            "3. Scissors\n"
            "Enter your choice: ";
}

int botNum() //Picks a number between 1-3
{
    random_device rd;  
    mt19937 eng(rd()); 
    uniform_int_distribution<int> distr(1, 3);
    int bot = distr(eng); 

    return bot;
}

string botChoice(int num) //Turns the bot choice number into a string to the corresponding choice
{
    string choice;
    if (num == 1)
    {
        choice = "rock";
    }
    else if(num ==2)
    {
        choice = "paper";
    } 
    else if(num ==3)
    {
        choice = "scissors";
    }
    return choice;
}

void counter(int win, int lose) //Displays the users wins and losses
{
    cout << "Wins: " << win << " | " << "Loesses: " << lose << "\n";
}

int main()
{   
    int user=-1; //User choice
    int win=0; //Win counter
    int lose=0; //Lose counter
    int bot; //Bot choice
    string cont; 

    while (user!=0)
    {
        options();
        cin >>user;

        switch (user)
        {
            case 0:
            {
                clearScreen();
                if(win!=0||lose!=0) //If the user didn't win or lose the counters will not output
                    counter(win, lose);
                cout << "Exiting Game...";
                exit(0);
                break;
            }

            case 1: //User picks rock
            {
                clearScreen();
                bot = botNum();
                cout << "You picked rock! The bot picked " << botChoice(bot)<< "\n";
                if (bot==1) //Bot picks rock
                {
                    cout << "It's a tie!\n";
                }
                else if(bot==2) //Bot picks paper
                {
                    lose++;
                    cout << "You lose!\n";
                }
                else if(bot==3) //Bot picks scissors
                {
                    win++;
                    cout << "You win!\n";
                }
                counter(win, lose);

                cout << "\nEnter any key to continue: "; cin>> cont;
                clearScreen();
                break;
            }

            case 2: //User picks paper
            {
                clearScreen();
                bot = botNum();
                cout << "You picked paper! The bot picked " << botChoice(bot)<< "\n";
                if (bot==1) //Bot picks rock
                {
                    win++;
                    cout << "You win!\n";
                }
                else if(bot==2) //Bot picks paper
                {
                    cout << "It's a tie!\n";
                }
                else if(bot==3) //Bot picks scissors
                {
                    lose++;
                    cout << "You lose!\n";
                }
                counter(win, lose);

                cout << "\nEnter any key to continue: "; cin>> cont;
                clearScreen();
                break;
            }

            case 3: //User picks scissors
            {
                clearScreen();
                bot = botNum();
                cout << "You picked scissors! The bot picked " << botChoice(bot)<< "\n";
                if (bot==1) //Bot picks rock
                {
                    lose++;
                    cout << "You lose!\n";
                }
                else if(bot==2) //Bot picks paper
                {
                    win++;
                    cout << "You win!\n";
                }
                else if(bot==3) //Bot picks scissors
                {
                    cout << "It's a tie!\n";
                }
                counter(win, lose);

                cout << "\nEnter any key to continue: "; cin>> cont;
                clearScreen();
                break;
            }
            
            default:
            {
                clearScreen();
                cout << "Invalid Option! Please try again.\n";
                break;
            }
        }
    }

    return 0;
}