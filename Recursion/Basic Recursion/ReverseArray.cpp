//M1: Two pointer approach
void reverse(int arr[], int left, int right)
{
    // Base case
    if (left >= right )return;
    swap(arr[left], arr[right]);
    reverse(arr, left + 1, right - 1);
}

//M2: Single index approach
void reverse(int arr[], int i, int n)
{
    // Base case
    if (i >= n / 2)return;
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n);
}