#include <iostream>
#include <string>
using namespace std;
class fine
{public :
  virtual void showfine() =0;

};
class person
{

private:
    int id;
    string name;
    trafficrule* rulebroken;
public:
    person(int i, string n, trafficrule* rule) : id(i), name(n), rulebroken(rule) {}

    int getid() {
        return id;
    }

    void showFine() {
        cout << "--------------------------" << endl;
        cout << "persons id: " << id << endl;
        cout << "persons Name: " << name << endl;
        rulebroken->showRule();
        cout << "Fine to Pay: pln"<< rulebroken->getfine() << endl;
    }

    ~person() {
        delete rulebroken;
    }
};

    int main()
    {

        
    const int size = 5;
        return 0;
    }