#include <iostream>
using namespace std;

class Date {
    public:
        Date(int m, int d, int y)
        : month(m), day(d), year(y)
        {  }
        void printDate()
        {
            cout<<month<<"/"<<day <<"/"<<year<<endl;
        }
    private:
        int month;
        int day;
        int year;
};

class Login {
    public:
        Login(string un, Date d)
        : user_name(un), dt(d)
        {  }
        void printLoginInfo()
        {
            cout << "User: "<< user_name << endl;
            cout << "Last Logged on:" << endl;
            dt.printDate();
        }
    private:
        string user_name;
        Date dt;
};

int main() {
    Date d(2, 21, 2021);
    Login l("KiLJ4EdeN", d);
    l.printLoginInfo();
}