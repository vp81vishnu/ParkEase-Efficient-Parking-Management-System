#include<iostream>
#include<string>
using namespace std;


class User {
protected:
    int status;
    string veh_name;
public:
    User() : status(0), veh_name("") {}
    void set_status(int a);
    int get_status();
    void set_veh_name(string str);
    string get_veh_name();
};
