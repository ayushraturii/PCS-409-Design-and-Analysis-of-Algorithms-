#include <vector>
using namespace std;
class Main {
public:
    int partition(vector<int> &arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    void quickSort(vector<int> &arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    void display(vector<int> arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    void find_duplicates(vector<int> arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
};

int main() {
    int t;
    cout << "Enter Test Case: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter size of vector: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter elements of the vector: ";
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        Main ob;
        ob.quickSort(arr, 0, n - 1);
        ob.display(arr);
        ob.find_duplicates(arr);
    }
    return 0;
}
