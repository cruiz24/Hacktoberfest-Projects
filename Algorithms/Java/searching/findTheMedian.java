package Algorithms.Java.searching;

//program to find the median (middle element) of two sorted arrays (leetcode problem) -  time complexity should be O(log (m+n))
//if there is no single middle element it returns the average of the two middle elements
import java.util.*;
public class findTheMedian {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] c=new int[nums1.length+nums2.length];
        System.arraycopy(nums1, 0, c, 0, nums1.length);
        System.arraycopy(nums2, 0, c, nums1.length, nums2.length);
        Arrays.sort(c);
        if((nums1.length+nums2.length)%2!=0)
            return (double)c[(int)((nums1.length+nums2.length)/2)];
        return (double)(c[(nums1.length+nums2.length)/2]+c[((nums1.length+nums2.length)/2)-1])/2;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of elements for the first and second array one after the other: ");
        int m=sc.nextInt(), n=sc.nextInt();
        int nums1[]=new int[m];
        int nums2[]=new int[n];
        System.out.println("Enter the elements of the first array: ");
        for(int i=0;i<m;i++)
            nums1[i]=sc.nextInt();
        System.out.println("Enter the elements of the second array: ");
        for(int i=0;i<n;i++)
            nums2[i]=sc.nextInt();
        System.out.println("The median of the two arrays when sorted is: "+findMedianSortedArrays(nums1, nums2));
        sc.close();
    }
}
