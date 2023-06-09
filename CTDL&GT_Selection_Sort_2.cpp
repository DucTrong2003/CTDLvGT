#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
   int i, j, min_idx;
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[min_idx])
            min_idx = j;

      swap(arr[min_idx], arr[i]);
   }
}

int main() {
   int n;
   cout << "Nhap so phan tu cua mang: ";
   cin >> n;

   int arr[n];
   cout << "Nhap cac phan tu cua mang: ";
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   selectionSort(arr, n);

   cout << "Mang da sap xep tu be den lon la: ";
   for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}
