/*
*  main.cpp
*  CS325 GP
*
*  Created by Omar Nisbeth on 11/13/22.
*/


/* possible header classes below
* #include "Room.h"
* #include "Grid.h"
* #include "User.h"
* #include "Char.h"
*/


#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, const char * argv[]) {
    string userInput;
    string a = "Open Door";
    string a1 = "open door";
    
    string b = "Quit";
    string b1 = "quit";
    
    string c = "Describe Room";
    string c1 = "describe room";
    
    string d = "Turn Left";
    string d1 = "turn left";
    
    string e = "Turn Right";
    string e1 = "turn right";
    
    string f = "Turn Around";
    string f1 = "turn around";
    
    string g = "Save";
    string g1 = "save";
    
    string h = "Load";
    string h1 = "load";
    
    
    cout << "Command: ";
    cin >> userInput;
    
    
    
    if(userInput == a || userInput == a1) {
        // call function to open door here
        
    }
    else if (userInput == c || userInput == c1) {
        //call function or ptr to room class for room description
    }
    else if (userInput == d || userInput == d1) {
        //call function or ptr to user/char class to turn left
    }
    else if (userInput == e || userInput == e1) {
        //call function or ptr to user/char class to turn right
    }
    else if (userInput == f || userInput == f1) {
        //call function or ptr to user/char class to turn around
    }
    else if (userInput == g || userInput == g1) {
        //call function or game class ptr to save game state
    }
    else if (userInput == h || userInput == h1) {
        //call function or game class ptr to load a game state
    }
    else if (userInput == b || userInput == b1) {
        cout << "Now exiting game" << endl;
        exit(0);
    }
    return 0;
}
