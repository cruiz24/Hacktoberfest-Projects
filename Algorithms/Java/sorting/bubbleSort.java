public class BubbleSort {  
    /**
     * This implement bubble sort algorithm, which works by moving 
     * larger items to the end of the array, one step at a time
     *
     * Time complexity: O(n^2) 
     */
    static void bubbleSort(int[] arr) {  
        int n = arr.length;  
        int tmp = 0; 

        // iterate over the array
        for(int i = 0; i < n; i++) {  
            for(int j = 1; j < n - i; j++) {  
                if(arr[j-1] > arr[j]){  
                    //swap 
                    tmp = arr[j-1];  
                    arr[j-1] = arr[j];  
                    arr[j] = tmp;  
                }            
            }  
        }  
    }  
}