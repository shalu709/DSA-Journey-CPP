#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> inventory;
    int choice;

    do {
        cout << "\n--- RPG INVENTORY SYSTEM ---\n";
        cout << "1. Pick up item\n";
        cout << "2. Drop last item\n";
        cout << "3. Show Backpack Stats\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string item;
            cout << "Enter item name: ";
            cin >> item;

            inventory.push_back(item);
            cout << "[+] Added " << item << endl;

            cout << "[STATS] Items: " << inventory.size()
                 << " | Magic Space (Capacity): "
                 << inventory.capacity() << endl;
        }

        else if (choice == 2) {
            if (!inventory.empty()) {
                cout << "[-] Dropped " << inventory.back() << endl;
                inventory.pop_back();
            } else {
                cout << "Inventory is empty!\n";
            }

            cout << "[STATS] Items: " << inventory.size()
                 << " | Magic Space (Capacity): "
                 << inventory.capacity() << endl;
        }

        else if (choice == 3) {
            cout << "[STATS] Items: " << inventory.size()
                 << " | Magic Space (Capacity): "
                 << inventory.capacity() << endl;
        }

    } while (choice != 4);

    return 0;
}
