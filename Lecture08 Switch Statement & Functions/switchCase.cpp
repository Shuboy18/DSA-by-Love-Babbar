#include <iostream>
using namespace std;

// int main() {
//     while (true) { 
//         char choice;
//         cout << "Enter a choice (a, b, c) or 'q' to quit: ";
//         cin >> choice;

//         switch (choice) {
//             case 'a':
//                 cout << "You chose 'a'\n";
//                 break;  // Breaks out of the switch statement
//             case 'b':
//                 cout << "You chose 'b'\n";
//                 break;  // Breaks out of the switch statement
//             case 'c':
//                 cout << "You chose 'c'\n";
//                 break;  // Breaks out of the switch statement
//             case 'q':
//                 cout << "Exiting program...\n";
//                 return 0;
//             default:
//                 cout << "Invalid choice\n";
//         }
//     }

//     return 0;
// }

// OR

int main() {
    bool running = true;
    
    while (running) {
        char choice;
        std::cout << "Enter a choice (a, b, c) or 'q' to quit: ";
        std::cin >> choice;

        switch (choice) {
            case 'a':
                std::cout << "You choose 'a'\n";
                break; 
            case 'b':
                std::cout << "You choose 'b'\n";
                break; 
            case 'c':
                std::cout << "You choose 'c'\n";
                break;  
            case 'q':
                std::cout << "Exiting program...\n";
                running = false;
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    }

    return 0;
}

/*

    So, Firstly in order to break the infinite loop first one is to just 
    make a case in which we will use return statement in order to break the loop.

    And, secondly we can set the flag/expression whatever to false in order to stop the loop.
    There is another option in which we can use exit(0) in the place of return 0 also.

    Using continue within a switch block doesn't make sense because continue is designed for loop 
    control flow not for switching between different case blocks within a switch statement

*/

/*

    OUTPUT: (For both the programs)

    Enter a choice (a, b, c) or 'q' to quit: a
    You choose 'a'
    Enter a choice (a, b, c) or 'q' to quit: b
    You choose 'b'
    Enter a choice (a, b, c) or 'q' to quit: c
    You choose 'c'
    Enter a choice (a, b, c) or 'q' to quit: q
    Exiting program...

*/
