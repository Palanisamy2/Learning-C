#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int nonZeroIndex = 0;  // Initialize the non-zero index pointer

    // First loop to move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];  // Place non-zero element at nonZeroIndex and increment nonZeroIndex
        }
    }

    // Second loop to fill the rest of the array with zeros
    while (nonZeroIndex < numsSize) {
        nums[nonZeroIndex++] = 0;  // Fill the remaining part of the array with 0s
    }
}

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    moveZeroes(nums1, size1);

    printf("Output: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    int nums2[] = {0, 0, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    moveZeroes(nums2, size2);

    printf("Output: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}
