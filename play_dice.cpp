/* Add your name here */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(NULL)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    int die_1;
    int die_2;
    int dice_sum;
    int point;
    bool final_roll;

    char decision;
    cout << "Welcome to a game of Craps " << endl;
    cout << "press y to start the game" << endl;
    cin >> decision;
    while(decision == 'y' || decision == 'Y')
    {
        string s;
        cout << "Press enter to roll" << endl;
        getline(cin,s);
        {
            die_1 = rand() % 6 + 1;
            die_2 = rand() % 6 + 1;
            dice_sum = die_1 + die_2;
            cout << "You rolled a " << die_1 << " and a " << die_2;
            if(dice_sum == 7 || dice_sum == 11)
            {
                cout << "Your sum was " << dice_sum << " Congraulations You Won" << endl;
            }
            else if(dice_sum == 2 || dice_sum == 3 || dice_sum == 12)
            {
                cout << "Your sum was " << dice_sum << " Sorry but you lost" << endl;
            }
            else
            {
                point = dice_sum;
                cout << " Your point is " << point << endl;
                bool is_point = false , is_seven = false;
                while (!is_point && !is_seven)
                {
                    string s;
                    cout << "Press enter to roll" << endl;
                    getline(cin,s);
                    die_1 = rand() % 6 + 1;
                    die_2 = rand() % 6 + 1;
                    dice_sum = die_1 + die_2;
                    is_point = (dice_sum == point);
                    is_seven = (dice_sum == 7);
                    cout << point << endl;
                }
                if(is_point){
                    cout << "Congratulations You Won!" << endl;
                }
                else if (is_seven) {
                    cout << "Sorry you lost";
                }
                
            }
        }
        cout << "Do you want to roll again? (Y/N) ";
        cin >> decision;
    }

    cout << "Thanks for playing." << endl;
}




