#include <iostream>
#include <ctime>

using namespace std;

int ournum();
int comnum();
void showchoice(int choice);

int main()
{
    srand(time(NULL)); // Seed the random number generator once
    int player, computer;
    
    player = ournum();
    computer = comnum();

    // Compare choices and decide the winner
    if (player == computer)
    {
        cout << "It's a tie!" << endl;
    }
    else if ((player == 1 && computer == 3) || 
             (player == 2 && computer == 1) || 
             (player == 3 && computer == 2))
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "Computer wins!" << endl;
    }

    return 0;
}

int ournum()
{
    int choice;
    cout << "1/- Rock !" << endl;
    cout << "2/- Paper " << endl;
    cout << "3/- Scissor " << endl;
    cout << "Enter choice: ";
    cin >> choice;
    showchoice(choice);
    return choice;
}

int comnum()
{
    int num2 = 1 + (rand() % 3);
    cout << "Computer chose: ";
    showchoice(num2);
    return num2;
}

void showchoice(int choice)
{
    switch (choice)
    {
    case 1:
        cout << "Rock" << endl;
        break;
    case 2:
        cout << "Paper" << endl;
        break;
    case 3:
        cout << "Scissor" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
}
