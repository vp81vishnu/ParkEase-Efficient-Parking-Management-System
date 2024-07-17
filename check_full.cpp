#include<iostream>
#include<string>
#include"check_full.h"

string check_full::check_for_status() {
        if (status == 1) {
            return "full";
        } else {
            cout << "Parking slot is empty, please enter your bike number: ";
            string temp;
            cin >> temp;
            set_veh_name(temp);
            set_status(1);
            return "Vehicle registered: " + temp;
        }
    }
void check_full::print_all(check_full arr[20][20]) {

    cout<<"Occu represents OCCUPIED"<<endl;
    cout<<"Free represents FREE"<<endl;

    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < 20; i++) {

        for (int j = 0; j < 20; j++) {
            cout << "|";
            if (arr[i][j].get_status() == 0) {
                cout << "free";
            } else {
                cout << "Occu";
            }
        }
        cout << "|" << endl;
        cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    }


}


bool check_full::is_veh_present(check_full arr[20][20], string temp) {
        for(int i=0; i<20; i++){
            for(int j=0; j<20; j++){
                if(arr[i][j].get_veh_name() == temp){
                    return true;
                }
            }
        }
        return false;
    }
