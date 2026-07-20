// BRUTE
void getElements(int arr[], int n)
{ 
    if(n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  
    sort(arr, arr + n);
    int small = arr[1];   
    int large = arr[n - 2]; 
    // Output the second smallest and second largest elements
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

//Better
void getElements(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  
    int large = INT_MIN, second_large = INT_MIN;
    int i;

    for (i = 0; i < n; i++) {
        small = min(small, arr[i]);  
        large = max(large, arr[i]);  
    }
    for (i = 0; i < n; i++) {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

//optimal
int secondSmallest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    // Loop through the array to find the second smallest element
    for (int i = 0; i < n; i++) {
        // Update the smallest and second smallest values
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } 
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small; // Return the second smallest element
}

// Function to find the second largest element in the array
int secondLargest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;

    // Loop through the array to find the second largest element
    for (int i = 0; i < n; i++) {
        // Update the largest and second largest values
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large; // Return the second largest element
}

//Notes 
/*Brute Force: O(NlogN)
- sort nums
- return n-2 index

Better: O(N)
- initialize largest = arr[0]
- initialize secondLargest = -1
- run a for loop
- if arr[i] > largest
    secondLargest = largest
    largest = arr[i]
- else if arr[i] > secondLargest && arr[i] != largest
    secondLargest = arr[i]
- return secondLargest

Memory Trigger:
Whenever a new largest is found,
old largest becomes second largest.*/