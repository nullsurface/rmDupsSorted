#include <stdio.h>
int removeDuplicates(int*, int);
void printList(int*, int);

int main() {
    int arr1[3] = {1,1,2};
    int arr2[10] = {0,0,1,1,1,2,2,3,3,4};

    printf("%d\n", removeDuplicates(arr1, 3));
    printf("%d\n", removeDuplicates(arr2, 10));
    printList(arr1, 3);
    printList(arr2, 10);

    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    int spaceSize = 0;
    int lastNum = nums[0];

    for (int i = 1; i < numsSize; i++) {
	if (spaceSize > 0)
	    nums[i - spaceSize] = nums[i];

	if (nums[i] == lastNum) {
	    nums[i] = -101;
	    spaceSize++;
	} else {
	    lastNum = nums[i];
	}

    }

    return numsSize - spaceSize;
}

void printList(int* list, int size) {
    printf("[");

    for (int i = 0; i < size; i++)
	printf("%d ", list[i]);

    printf("]\n");
}

