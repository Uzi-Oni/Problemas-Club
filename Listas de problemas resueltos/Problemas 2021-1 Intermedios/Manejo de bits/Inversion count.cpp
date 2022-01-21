#include<bits/stdc++.h>

using namespace std;

long long int merge(int arr[], int left, int mid, int right) {
  int temp[300000];
  int i = left;
  int j = mid;
  int k = left;
  long long int count = 0;
  while ((i <= mid - 1) && (j <= right)) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      k++;
      i++;
    } else {
      temp[k] = arr[j];
      k++;
      j++;
      count += mid - i;
    }
  }
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];
  for (int i = left; i <= right; i++)
    arr[i] = temp[i];
  return count;
}
long long int mergesort(int arr[], int left, int right) {

  if (right > left) {
    long long int mid = (left + right) / 2;
    long long int a = mergesort(arr, left, mid);
    long long int b = mergesort(arr, mid + 1, right);
    long long int c = merge(arr, left, mid + 1, right);
    return a + b + c;
  }
  return 0;
}
int main() {
  int t;
  cin >> t;
  int a[300000];
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << mergesort(a, 0, n - 1) << endl;
  }
}