#include <iostream>
#include<vector>
using namespace std;


vector<int> bubbleSort(vector<int> arr);
vector<int> selectionSort(vector<int> arr);
vector<int> insertionSort(vector<int> arr);

int main()
{
    vector<int> arr = { 4, 2, 5, 1, 6, 7, 6, 4, 12, 2, 43, 213, 4, 5, 2, 64, 75, 23, 12 };

    vector<int> arr1 = bubbleSort(arr);
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << ' ';
    cout << endl;
    vector<int> arr2 = selectionSort(arr);
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << ' ';
    cout << endl;
    vector<int> arr3 = insertionSort(arr);
    for (int i = 0; i < arr3.size(); i++)
        cout << arr3[i] << ' ';
    return 0;
}


vector<int> bubbleSort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++)
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
    return arr;
}


vector<int> selectionSort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min])
                min = j;
        swap(arr[i], arr[min]);
    }
    return arr;
}

vector<int> insertionSort(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++)
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
            swap(arr[j-1], arr[j]);
    return arr;
}