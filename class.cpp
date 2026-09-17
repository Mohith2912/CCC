#include <iostream>
using namespace std;
class Srm{
    public:
    static void hii(){
        cout<<"Hiiiiiiiii";

    }
    void hello(){
        cout << "Helloooooo\n";
        hii();
    }
};
int main(){
    Srm ob;
    ob.hello();
    }