#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;

public:
    MovieTicket() {
        movieName = "Not Assigned";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }

    MovieTicket(string name, int seat, float price) {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }

    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked successfully for seat " << seatNumber << "!\n";
        } else {
            cout << "Seat " << seatNumber << " is already booked.\n";
        }
    }

    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket for seat " << seatNumber << " has been cancelled.\n";
        } else {
            cout << "Seat " << seatNumber << " is not booked yet.\n";
        }
    }
    void displayTicketDetails() {
        cout << "\nMovie Name: " << movieName;
        cout << "\nSeat Number: " << seatNumber;
        cout << "\nTicket Price: " << ticketPrice;
        cout << "\nBooking Status: " << (isBooked ? "Booked" : "Available") << endl;
    }

    float calculateTotalCost(int numberOfTickets) {
        return ticketPrice * numberOfTickets;
    }
};

int main() {

    MovieTicket ticket1("Avengers", 10, 250);
    MovieTicket ticket2("Batman", 15, 220);

    ticket1.bookTicket();
    ticket2.bookTicket();

    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();

    ticket1.cancelTicket();

    ticket1.displayTicketDetails();

    cout << "\nTotal cost for 3 tickets: "
         << ticket2.calculateTotalCost(3) << endl;

    return 0;
}
