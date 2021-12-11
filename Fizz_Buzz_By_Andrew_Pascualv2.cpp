#include <iostream>
#include <string>

int main() {
    std::string out = "";
    for (int count = 1; count<=100;count++) {
        // I don't know how to convert int to string or double yet so added >= 3 as there are no numbers below 3 in 1-100 that can be divided.
        if (count % 3 == 0 && count >= 3) {
            out ="Fizz";
        }
        // Similar to 3 I added >=5 due to the same reason.
        if (count % 5 == 0 && count >= 5){
            out +="Buzz";
        }
        // if out does not have a value set it prints "count" which is the number that cannot be divided by 3 or 5.
        if (out == ""){
            std::cout << count << "\n";
        // if out has a value it prints out the result.
        } else if (out != ""){
            std::cout << out << "\n";
            out = "";
        }
    }
}





