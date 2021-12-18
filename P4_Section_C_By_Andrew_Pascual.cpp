#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using std::string;
using namespace std;

class items {
    public:
    string itemnam[100];
    long itemID[100];
    double itemprice[100];
    int itemcount[100];

};
items b;
class store {
    public:
    void imagecha() {
        int totalitems;
        string storeitems[100];
        std::cout << "Store:"<< "\n";
        for (int c=0; c <100;c++){
            if (b.itemnam[c] != "") {
                std::cout << b.itemnam[c];
                storeitems[c] = b.itemnam[c];
                std::cout << " x ";
                std::cout << b.itemcount[c] << "\n";
                
            }
            
        }
    }
};
store a;
class orders {
    string order[10];
    void additems(string a){
        std::cout << "Enter item"<< "\n";
        std::string con;
        std::cin >> con; 
        for (int a = 0; a <10;a++) {
            if (order[a] != "") {
                order[a]=con;
                a = 10;
            }
        }
    }
    double price() {
        double cost;
        int u = 0;
        for (int j = 0; j <10;j++) {
            if (order[j] != "") {
                while (u<100) {
                    if (order[j] == b.itemnam[u]) {
                        cost += b.itemprice[u]
                        u=100;
                    }
                u++;
                }

            }
        }
        return cost;
    }
};
orders ge;
int main() {
    b.itemnam[1]= "book";
    b.itemprice[1] = 2.01;
    b.itemID[1] = 2;
    b.itemcount[1] = 2;
    a.imagecha();
    ge.additems("book");
    std::cout << ge.price();
}