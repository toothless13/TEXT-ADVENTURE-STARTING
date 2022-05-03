//This will be a Text Adventure based on Harry Potter and the Philosopher's Stone
//Note to self - type cls in terminal to clear
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{

int char_choice, troll_fight, troll_attack, chess_choice, potion_choice, voldemort_choice;
std::string companion;
//Initial info about game and ask for choice of companion
std::cout << "Harry Potter and the Philosopher's Stone" << std::endl;
std::cout << "          Text Adventure Game" << std::endl;
std::cout << "\n\n\n";
std::cout << "Hi Harry, please choose who you would like to have as your companion for this game" << std::endl;
std::cout << "Please enter 1 for Ron or 2 for Hermione:\t\t";
//Accept user input to give character choice
std::cin >> char_choice;
//Check the user has given a valid answer
while(char_choice != 1 && char_choice != 2)
{
    std::cout << "That's not an option, please enter 1 for Ron or 2 for Hermione:\t\t";
    std::cin >> char_choice;
}
//Tell the user their choice
if(char_choice == 1)
{
    std::cout << "You have chosen Ron!\n\n";
    companion = "Ron";
}

else
{
    std::cout << "You have chosen Hermione!\n\n";
    companion = "Hermione";
}
//Ask the user what they want to do
std::cout << "A giant CAVE TROLL has appeared in front of you on your journey!!!\n\n";
std::cout << "Do you want to run away, or fight the troll?\n";
std::cout << "Please enter 1 to run away and hide, or 2 to fight:\t\t";
//Accept user input
std::cin >> troll_fight;

//Check the user has given a valid answer
while(troll_fight != 1 && troll_fight != 2)
{
    std::cout << "\n\nThat's not an option, please enter 1 to run away and hide, or 2 to fight:\t\t";
    std::cin >> troll_fight;
}

std::cout << "\n\n";
//If user chooses to hide
if(troll_fight == 1)
{
    std::cout << "You tried to run away and hide, but the troll found you!\n";
    std::cout << "Do you want to try and run and hide again, or fight the troll?\n";
    std::cout << "Please enter 1 to run, or 2 to fight:\t\t";

    std::cin >> troll_fight;

    while(troll_fight != 1 && troll_fight != 2)
{
    std::cout << "\n\nThat's not an option, please enter 1 to run away and hide, or 2 to fight:\t\t";
    std::cin >> troll_fight;
}

std::cout << "\n\n";
//If user chooses to hide again - game over
if(troll_fight == 1)
{
    std::cout << "The troll catches and squishes you!\n";
    std::cout << "The End!";
    std::system("pause");
    return 0;
}
}
//If user chooses to fight
if(troll_fight == 2)
{
    std::cout << "You've chosen to fight the troll - very brave!\n\n";
    std::cout << "Do you want to attack with Stupefy or Wingardium Leviosa?\n";
    std::cout << "Please enter 1 for Stupefy or 2 for Wingardium Leviosa:\t\t";

    std::cin >> troll_attack;
    //Ensure user input is valid
    while(troll_attack != 1 && troll_attack != 2)
    {
       std::cout << "\n\nThat's not an option, please enter 1 for Stupefy or 2 for Wingardium Leviosa:\t\t"; 
       std::cin >> troll_attack;
    }

    std::cout << "\n\n";
    //Bad choice, give user option to pick to do same spell again or another spell
    if(troll_attack == 1)
    {
        std::cout << "Oh no! Stupefy isn't very effective against the troll!\n";
        //Think about using for or while loops to check how many times a player has made a certain choice
        std::cout << "Do you want to try using Stupefy again, or use Wingardium Leviosa?\n";
        std::cout << "Please enter 1 for Stupefy or 2 for Wingardium Leviosa:\t\t";

        std::cin >> troll_attack;
        //Validate user input
        while(troll_attack != 1 && troll_attack != 2)
    {
        std::cout << "\n\nThat's not an option, please enter 1 for Stupefy or 2 for Wingardium Leviosa:\t\t"; 
        std::cin >> troll_attack;
    }

        std::cout << "\n\n";
        
        //New variable to count the amount of attempts
        int attempt = 0;
        //Ask the user if they are sure they want to use the same spell
        while(troll_attack == 1 && attempt < 1)
        {
            std::cout << "Are you sure?\n";
            std::cout << "Please type 1 for Yes or 2 for No\t\t";
            //Validate user input
            while(troll_attack != 1 && troll_attack != 2)
            {
                std::cout << "That's not an option, please enter 1 for Yes or 2 for No\t\t";
                std::cin >> troll_attack;
            }
            attempt++;      //Increase attempt number
            std::cin >> troll_attack;
        }
        
        //Game over
        if(troll_attack == 1)
        {
        std::cout << "Stupefy is still ineffective!\n";
        std::cout << "The troll squishes you!\n";
        std::cout << "The End\n\n";
        system("pause");
        return 0;
        }
        //Beat Troll
        else if(troll_attack == 2)
        {
        std::cout << "You use Wingardium Leviosa!\n";
        std::cout << "You cause the Trolls club to levitate above the troll's head and let it go.\n";
        std::cout << "The Troll has been knocked out!!!\n";
        std::cout << "Well done!!! You can progress onto the next stage!\n\n\n";
        }

    }
    //You've chosen well and progress to next stage
    if(troll_attack == 2)
    {
        std::cout << "You use Wingardium Leviosa!\n";
        std::cout << "You cause the Trolls club to levitate above the troll's head and let it go.\n";
        std::cout << "The Troll has been knocked out!!!\n";
        std::cout << "Well done!!! You can progress onto the next stage!\n\n\n";
    }
}

//If user chose Ron
if(char_choice == 1)
{
    std::cout << "Your next challenge is a game of Life Size Wizard's Chess - Ron's favourite!\n\n";
    std::cout << "Which chess piece would you like to play as?\n";
    std::cout << "Please enter 1 for the Knight or 2 for the Bishop:\t\t";
    //Receive input from user
    std::cin >> chess_choice;
    //Validate input
    while(chess_choice != 1 && chess_choice != 2)
    {
        std::cout << "That is not a valid entry, please enter 1 for the Knight or 2 for the Bishop:\t\t";
        std::cin >> chess_choice;
    }
    //If user makes wrong choice
    if(chess_choice == 1)
    {
        //Give a chance to change answer
        int attempt = 0;
        while(chess_choice == 1 && attempt < 1)
        {
            std::cout << "Are you sure?\n";
            std::cout << "Please enter 1 to choose the Knight or 2 to change to the Bishop:\t\t";
            while(chess_choice != 1 && chess_choice != 2)
            {
                std::cout << "That's not an option, please enter 1 to choose the Knight or 2 to change to the Bishop:\t\t";
                std::cin >> chess_choice;
            }
            attempt++;
            std::cin >> chess_choice;
        }
        //If player doesn't change answer - Game Over
        if(chess_choice == 1)
        {
            std::cout << "The Queen destroys the Knight and you with it!\n";
            std::cout << "The End.\n";
            system("pause");
            return 0;
        }
        //If player does change answer - they win and continue
        else if(chess_choice == 2)
        {
            std::cout << "You chose to play as the Bishop!\n";
            std::cout << "Ron plays as the Knight and knows what he is doing...\n";
            std::cout << "Ron sacrifices himself to lure the Queen out of position...\n";
            std::cout << "This allows you use the Bishop to Check Mate the King!\n";
            std::cout << "Well done! You've completed your second challenge and can move on to the final room!\n\n";
        }
    }
    //If player chooses correctly, they win and continue
    else if(chess_choice == 2)
    {
            std::cout << "You chose to play as the Bishop!\n";
            std::cout << "Ron plays as the Knight and knows what he is doing...\n";
            std::cout << "Ron sacrfices himself to lure the Queen out of position...\n";
            std::cout << "This allows you use the Bishop to Check Mate the King!\n";
            std::cout << "Well done! You've completed your second challenge and can move on to the final room!\n\n";
    }
}

//If player chose Hermione
if(char_choice == 2)
{
    std::cout << "Your next challenge is to choose the potion that isn't poisoned - good job you picked Hermione!\n\n";
    std::cout << "There are 5 potions in front of you...\n";
    std::cout << "4 of them are poisoned, and 1 is not...\n";
    std::cout << "You will have 3 attempts to guess the correct potion...\n";
    std::cout << "Which potion do you want to choose?\n";
    std::cout << "Please enter 1 for Potion 1, 2 for Potion 2, 3 for Potion 3, 4 for Potion 4, or 5 for Potion 5:\t\t";

    std::cin >> potion_choice;
    //Seed the random generator
    srand(time(NULL));
    //Set answer to a random number between 1 & 5
    int answer = (std::rand() % 5) + 1;
    //Make Hermione's choice equal the answer
    int h_choice = answer;
    //Variable for counting attempts
    int attempt = 0;
    //Validate input
    while(potion_choice != 1 && potion_choice != 2 && potion_choice != 3 && potion_choice != 4 && potion_choice != 5)
    {
        std::cout << "That is not a valid answer.\n";
        std::cout << "Please enter 1 for Potion 1, 2 for Potion 2, 3 for Potion 3, 4 for Potion 4, or 5 for Potion 5:\t\t";
        std::cin >> potion_choice;
    }
    //Correct answer - you can progress
    if(potion_choice == answer)
    {
        std::cout << "You have chosen...\n";
        std::cout << "wisely...\n";
        std::cout << "Well done! You didn't need any help!\n";
        std::cout << "You can progress on to the final room.\n\n";
    }
    //Wrong answer
    else if(potion_choice != answer)
    {
        int h_help = 0;         //Will store a value to remember if the player has accepted Hermione's help or not
        
        while(potion_choice != answer && attempt < 2)
        {
            //Tell user how many attemps they have left
            std::cout << "Unfortunately that is the wrong choice.\n";
            std::cout << "You have " << (2 - attempt) << " attempts left to guess correctly.\n";
            attempt++;
            
            if(h_help == 0)
            {
            //Ask if the player wants to ask Hermione for help
            std::cout << "Would you like to ask Hermione for help?\n";
            std::cout << "Please enter 1 for yes or 2 for no:\t\t";
            int help;
            std::cin >> help;
            while(help != 1 && help != 2)
            {
                std::cout << "That is not a valid answer.\n";
                std::cout << "Please enter 1 for yes or 2 for no:\t\t";
                std::cin >> help;
            }
            //Let player know what Hermione thinks
            if(help == 1)
            {
                std::cout << "Hermione thinks the correct potion is number " << h_choice << ".\n\n";
                h_help = 1;
            }

            }
            std::cout << "Which potion would you like to choose?\n";
            std::cout << "Please enter 1 for Potion 1, 2 for Potion 2, 3 for Potion 3, 4 for Potion 4, or 5 for Potion 5:\t\t";
            std::cin >> potion_choice;

            while(potion_choice != 1 && potion_choice != 2 && potion_choice != 3 && potion_choice != 4 && potion_choice != 5)
            {
                std::cout << "That is not a valid answer.\n";
                std::cout << "Please enter 1 for Potion 1, 2 for Potion 2, 3 for Potion 3, 4 for Potion 4, or 5 for Potion 5:\t\t";
                std::cin >> potion_choice;
            }
        }
        //If the player chooses correctly, they can move on - notes that they got it right first time
        if(potion_choice == answer && attempt == 0)
        {
            std::cout << "You have chosen...\n";
            std::cout << "wisely...\n";
            std::cout << "Well done! You didn't need any help!\n";
            std::cout << "You can progress on to the final room.\n\n";
        }
        //Player chooses correctly with help
        else if(potion_choice == answer)
        {
            std::cout << "You have chosen...\n";
            std::cout << "wisely...\n";
            std::cout << "Well done, you got it right with " << companion << "'s help!\n";
            std::cout << "You can progress on to the final room.\n\n";
        }
        //Game over
        else
        {
            std::cout << "You've chosen the wrong potion too many times...\n";
            std::cout << "The poison starts to take hold of you as you feel yourself drift away...\n";
            std::cout << "The End\n";
            system("Pause");
            return 0;
        }
    }
}

//Final Room
std::cout << "Well done, you have made it to the final room...\n";
std::cout << "But who is that in front of you?\n";
std::cout << "It's Voldemort!!!\n\n";

std::cout << "You have 3 choices:\n";
std::cout << "1) Fight off Voldemort with " << companion << "!\n";
std::cout << "2) Turn on " << companion << " and join Voldemort!\n";
std::cout << "3) Run away and hide!\n";

std::cout << "Please enter 1, 2, or 3 depending on your choice:\t\t";

std::cin >> voldemort_choice;

while(voldemort_choice != 1 && voldemort_choice != 2 && voldemort_choice != 3)
{
    std::cout << "That is not a valid answer.\n";
    std::cout << "Please enter 1, 2, or 3 depending on your choice:\t\t";
    std::cin >> voldemort_choice;
}

if(voldemort_choice == 1)
{
    std::cout << "You chose to fight!\n";
    std::cout << "After a hard battle with " << companion << " by your side, you were able to best Voldemort for now and make your escape!\n";
    std::cout << "Well done, you have completed the game and saved Hogwarts... for now!\n";
    system("Pause");
    return 0;
}

if(voldemort_choice == 2)
{
    std::cout << "You chose to turn on " << companion << "!\n";
    std::cout << "Voldemort is surprised by this, but doesn't need a second invitation...\n";
    std::cout << "Voldemort strikes down " << companion << " using Avada Kedavra!\n";
    std::cout << companion << " was dead before they hit the ground...\n";
    std::cout << "Voldemort stands by your side, as the world starts to tremble at the thought of what's to come...\n\n";
    std::cout << "The End.\n";
    system("Pause");
    return 0;
}

if(voldemort_choice == 3)
{
    std::cout << "You and " << companion << " try to run...\n";
    std::cout << "but Voldemort is too quick!\n";
    std::cout << "Voldemort appears in front of you both and uses Avada Kedavra...\n";
    std::cout << "The End.\n";
    system("Pause");
    return 0;
}

}