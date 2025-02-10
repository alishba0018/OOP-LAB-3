#include <iostream>
#include <string>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int itemCount = 0; 

public:
    void addItem() {
        if (itemCount >= 100) {
            cout << "Sorry, cannot add more items. Shop is full!\n";
            return;
        }
        string item;
        double price;
        cout << "Enter item name: ";
        cin >> item;
        cout << "Enter price of " << item << ": ";
        cin >> price;
        items[itemCount] = item;
        prices[itemCount] = price;
        itemCount++;
        cout << "Item added successfully.\n";
    }
    void viewItems() {
        if (itemCount == 0) {
            cout << "No items available in the shop.\n";
            return;
        }
        cout << "Items in the shop:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i] << " - $" << prices[i] << endl;
        }
    }
    void editItemPrice() {
        string item;
        double newPrice;
        cout << "Enter the name of the item to edit price: ";
        cin >> item;
        bool itemFound = false;
        for (int i = 0; i < itemCount; ++i) {
            if (items[i] == item) {
                cout << "Current price of " << item << " is $" << prices[i] << endl;
                cout << "Enter the new price for " << item << ": ";
                cin >> newPrice;
                prices[i] = newPrice;
                itemFound = true;
                cout << "Price updated successfully.\n";
                break;
            }
        }
        if (!itemFound) {
            cout << "Item not found in the shop.\n";
        }
    }
    void generateReceipt() {
        int numItems;
        cout << "Enter number of items to purchase: ";
        cin >> numItems;
        double total = 0;
        cout << "\nReceipt\n";
        cout << "Item  " << "Price  " << "Quantity   " << "Total\n";
        for (int i = 0; i < numItems; ++i) {
            string item;
            int quantity;
            bool itemFound = false;
			cout << "Enter item name: ";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> quantity;
            for (int j = 0; j < itemCount; ++j) {
                if (items[j] == item) {
                    double itemTotal = prices[j] * quantity;
                    total += itemTotal;
                    cout << item  << "  $  " << prices[j] << quantity << "$" << itemTotal << endl;
                    itemFound = true;
                    break;
                }
            }
            if (!itemFound) {
                cout << "Item " << item << " not found in the shop.\n";
            }
        }
        cout << "Total Amount: $" << total << endl;
        cout << "Thank you for shopping with us!\n";
    }
};

int main() {
    StationeryShop shop;
    int choice;
    do {
        cout << "Stationery Shop Menu \n";
        cout << "1. Add item\n";
        cout << "2. View items\n";
        cout << "3. Edit item price\n";
        cout << "4. Generate receipt\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                shop.addItem();
                break;
            case 2:
                shop.viewItems();
                break;
            case 3:
                shop.editItemPrice();
                break;
            case 4:
                shop.generateReceipt();
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);
      return 0;
}

