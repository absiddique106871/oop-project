#include <iostream>
#include <string>
using namespace std;
class person {
    private:
    int totalfine=0;
public:
    string name;
    int age;
    int id;

    void setname(string n,int a,int i){
        name=n;
        age=a;
        id=i;
        cout<<"name ="<<n<<endl;
        cout<<"age ="<<a<<endl;
        cout<<"id ="<<i;
    }
    void set_fine(int b) {
        if (b>=0) {
            totalfine=b;
        }
    }
    int get_fine() {
        return totalfine;
    }
};
int main() {
    person siddique;
    siddique.setname("abu bakkar",23,782488570);
    siddique.set_fine(100);
    cout<<endl;
    cout<<"fine= "<<siddique.get_fine()<<endl;
    person fazlul;
    
    fazlul.setname("fazlul",22,782488577);

    return 0;
}