#include <bits/stdc++.h>
using namespace std;

class Algorithms {
    public:
        vector<int> unsortedVector;
        Algorithms(vector<int> vec) {
            unsortedVector = vec;
        }

        vector<int> bubbleSort() {
            return vector<int>{};
        }
};

int main() {
    string algos[] = {
        "Bubble Sort", "Selection Sort", "Insertion Sort", "Merge Sort", "Quick Sort",
        "Heap Sort", "Radix Sort", "Counting Sort", "Bucket Sort", "Shell Sort", "Bogo Sort"
    };
    cout << "-------- Every Sorting Algorithm - Project by Duong Duy Nhat Minh --------\n";
    cout << "   List of sorting algorithms available:\n";
    for (int i = 0; i < sizeof(algos); i++) cout << "" << '\n';



    return 0;
}