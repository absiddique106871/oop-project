#include <iostream>
#include <string>
using namespace std;
class fine
{
    public :

    virtual void showrule() = 0;
    virtual int getfine() = 0;
    virtual ~fine() {}
};



class overspeeding : public fine {
public:
    void showrule() override {
        cout << "Crime= Overspeeding" << endl;
    }
    int getfine() override {
        return 200;
    }   
};
    
class signalcross : public fine
 {
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
    fine*rulebroken;
    bool finePaid;
public:
    person(int i, string n, fine    * rule) : id(i), name(n), rulebroken(rule),finePaid(false) {}

    int getid() {
        return id;
    }

    void showfine() {
        cout << "--------------------------" << endl;
        cout << "persons id: " << id << endl;
        cout << "persons Name: " << name << endl;
        rulebroken->showrule();
        
        if (finePaid) {
            cout << "fine to Pay: $0 (Paid)" << endl;
        } else {
            cout << "fine to Pay: $" << rulebroken->getfine() << " (Unpaid)" << endl;
        }
    };
     void payFine() {
        finePaid = true;
        cout << "Status: fine paid successfully" << endl;
     }

    ~person() {
        delete rulebroken;
    }
};
    int main() {
    person p1(101, "Abu", new overspeeding());
    person p2(102, "Siddique", new signalcross());

   
    p1.showfine();
    p2.showfine();

  
    cout << "\nAbu is paying the fine...\n";
    
    p1.payFine();
    p1.showfine();

    return 0;
}


   