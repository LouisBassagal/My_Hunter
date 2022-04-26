/*
** EPITECH PROJECT, 2021
** my_sort_int_array
** File description:
** Sorts an array of int.
*/

static void sort_array(int *array, int size, int count2)
{
    int count1 = count2;
    int temp;

    while (count1 != size) {
        if (array[count1] < array[count2]) {
            temp = array[count1];
            array[count1] = array[count2];
            array[count2] = temp;
        }
        count1 = count1 + 1;
    }
}

void my_sort_int_array(int *array, int size)
{
    int count2 = 0;

    while (count2 != size) {
        sort_array(array, size, count2);
        count2 = count2 + 1;
    }
}
