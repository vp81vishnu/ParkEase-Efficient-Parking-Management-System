#include <iostream>
#include <string>
#include"ret_veh.h"

using namespace std;
int main() {
    check_full arr[20][20];
    int option;

    do {
        cout << "\nParking Management System\n";
        cout << "1. Register a bike\n";
        cout << "2. Retrieve a bike\n";
        cout << "3. Check specific slot\n";
        cout << "4. Family parking\n";
        cout << "5. Show all available slots\n";
        cout << "6. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
        case 1: {
            bool parked = false;
            for (int i = 0; i < 20 && !parked; ++i) {
                for (int j = 0; j < 20; ++j) {
                    if (arr[i][j].get_status() == 0) {
                        string temp;
                        while (true) {
                            cout << "There is place in (" << i << ", " << j << ")" << endl;
                            cout << "Enter your bike number: ";
                            cin >> temp;
                            if (arr[i][j].is_veh_present(arr, temp)) {
                                cout << "Duplicate entry. Enter a different vehicle name." << endl;
                            } else {
                                break;
                            }
                        }
                        arr[i][j].set_veh_name(temp);
                        arr[i][j].set_status(1);
                        parked = true;
                        break;
                    }
                }
            }
            if (!parked) {
                cout << "Parking is full." << endl;
            }
            break;
        }
        case 2: {
            ret_veh bike;
            string a;
            cout << "Enter your bike number to be retrieved: ";
            cin >> a;
            bike.retrieve_bike(arr, a);
            break;
        }
        case 3: {
            ret_veh slot;
            slot.check_interested_slot(arr);
            break;
        }
        case 4: {
            family_parking family;
            family.check_for_familyslots(arr);
            break;
        }
        case 5:{
            check_full pri;
            pri.print_all(arr);
            break;
        }
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
            break;
        }
    } while (option != 6);

    return 0;
}

