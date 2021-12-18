#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using std::string;

// 1 string = yes
// 4 getter = yes
// url private = yes/ it is set as holder at the start but, the viariable depicted as url is private. I did this since my anti-virus broke something and and it crashed the program when I do it in the "URL"class.
class URL {
    //When access specifier is given it is set to private as default but, did this anyways
    private:
        std::string url;
        std::string scheme = "";
        std::string authority = "";
        std::string path = "";
    //Did this in case changes were required
    public:
    //created path, scheme and authority
    void givURL(string holder) {
    std::string url = holder;
    int len = url.length();
    int hold;
    int hold2 =0;
    for (int x = 0; x < len; x++) {
        if (url[x] == ':') {
            for (int y = 0; y<=x; y++) {
                scheme.push_back(url[y]);
                hold = y;
            }
        }
        if (url[x] == '/') {
            if (hold2 == 2) {
                for (int q = hold+1; q<x; q++) {
                    authority.push_back(url[q]);
                    hold2 =q;
                }
                for (int t = hold2+1; t<len; t++) {
                    path.push_back(url[t]);
                }
            }
            hold2++;
        }
    }
    }
    // returns the scheme
        string GetScheme() {
        return scheme;
    }
    // returns the authority
    string GetAuthority() {
        return authority;
    }
    //returns the path
    string GetPath() {
        return path;
    }
    // returns url, the url is private and I believe that is why I can not return it directly or something went wrong
    string GetURL() {
        std::string s = scheme + authority + path;
        return s;
    }
};
// the main is here since we were taught to call on functions prior to the main but, not classes which I was confused on
int main() {
    // creates the url class / 1 class created
    URL a;
    // takes the url and then sends it to a function to be private
    std::cout << "Please enter a URL: ";
    std::string holder;
    std::cin >> holder;
    a.givURL(holder);
    // 4 getter expressions
    std::cout << "Scheme = " << a.GetScheme() << "\n";
    std::cout << "Authority = " << a.GetAuthority() << "\n";
    std::cout << "Patj = " << a.GetPath() << "\n";
    std::cout << "URL = " << a.GetURL() << "\n";
}