#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /*int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);*/

    int arr[] = {3906637, 2000532, 16387040, 14771731, 17232365, 10508260, 11165027, 15564328, 3271143, 10794329, 6072852, 10622239, 19852124, 10478460, 16778793, 2982000, 6936386, 4072780, 15708774, 13564161, 18133706, 6929199, 8319877, 13408627, 5899434, 15063556, 15455381, 12203686, 13905304, 4628007, 13411450, 6862459, 5728257, 5796610, 2814341, 11639382, 3397980, 9312652, 10791710, 2806261, 13063706, 14373086, 19778168, 15413746, 12139021, 16205160, 4896058, 6112434, 5152666, 9624160};

    size_t len = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, len);
    bubble_sort(arr, len);
    print_array(arr, len);
    return (0);
}
