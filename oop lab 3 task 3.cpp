#include <iostream>
#include <string>
using namespace std;

class Waterbottle {
    private:
        string company;
        string colour;
        int capacity_ml;
    public:
        void setValues(string com, string col, int cap_ml) {
            company = com;
            colour = col;
            capacity_ml = cap_ml;
        }
        string getCompany() {
            return company;
        }
        string getColour() {
            return colour;
        }
        int getCapacityMl() {
            return capacity_ml;
        }
        float getCapacityL() {
            return capacity_ml / 1000.0; 
        }
        void waterCapacity() {
            int drank_ml;
            cout << "Enter how much water you have drank (in milliliters): ";
            cin >> drank_ml;
            if (drank_ml <= capacity_ml) {
                capacity_ml -= drank_ml;
                int remaining_liters = capacity_ml / 1000; 
                int remaining_ml = capacity_ml % 1000; 
              cout << "Remaining water in bottle: " << remaining_liters << " liters and "
                     << remaining_ml << " milliliters" << endl;
            } else {
                cout << "You cannot drink more than the available water in the bottle!" << endl;
            }
        }
        void displayInfo() {
            cout << "Company: " << company << endl;
            cout << "Colour: " << colour << endl;
            cout << "Capacity: " << getCapacityL() << " Liters or " << capacity_ml << " Milliliters" << endl;
        }
};

int main() {
    Waterbottle w1;
    w1.setValues("Safari", "Purple", 12000);  
    w1.displayInfo();
    w1.waterCapacity();  
    return 0;
}

