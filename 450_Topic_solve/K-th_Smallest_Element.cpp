/*
	Problem Link : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1 	
*/
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        r ++ ; 
        sort(arr , arr+r) ;
        k -- ; 
        int num = arr[k] ; 
        return num ;
    }
};
