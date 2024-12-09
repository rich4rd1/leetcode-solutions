#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* two_sum(int* nums, int target, int numsSize, int* returnSize) {
    int* result = (int*)malloc(2 *sizeof(int));
    
    for (int i = 0; i < numsSize - 1; i++){
        for (int j = i + 1; j < numsSize; j++){
            if ((nums[i] + nums[j]) == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
            
        }
        
    }
   *returnSize = 0;
   free(result);
   return NULL;
}

int main(){
    
}

/* 
nums = vetor de int 
numsSize = ultimo termo do vetor
target = valor resultado de numeros dentro do vetor
returnSize = vai ser nosso output da função
*/