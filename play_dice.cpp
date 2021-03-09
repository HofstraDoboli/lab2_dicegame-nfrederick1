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
    int die_1; // dice
    int die_2; // dice
    int dice_sum; // the sum of the dice
    int point = 0; // The holder point 
    bool final_roll= false; //  terminates loop if anything happens to end the game
    char decision; // Decides if the game will be played again 
    cout << "Welcome to a game of Craps: The game of craps is perhaps the most famous of all dice games. The player begin by throwing two standard dice.\nEach dice can have a value of 1 to 6. If the sum of these dice is 7 or 11, the player wins.\nIf the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point.\nThe player continues to roll until either the point comes up again, in which case the player wins, or the player throws 7, in which case they lose. ";
    cout << "Press Y to start and N to exit. ";
    cin >> decision;
    while (decision == 'y' || decision == 'Y') //Checks the decision
    {
        die_1 = rand() % 6 +1;
        die_2 = rand() % 6 +1;
        dice_sum = die_1 + die_2;
        cout << "You rolled a " << die_1 << " and a " << die_2 << ". Your sum is " << dice_sum << endl;
        point += dice_sum;
        while (final_roll == false)
        {
           if (dice_sum == 7 || dice_sum == 11)
           {
               cout << "Your sum was " << dice_sum << " Congraulations You Won" << endl; break;
               final_roll = true;

           }else if(dice_sum == 2 || dice_sum == 3 || dice_sum == 12)
           {
              cout << "Your sum was " << dice_sum << " Sorry but you lost" << endl; break;
              final_roll = true;
           }else{
              point += dice_sum;
              cout << "Your point is " << point << " Let's roll Again" << endl; break;
              final_roll = true; 
              while (point != dice_sum)
              {
                if ((dice_sum == 7) || dice_sum == 2 || dice_sum == 3 || dice_sum == 12){
                    cout << "Sorry but you rolled a " << dice_sum << " and lost" << endl;break;
                }
                else if(point == dice_sum)
                {
                    cout << "Your sum was " << dice_sum << " Congraulations You Won" << endl; break;
                }
                else
                    break;
                
              }
            }
        }
    }
           
        
        
       cout << "Do you want to roll again? (Y/N) ";
       cin >> decision; 
    cout << "Thanks for playing." << endl;
}




