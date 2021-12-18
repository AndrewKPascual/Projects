#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using std::string;
using namespace std;
class meta {
    public:
    std::string hold1;
    int hold2;
    double hold3;
    std::string name = "default";
    std::string image = "PNG";
    int date[3] = {12, 17, 2021};
    double size = 1.0;
    std::string author = "name";
    int dim[2]= {1, 1};
    int apesize = 1;
    int expo[2]= {1, 1};
    int ISO = 1;
    bool flash = true;
    void namecha() {
        std::cout << name<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con;
        if (con == "y") {
        std::cout << "Give a new name:";
        std::cin >> hold1;
        name = hold1;
        }
    }
    void imagecha() {
        std::cout << image<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
            std::cout << "Give a new type(Must be PNG, GIF OR JPEG):";
            std::cin >> hold1;
            std::cout << hold1 << "\n";
            for (int j = 0; j < 1;j=j) {
                if (hold1 == "PNG" || hold1 == "GIF" || hold1 == "JPEG") {
                    image = hold1;
                    j = 12;
                } else  if (hold1 != "PNG" || hold1 != "GIF" || hold1 != "JPEG"){
                    std::cout << "Error, enter a valid option" << "\n";
                    std::cin >> hold1;
                    std::cout << hold1;
                }
            }
        }
    }
    void datecha() {
        std::cout << date[0] << "/" << date[1] << "/" << date[2]<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
            for (int as =0;as<2;as=as) {
            std::cout << "Give me a month under 13 and above 0 for the month:";
            std::cin >> hold2;
            if (hold2 > 13 || hold2 < 0) {
                std::cout << "Error, enter a valid option" << "\n";
                std::cin >> hold2;
            } else {
                date[0] = hold2;
                as = 1234;
            }
            }
            for (int ase=0;ase<2;ase=ase) {
            std::cout << "Give me a day under 32 and above 0 for the month:";
            std::cin >> hold2;
            if (hold2 > 32 || hold2 < 0) {
                std::cout << "Error, enter a valid option" << "\n";
                std::cin >> hold2;
            } else {
                date[1] = hold2;
                ase = 1234;
            }
            }
            for (int asd=0;asd<2;asd=asd) {
            std::cout << "Give me a number under 2022 and above 1000 for the month:";
            std::cin >> hold2;
            if (hold2 > 2022 || hold2 < 1000) {
                std::cout << "Error, enter a valid option" << "\n";
                std::cin >> hold2;
            } else {
                date[2] = hold2;
                asd = 1234;
            }
            }
        }
    }
    void sizecha() {
        std::cout << size<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
        std::cout << "Give a new image size(must be a decimal or will crash):";
        std::cin >> hold3;
        size = hold3;
        }
    }
    void authorcha() {
        std::cout << author<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
        std::cout << "Give a new author:";
        std::cin >> hold1;
        author = hold1;
        }
    }
    void dimcha() {
        std::cout <<"width = " << dim[0] << ", height = " << dim[1]<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con;
        if (con == "y") {
            std::cout << "Give a new number for dimentions(Must change both however, original is listed)(must enter number with no decimals):";
            std::cout << "Enter width:";
            std::cin >> hold2;
            dim[0] = hold2;
            std::cout << "Enter Height:";
            std::cin >> hold2;
            dim[1] = hold2;
        }
    }
    void apesizecha() {
        std::cout << apesize<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
            std::cout << "Enter new Apeture size(no decimals):";
            std::cin >> hold2;
            apesize = hold2;
        }
    }
    void expocha() {
        std::cout << expo[0] << "/" << expo[1]<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
            std::cout << "Give a new number for exposure(it will be a fraction)(must enter number with no decimals):";
            std::cout << "Enter numerator:";
            std::cin >> hold2;
            expo[0] = hold2;
            std::cout << "Enter denominator:";
            std::cin >> hold2;
            expo[1] = hold2;
        }
    }
    void ISOcha() {
        std::cout << ISO<< "\n";
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con;
        if (con == "y") {
            std::cout << "Enter new ISO(no decimals):";
            std::cin >> hold2;
            ISO = hold2;
        }
    }
    void flashcha() {
        if (flash == true) {
            std::cout << "On"<< "\n";
        } else {
            std::cout << "Off"<< "\n";
        }
        std::cout << "If you want to change something type y or enter anything else to return:";
        std::string con;
        std::cin >> con; 
        if (con == "y") {
            if (flash) {
                flash = false;
            } else {
                flash = true;
            }
        }
    }
};
meta a;
    void getall() {
        std::cout << "\n";
        std::cout << a.name<< "\n";
        std::cout << a.image<< "\n";
        std::cout << a.date[0] << "/" << a.date[1] << "/" << a.date[2]<< "\n";
        std::cout << a.size<< "\n";
        std::cout << a.author<< "\n";
        std::cout <<"width = " << a.dim[0] << ", height = " << a.dim[1]<< "\n";
        std::cout << a.apesize<< "\n";
        std::cout << a.expo[0] << "/" << a.expo[1]<< "\n";
        std::cout << a.ISO<< "\n";
        if (a.flash == true) {
            std::cout << "On"<< "\n";
        } else {
            std::cout << "Off"<< "\n";
        }
        std::cout << "Enter anything to continue.";
        std::string con;
        std::cin >> con;
    }
int main() {
    int go = 1;
    std::cout << "All metadata is set to a default setting";
    while (go == 1) {
        for (int x=1;x >0;x=x) {
            std::cout << "\n" << "Please enter a number coespoding to what you want to change/see: "<< "\n";
            std::cout << "name = 1" << "\n"; 
            std::cout << "image type = 2" << "\n"; 
            std::cout << "date = 3" << "\n";
            std::cout << "size = 4" << "\n";
            std::cout << "author = 5" << "\n";
            std::cout << "dimentions = 6" << "\n";
            std::cout << "apeture size = 7" << "\n";
            std::cout << "exposure = 8" << "\n";
            std::cout << "ISO = 9" << "\n";
            std::cout << "Flash = 10" << "\n";
            std::cout << "Check all metadata = 11" << "\n";
            std::cout << "Exit = 12" << "\n";
            int holder;
            std::cin >> holder;
            for (int y = 0; y < 1;y=y) {
                if ( holder <= 0 || holder >= 13) {
                    std::cout << "Error, enter a valid option" << "\n";
                    std::cin >> holder;
                }else {
                    y =5;
                }
            }
            switch (holder) {
                case 1:
                    a.namecha();
                break;
                case 2:
                    a.imagecha();
                break;
                case 3:
                    a.datecha();
                break;
                case 4:
                    a.sizecha();
                break;
                case 5:
                    a.authorcha();
                break;
                case 6:
                    a.dimcha();
                break;
                case 7:
                    a.apesizecha();
                break;
                case 8:
                    a.expocha();
                break;
                case 9:
                    a.ISOcha();
                break;
                case 10:
                    a.flashcha();
                break;
                case 11:
                    getall();
                break;
                case 12:
                    go = 0;
                    x = 0;
                break;
            }
        }
    }
}