ParkEase: Efficient Parking Management System
Overview
ParkEase is a C++ application designed to streamline the management of parking spaces for bikes. It offers a robust set of features for registering bikes, retrieving bikes, checking specific slots, managing family parking, and displaying the status of all parking slots in real-time.

Features
Register a Bike: Automatically assigns an available slot for a bike.
Retrieve a Bike: Retrieves a bike from the parking lot using its registration number.
Check Specific Slot: Allows users to check the availability of a specific slot and register a bike if available.
Family Parking: Facilitates parking for multiple bikes in consecutive slots.
Show All Available Slots: Displays the current status of all parking slots, indicating occupied and vacant slots.
Class Structure
1. User Class
Base class containing attributes and methods for managing user status and vehicle information.
2. check_full Class
Inherits from User.
Methods to check slot availability and print the status of all parking slots.
3. ret_veh Class
Inherits from check_full.
Methods for retrieving bikes based on their registration number and checking specific slots for registration.
4. family_parking Class
Inherits from check_full.
Methods to manage parking for multiple bikes in consecutive slots.
Installation
Clone the repository:

sh
Copy code
git clone https://github.com/your-username/parking-management-system.git
cd parking-management-system
Compile the Code:

sh
Copy code
g++ -o parking_management main.cpp
Run the Application:

sh
Copy code
./parking_management
Usage
Upon launching the application, a user-friendly menu will guide you through various options for managing parking slots:

Register a bike: Assigns an available slot to a bike.
Retrieve a bike: Retrieves a bike from the parking lot by entering its registration number.
Check specific slot: Allows checking and registering a bike in a specific slot if available.
Family parking: Registers multiple bikes in consecutive slots.
Show all available slots: Displays the status of all parking slots.
Exit: Exits the application.
Example Usage
Register a Bike:

arduino
Copy code
Enter your bike number: ABC123
There is a vacant slot available at (0, 0)
Retrieve a Bike:

typescript
Copy code
Enter the bike number to be retrieved: ABC123
Bike with registration number ABC123 successfully retrieved.
Check Specific Slot:

mathematica
Copy code
Enter your preferred slot row: 1
Enter your preferred slot column: 2
Slot is available. Enter your bike number: XYZ789
Vehicle registered in the preferred slot (1, 2).
Family Parking:

typescript
Copy code
Enter the number of bikes for continuous parking: 2
Slots available from (0, 0) to (0, 1).
Enter bike number for slot (0, 0): BIKE1
Enter bike number for slot (0, 1): BIKE2
Show All Available Slots:

csharp
Copy code
Slot (0, 0) is occupied by bike BIKE1
Slot (0, 1) is occupied by bike BIKE2
Slot (0, 2) is vacant
...
Contributing
Contributions to ParkEase are welcomed! If you have suggestions for improvements or new features, please feel free to fork the repository and submit a pull request.
