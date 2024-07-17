#include<iostream>
#include<string>
#include"User.h"
using namespace std;

class check_full : public User {
public:
    string check_for_status();

    void print_all(check_full arr[20][20]);

    bool is_veh_present(check_full arr[20][20],  string temp);
};

