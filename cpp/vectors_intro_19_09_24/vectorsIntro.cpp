#include <iostream>
#include <vector>
#include <algorithm> // For sort function

using namespace std;

// Function to print the vector
void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "The vector is empty!" << endl;
    } else {
        cout << "Current vector: ";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
}

// Function to insert an element
void insertElement(vector<int>& vec) {
    int num;
    cout << "Enter a number to insert: ";
    cin >> num;
    vec.push_back(num);
    cout << "Inserted successfully!" << endl;
}

// Function to delete an element
void deleteElement(vector<int>& vec) {
    if (vec.empty()) {
        cout << "Vector is empty! Nothing to delete." << endl;
        return;
    }

    int num;
    cout << "Enter the number to delete: ";
    cin >> num;
    
    auto it = find(vec.begin(), vec.end(), num);
    if (it != vec.end()) {
        vec.erase(it);
        cout << "Deleted successfully!" << endl;
    } else {
        cout << "Number not found in the vector!" << endl;
    }
}

// Function to update an element
void updateElement(vector<int>& vec) {
    if (vec.empty()) {
        cout << "Vector is empty! Nothing to update." << endl;
        return;
    }

    int oldNum, newNum;
    cout << "Enter the number to update: ";
    cin >> oldNum;
    
    auto it = find(vec.begin(), vec.end(), oldNum);
    if (it != vec.end()) {
        cout << "Enter the new number: ";
        cin >> newNum;
        *it = newNum;
        cout << "Updated successfully!" << endl;
    } else {
        cout << "Number not found in the vector!" << endl;
    }
}

// Function to sort the vector
void sortVector(vector<int>& vec) {
    if (vec.empty()) {
        cout << "Vector is empty! Nothing to sort." << endl;
        return;
    }

    sort(vec.begin(), vec.end());
    cout << "Vector sorted successfully!" << endl;
}

// Main function to drive the menu
int main() {
    vector<int> vec;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Update an element\n";
        cout << "4. Sort the vector\n";
        cout << "5. Print the vector\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertElement(vec);
                break;
            case 2:
                deleteElement(vec);
                break;
            case 3:
                updateElement(vec);
                break;
            case 4:
                sortVector(vec);
                break;
            case 5:
                printVector(vec);
                break;
            case 0:
                cout << "Exiting the program!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
