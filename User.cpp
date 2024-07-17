#include<iostream>
#include<string>
#include"User.h"

void User::set_status(int a) {
        status = a;
    }

int User::get_status() {
        return status;
    }

void User::set_veh_name(string str) {
        veh_name = str;
    }

string User:: get_veh_name() {
        return veh_name;
    }
