/**
 * @file header.h
 * @author DEV GUPTA (guptadev359@gmail.com)
 * 
 * @brief Database Management System for Students using five operations
 * 1. add record
 * 2. delete record
 * 3. modify record
 * 4. view record
 * 5. search record
 * 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/**
 * @brief gotoxy function is used to place cursor at a desired location.
 * It accepts two args as x and y coordinate of the location.
 * 
 */
void gotoxy(int ,int );

/**
 * @brief menu function will show you the menu of all the available choices/operations.
 * 
 */
void menu();

/**
 * @brief to add a record by providing some data about the student.
 * 
 */
void add();

/**
 * @brief to view all the database entries available in file.
 * 
 */
void view();

/**
 * @brief to search a particular database among the whole database of students by typing the name.
 * 
 */
void search();

/**
 * @brief if we want to update data about any student, type his/her name and enter details again.
 * 
 */
void modify();

/**
 * @brief if any student no longer exist in school then we can delete his/her data by searching his name.
 * 
 */
void deleterec();

/**
 * @brief a structure to define info stored in student data.
 * 
 */
struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
};
#endif
