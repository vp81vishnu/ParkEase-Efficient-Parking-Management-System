<p align="center">
  <img src="https://cdn-icons-png.flaticon.com/512/6295/6295417.png" width="100" />
</p>
<p align="center">
    <h1 align="center">PARKEASE-EFFICIENT-PARKING-MANAGEMENT-SYSTEM</h1>

<hr>



ParkEase is a C++ application designed to streamline the management of parking spaces for bikes. It offers features for registering bikes, retrieving bikes, checking specific slots, managing family parking, and displaying real-time slot availability.




FEATURES:         

     Register a Bike: Automatically assigns available slots.
     Retrieve a Bike: Retrieves bikes using registration numbers.
     Check Specific Slot: Registers bikes in specific available slots.
     Family Parking: Manages parking for multiple bikes in consecutive slots.
     Show All Available Slots: Displays current slot statuses.




CLASS STRUCTURE:

1. User Class:


       #Base class containing attributes and methods for managing user status and vehicle information.
2. check_full Class:


       #Inherits from User.
       #Methods to check slot availability and print the status of all parking slots.
3. ret_veh Class:


       #Inherits from check_full.
       #Methods for retrieving bikes based on their registration number and checking specific slots for registration.
4. family_parking Class:


       #Inherits from check_full.
       #Methods to manage parking for multiple bikes in consecutive slots.





###  Installation

1. Clone the ParkEase-Efficient-Parking-Management-System repository:

```sh
git clone https://github.com/vp81vishnu/ParkEase-Efficient-Parking-Management-System
```

2. Change to the project directory:

```sh
cd ParkEase-Efficient-Parking-Management-System
```

3. Install the dependencies:

```sh
g++ -o myapp main.cpp
```

###  Running ParkEase-Efficient-Parking-Management-System

Use the following command to run ParkEase-Efficient-Parking-Management-System:

```sh
./myapp
```

###  Tests

To execute tests, run:

```sh
googletest
```

---

USAGE:

Upon launching the application, a user-friendly menu will guide you through various options for managing parking slots:

1.Register a bike: Assigns an available slot to a bike.
2.Retrieve a bike: Retrieves a bike from the parking lot by entering its registration number.
3.Check specific slot: Allows checking and registering a bike in a specific slot if available.
4.Family parking: Registers multiple bikes in consecutive slots.
5.Show all available slots: Displays the status of all parking slots.
6.Exit: Exits the application.


