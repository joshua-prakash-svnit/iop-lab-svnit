#include <stdio.h>
// QN.71 - Function to find pivot element in a sorted rotated array.
int findPivot(int arr[], int n) 
{
    int low=0,high=n-1;
    
    if (arr[low]<=arr[high]) 
	{
        return 0; 
    }
    while (low<=high) 
	{
        int mid=(low+high)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;
       
        else if (arr[mid] >= arr[low])
            low = mid + 1; 
        else
            high = mid - 1; 
    }
    return -1; 
}

int main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the sorted and rotated array:\n", n);
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int pivotindex = findPivot(arr, n);
    printf("The pivot element is %d at index %d\n", arr[pivotindex], pivotindex);
    return 0;
}
