/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief The header file contains the function declaration and the description about the function
 *
 * <Add Extended Description Here>
 *
 * @author Hariharan K
 * @date 2020-7-21
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char *test_array, unsigned int arr_size);

/**
 * @brief Implements statistical functions on the given array 
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and length of the array as an input and performs statistical functions by calculating maximum, minimum, mean and median and printing them 
 *
 * @param test_array The unsigned char pointer which points to the starting address of the array, for which statistical functions are to be calculated
 * @param arr_size The length of the array
 *
 * @return This function returns nothing
 */

void print_array(unsigned char *data, unsigned int len_data);

/**
 * @brief Prints the array to the screen
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and the length of the array as input and prints the array to the screen.
 *
 * @param data The unsigned char pointer which points to the starting address of the array, whose elements are to be printed
 * @param len_data The length of the array
 *
 * @return This function returns nothing
 */

unsigned char find_median(unsigned char *data, unsigned int len_data);

/**
 * @brief Finds the median of an array  
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and the length of the array as input and finds the median
 *
 * @param data The unsigned char pointer which points to the starting address of the array, for which median is to be calculated
 * @param len_data The length of the array 
 *
 * @return The median value of the array
 */

unsigned char find_mean(unsigned char *data, unsigned int len_data);

/**
 * @brief Finds the mean of an array
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and length of the array as input and finds the mean
 *
 * @param data The unsigned char pointer which points to the starting address of the array, for which mean is to be calculated
 * @param len_data The length of the array
 *
 * @return The mean value of the array
 */

unsigned char find_maximum(unsigned char *data, unsigned int len_data); 

/**
 * @brief Finds the maximum number in an array
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and length of the array as input and finds the maximum of the numbers in the array
 *
 * @param data The unsigned char pointer which points to the starting address of the array, for which maximum of numbers is to be found
 * @param len_data The length of the array
 *
 * @return The maximum of numbers in the array
 */

unsigned char find_minimum(unsigned char *data, unsigned int len_data); 

/**
 * @brief Finds the minimum number in an array
 *
 * This function takes an unsigned char pointer pointing to the starting address of the array of numbers and length of the array as input and finds the minimum of the numbers in the array
 *
 * @param data The unsigned char pointer which points to the starting address of the array, for which minimum of numbers is to be found
 * @param len_data The length of the array
 *
 * @return The minimum of numbers in the array
 */

void sort_array(unsigned char *data, unsigned int len_data); 

/**
 * @brief Sorts the given array in descending order
 *
 * The function takes an unsigned char pointer pointing to the starting address of the array of numbers and length of the array as input and sorts the array in descending order
 *
 * @param data The unsigned char pointer which points to the starting address of the array, which needs to be sorted in descending order
 * @param len_data The length of the array
 *
 * @return This function returns nothing
 */

#endif /* __STATS_H__ */

