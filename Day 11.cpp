#include <iostream>
#include <vector>
using namespace std;


int findMajorityCandidate(vector<int>& votes) {
    int candidate = -1, count = 0;

    for (int v : votes) {
        if (count == 0) {
            candidate = v;
            count = 1;
        } else if (v == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

bool isMajority(vector<int>& votes, int candidate) {
    int count = 0;
    for (int v : votes) {
        if (v == candidate) count++;
    }
    return count > votes.size() / 2;
}

void findCoalition(vector<int>& seats, int target) {
    int left = 0, right = seats.size() - 1;

    while (left < right) {
        int sum = seats[left] + seats[right];

        if (sum == target) {
            cout << "[SUCCESS] Coalition possible: "
                 << seats[left] << " seats + "
                 << seats[right] << " seats = "
                 << target << endl;
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    cout << "[FAILED] No valid coalition found." << endl;
}


int main() {

    cout << "--- ELECTION COMMISSION SYSTEM ---\n";

    
    vector<int> votes = {1, 2, 1, 1, 3, 1};
    cout << "Enter votes: ";
    for (int v : votes) cout << v << " ";
    cout << endl;

    int candidate = findMajorityCandidate(votes);

    if (isMajority(votes, candidate)) {
        cout << "[ANALYSIS] Majority Winner found: Party "
             << candidate << endl;
    } else {
        cout << "[ANALYSIS] No Majority Winner\n";
    }

    
    cout << "\n--- COALITION SEARCH ---\n";
    vector<int> seats = {10, 20, 30, 40, 50};
    int target = 70;

    cout << "Enter party seats (sorted): ";
    for (int s : seats) cout << s << " ";
    cout << endl;

    cout << "Enter majority target: " << target << endl;

    findCoalition(seats, target);

    return 0;
}
