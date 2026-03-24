#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
    string vehicleNumber;
    string ownerName;
    string vehicleType;
    float registrationFee;
public:
    Vehicle() {
        vehicleNumber = "Not Assigned";
        ownerName = "Unknown";
        vehicleType = "General";
        registrationFee = 0.0;
    }
    Vehicle(string vNum, string oName) {
        vehicleNumber = vNum;
        ownerName = oName;
        vehicleType = "General"; // Setting a logical default
        registrationFee = 0.0;
    }
    Vehicle(string vNum, string oName, string vType, float fee) {
        vehicleNumber = vNum;
        ownerName = oName;
        vehicleType = vType;
        registrationFee = fee;
    }
    void displayVehicle() {
        cout << "Vehicle No  : " << vehicleNumber << endl;
        cout << "Owner Name  : " << ownerName << endl;
        cout << "Type        : " << vehicleType << endl;
        cout << "Reg. Fee    : Rs. " << registrationFee << endl;
    }
};

int main() {
    Vehicle v1; 
    v1.displayVehicle();
    Vehicle v2("HR-26-DD-0001", "DEVANSH DAHIYA");
    v2.displayVehicle();
    Vehicle v3("HR-26-HG-080907", "HARSHIT GILL ", "Commercial", 1500.50);
    v3.displayVehicle();
    return 0;
}
