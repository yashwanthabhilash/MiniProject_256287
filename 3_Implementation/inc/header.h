/**
 * @file header.h
 * @author Yashwanth(yashwanthabhilash@outlokk.com)
 * 
 * @brief Contact Management System for Hospitals with below options
 * 1. add contact
 * 2. delete contact
 * 3. modify contact
 * 4. view contact
 * 5. search contact
 * 
 * @version 0.1
 * @date 2021-04-15
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
 * @brief menu function will show all the available options to the admin.
 * 
 */
void menu();

/**
 * @brief to add a record by providing some data about the patient.
 * 
 */
void add();

/**
 * @brief to view all the record entries available in file.
 * 
 */
void view();

/**
 * @brief to search a particular record among the whole database of patients by typing the name.
 * 
 */
void search();

/**
 * @brief if admin wants to update record of any patient, type his/her name and enter details again.
 * 
 */
void modify();

/**
 * @brief if anyrecord of any patient needs to deleted.
 * 
 */
void deleterec();

/**
 * @brief a structure to define info stored in patient record.
 * 
 */
struct student
{
    char name[20];
    char mobile[10];
    char address[20];
    char email[20];
};
#endif
