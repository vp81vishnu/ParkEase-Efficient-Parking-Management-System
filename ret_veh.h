#include<iostream>
#include<string>
#include"check_full.h"
using namespace std;

class ret_veh : public check_full {
public:
    bool retrieve_bike(check_full arr[20][20],string temp);

    void check_interested_slot(check_full arr[20][20]);
};

class family_parking : public check_full {
public:
    bool check_for_familyslots(check_full arr[20][20]);
};
