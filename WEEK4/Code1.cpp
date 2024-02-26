#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int> &arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    long long comparisons = 0, inversions = 0;

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            inversions += (mid - i + 1);
        }
        comparisons++;
    }

    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    return comparisons + inversions;
}

long long mergeSort(vector<int> &arr, int low, int high) {
    long long comparisons = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        comparisons += mergeSort(arr, low, mid);
        comparisons += mergeSort(arr, mid + 1, high);
        comparisons += merge(arr, low, mid, high);
    }
    return comparisons;
}

int main() {
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    while (T--) {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long comparisons = mergeSort(arr, 0, n - 1);

        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "Total comparisons: " << comparisons << endl;
        cout << "Total inversions: " << comparisons - (n - 1) << endl;
    }

    return 0;
}
