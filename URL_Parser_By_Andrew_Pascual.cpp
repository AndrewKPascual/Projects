#include <iostream>
#include <string>

int main() {
    // Gets user input
    std::cout << "Please enter a URL: ";
    std::string url;
    std::cin >> url;

    // gets length of url for the access string part
    int len = url.length();

    // variables to hold ints within for loop
    int hold;
    int hold2 =0;

    // For loop that looks through the whole string
    for (int x = 0; x < len; x++) {
        // finds the : for the scheme 
        if (url[x] == ':') {
            std::cout << "scheme = ";
            // for loop gets every character from 0 to the first instanse of : and prints it
            for (int y = 0; y<=x; y++) {
                std::cout << url[y];
                hold = y;
            }
            // adds a line break so the authority is not on the same line
            std::cout << "\n";
        }
        // gets the / for the authority *note: I could have changed it so when there were consecutive / I could != to mark the start of path*
        if (url[x] == '/') {
            // this skips the first two // which is hard coded in since im lazy
            if (hold2 == 2) {
                std::cout << "authority = ";
                // prints the whole authority 
                for (int q = hold+1; q<x; q++) {
                    std::cout << url[q];
                    // re-purpose the hold2 since im extra lazy
                    hold2 =q;
                }
                //line break again
                std::cout << "\n";
                std::cout << "path = ";
                // once path is found it prints out the rest of it
                for (int t = hold2+1; t<len; t++) {
                    std::cout << url[t];
                }
            }
            // the counter for hold2 to skip the first 2 //
            hold2++;
        }
    }
}
