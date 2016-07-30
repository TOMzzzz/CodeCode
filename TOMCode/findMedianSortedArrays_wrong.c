double findMedian(int* nums,int numsSize){
    if(numsSize==0)
        return 0.0; 
    else if(numsSize%2==0)
        return ((double)(nums[numsSize/2])+(double)(nums[(numsSize/2)-1]))/2;
    else
        return (double)(nums[numsSize/2]);
}
    
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double median;
    double median1,median2;
    
    median1=findMedian(nums1,nums1Size);
    median2=findMedian(nums2,nums2Size);
    if(nums1Size==0||nums2Size==0)
        median = nums1Size>nums2Size?median1:median2;
    else
        median = (median1+median2)/2;
    return median;
}
