#include <iostream>
#include <string>
using namespace std;

class BoardMarker {
    public:
        string company;
        string colour;
    private:
        int refillable;
        int inkStatus;
    public:
        void setValues(int r, int i) {
            refillable = r;
            inkStatus = i;
        }

        void write() {
            if (inkStatus == 1) {
                cout << "There is no ink in the marker!" << endl;
            }
            else if (inkStatus == 0) {
                cout << "Ink is present, continue writing!" << endl;
            }
            else {
                cout << "Invalid choice!" << endl;
            }
        }

        void refill() {
            if (refillable == 1) {
                cout << "Ink is refilled!" << endl;
            }
            else {
                cout << "Ink can't be refilled! Marker cannot be refilled." << endl;
            }
        }

        void display() {
            cout << "Company: " << company << endl;
            cout << "Colour: " << colour << endl;
            cout << "Refillable: " << (refillable == 1 ? "Yes" : "No") << endl;
            cout << "Ink Status: ";
            write();  
        }
};

int main() {
    BoardMarker b1, b2, b3;

    b1.company = "Dollar";
    b1.colour = "Blue";
    b1.setValues(1, 1);  // Refillable: Yes, Ink Status: No ink
    b1.refill();
    b1.write();
    b1.display();

    b2.company = "Deer";
    b2.colour = "Black";
    b2.setValues(1, 0);  // Refillable: Yes, Ink Status: Ink present
    b2.refill();
    b2.write();
    b2.display();

    b3.company = "Picasso";
    b3.colour = "Green";
    b3.setValues(0, 0);  // Refillable: No, Ink Status: Ink present
    b3.refill();
    b3.write();
    b3.display();

    return 0;
}

