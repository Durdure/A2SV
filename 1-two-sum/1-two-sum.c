/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *arr = malloc(2*sizeof(int));
    int i =1;
    int j = 1;
    for(i = 0; i < numsSize; i++)
    {
        for(j =  i+1 ; j < numsSize; j++)
        {
            if(nums[i] +nums[j] == target)
            {
                *returnSize = 2;
                arr[0] =i;
                arr[1]= j;
                return arr;
            }
        }
    }
    *returnSize = 0;
    return arr;

}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */