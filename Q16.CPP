#include <iostream>
#include <string>
using namespace std;
class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;
public:
    MovieTicket() {
        movieName = "Unknown";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }
    MovieTicket(string m, int seat, float price) {
        movieName = m;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Success: Seat " << seatNumber << " for '" << movieName << "' has been booked." << endl;
        } else {
            cout << "Error: Seat " << seatNumber << " is already taken!" << endl;
        }
    }
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Success: Booking for '" << movieName << "' has been cancelled." << endl;
        } else {
            cout << "Error: Cannot cancel. Seat " << seatNumber << " was not booked." << endl;
        }
    }
    void calculateTotalCost(int numberOfTickets) {
        float total = numberOfTickets * ticketPrice;
        cout << "Total cost for " << numberOfTickets << " tickets: $" << total << endl;
    }
    void displayTicketDetails() {
        cout << "--- Ticket Info ---" << endl;
        cout << "Movie: " << movieName << "\nSeat: " << seatNumber 
             << "\nPrice: $" << ticketPrice 
             << "\nStatus: " << (isBooked ? "Booked" : "Available") << endl;
    }
};
int main() {
    cout << "OBJECT 1 (Default)" << endl;
    MovieTicket t1;
    t1.displayTicketDetails();
    t1.bookTicket();
    t1.calculateTotalCost(3);
    cout << endl;
    cout << "OBJECT 2 (Parameterized)" << endl;
    MovieTicket t2("Inception", 42, 150);
    t2.displayTicketDetails();
    t2.bookTicket();  
    t2.bookTicket();   
    t2.cancelTicket(); 
    t2.displayTicketDetails();
    return 0;
}
