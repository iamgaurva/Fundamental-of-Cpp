#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {2, 5, 2, 7, 2};
    int n = 5;

    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>secondlargest) {
            secondlargest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << secondlargest << endl;

    return 0;
}
