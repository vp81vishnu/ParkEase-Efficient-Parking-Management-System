#include<iostream>
#include<string>
#include"ret_veh.h"

bool ret_veh::retrieve_bike(check_full arr[20][20],string temp) {
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (arr[i][j].get_veh_name() == temp) {
                    cout << "Vehicle number " << arr[i][j].get_veh_name() << " retrieved successfully." << endl;
                    arr[i][j].set_status(0);
                    arr[i][j].set_veh_name("");
                    return true;
                }
            }
        }
        cout << "Vehicle not found." << endl;
        return false;
    }

void ret_veh::check_interested_slot(check_full arr[20][20]) {
        int row, col;
        while (true) {
            cout << "Enter your preferred slot row: ";
            cin >> row;
            cout << "Enter your preferred slot column: ";
            cin >> col;

            if (row < 0 || row >= 20 || col < 0 || col >= 20) {
                cout << "Invalid slot position." << endl;
                return;
            }

            if (arr[row][col].get_status() == 0) {
                string temp;
                while (true) {
                    cout << "Slot is free, enter your vehicle name: ";
                    cin >> temp;
                    if (is_veh_present(arr, temp)) {
                        cout << "Duplicate entry. Enter a different vehicle name." << endl;
                    } else {
                        break;
                    }
                }
                arr[row][col].set_veh_name(temp);
                arr[row][col].set_status(1);
                cout << "Vehicle registered in the preferred slot (" << row << ", " << col << ")." << endl;
                break;
            } else {
                cout << "Sorry, the slot is full. Please choose another slot to park." << endl;
                char ch;
                cout << "Would you like to look for some other slots? (y/n): ";
                cin >> ch;
                if (ch == 'n' || ch == 'N') {
                    break;
                }
            }
        }
    }

bool family_parking::check_for_familyslots(check_full arr[20][20]) {
        int num;
        cout << "Enter the number of bikes for continuous parking: ";
        cin >> num;

        for (int i = 0; i < 20; ++i) {
            int count = 0;
            for (int j = 0; j < 20; ++j) {
                if (arr[i][j].get_status() == 0) {
                    count++;
                    if (count == num) {
                        cout << "Slots are available from (" << i << ", " << j - num + 1 << ") to (" << i << ", " << j << ")." << endl;
                        int y;
                        cout << "Would you like to park? (0 for No, 1 for Yes): ";
                        cin >> y;

                        if (y == 1) {
                            for (int k = j - num + 1; k <= j; ++k) {
                                string temp;
                                while (true) {
                                    cout << "Enter bike number for slot (" << i << ", " << k << "): ";
                                    cin >> temp;
                                    if (is_veh_present(arr, temp)) {
                                        cout << "Duplicate entry. Enter a different vehicle name." << endl;
                                    } else {
                                        break;
                                    }
                                }
                                arr[i][k].set_veh_name(temp);
                                arr[i][k].set_status(1);
                            }
                            return true;
                        } else {
                            return false;
                        }
                    }

                } else {
                    count = 0;
                }
            }
        }

        cout << "No continuous slots available." << endl;
        return false;
    }

