#include <iostream>
using namespace std;
class SmartLight {
private:
    string brand;
    int brightness;
    bool isOn;
public:
    SmartLight() {
        brand = "Generic";
        brightness = 50;
        isOn = false;
    }
    SmartLight(string b, int bright, bool status) {
        brand = b;
        brightness = bright;
        isOn = status;
    }
     ~SmartLight() {
         cout << "Object destroyed" << endl;
    }
    void turnOn() {
        isOn = true;
        cout << brand << " light is now ON." << endl;
    }
    void turnOff() {
        isOn = false;
        cout << brand << " light is now OFF." << endl;
    }
    void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
            if (brightness > 100) brightness = 100;
            cout << brand << " brightness increased to " << brightness << endl;
        } else {
            cout << "Brightness is already at maximum (100)." << endl;
        }
    }
    void decreaseBrightness() {
        if (brightness > 0) {
            brightness -= 10;
            if (brightness < 0) brightness = 0;
            cout << brand << " brightness decreased to " << brightness << endl;
        } else {
            cout << "Brightness is already at minimum (0)." << endl;
        }
    }
    void displayStatus() {
        cout << "--- Status: " << brand << " ---" << endl;
        cout << "Power: " << (isOn ? "ON" : "OFF") << endl;
        cout << "Brightness: " << brightness << "/100" << endl;
    }
};
int main() {
    cout << "Creating Light 1..." << endl;
    SmartLight light1;
    light1.displayStatus();
    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    cout << endl;
    cout << "Creating Light 2..." << endl;
    SmartLight light2("Philips", 80, true);
    light2.displayStatus();
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();
    return 0;
}
