#include <iostream>
#include <string>
using namespace std;
class fine
{public :

    virtual void showrule() = 0;
    virtual int getfine() = 0;
    virtual ~fine() {}
};


};
class overspeeding : public fine {
public:
    void showrule() override {
        cout << "Crime= Overspeeding" << endl;
    }
    int getfine() override {
        return 150;
    };
    class signalcross : public fine {
public:
    void showrule() override {
        cout << "Crime= signal cross" << endl;
    }
    int getfine() override {
        return 100;
    }
};
class accident : public fine {
public:
    void showrule() override {
        cout << "crime= accident" << endl;
    }
    int getfine() override {
        return 300;
    }
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
        cout << "Fine to Pay: pln"<< rulebroken->getfine() << endl
    }

    ~person() {
        delete rulebroken;
    }
}

   