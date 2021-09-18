// OTFC_in_progress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <string>

#define MAXNUM 512
using std::cout;
using std::cin;
using std::endl;
/* Charles Thomas Wallace Truscott Watters. Staying up late to work on a silly, on-the-fly calculator cmdlet */
/* 4:00 A.M. 9/18/2021 then sleep until */
/* 9:05 A.M. 9/19/2021 */
/* Need to implement an array or pointer of / to arithmetic structures */
/* Need to implement an array or pointer of / to a stack-based memory structure for solving prioritised arithmetic struct problems*/
/* Need to implement strncmp for hexadecimal, octal or base-e base-ln numbers*/
/* Need to implement the brains of the machine */
/* First of all I need to re-enrol in the Harvard edx.org massive-online-open-course to really grill down those CS fundamentals, e.g. stacks, queues, heaps, linked lists, e.t.c.*/


typedef struct Arithmetic_of_Two{
    long long first_number;
    char arithmetical_operator;
    long long second_number;
} Arithmetic_of_Two;
typedef struct Arithmetic_of_Three {
    long long first_number;
    char arithmetical_operator;
    long long second_number;
    char second_arithmetical_operator;
    long long third_number;
}Arithmetic_of_Three;


int exit_cmdlet(void);
int enter_prompt(void);

int main(int argc, char ** argv)
{
    if (argc == 1) {
        cout << "********** On The Fly Calculator, Charles Thomas Wallace Truscott Watters  **********" << endl;
        cout << "Usage: " << * argv << " 0xFFFF + 0xCAFECAFE" << endl;
        cout << "Usage: " << * argv << " 12345 - 54321" << endl;
        cout << "Usage: " << * argv << " 0x00007FFFCAFECAFE / 400" << endl;
        cout << "Usage: " << * argv << " 3.141 / 2.17654" << endl;
    }

    long long numbers_to_be_added[MAXNUM];
    ++argv;
    int i(0);
    for (; * argv; ++argv) {
        char * current_num = *argv;
        cout << current_num << endl;
//        if ((long long) current_num <= - 0x0000FFFFFFFFFFFF && (long long) current_num >= 0x0000FFFFFFFFFFFF) {
//            cout << strtoll(current_num, &current_num, 10) << endl;
//            cout << "new";
//        }
        long long curr_num = strtoll(current_num, &current_num, 10);
        cout << curr_num;
        if (curr_num <= 0x0000FFFFFFFFFFFF && curr_num >= - 0x00000FFFFFFFFFFF) {
            numbers_to_be_added[i] = curr_num;
            ++i;
        }
        cout << *argv << endl;
    }
    for (int j = 0; j < i; ++j) {
        cout << "Number in array:\t" << numbers_to_be_added[j] << endl;
   }
    Arithmetic_of_Two array_of_arithmetical_sequences_of_two[MAXNUM];
    Arithmetic_of_Three array_of_arithmetical_sequences_of_three[MAXNUM];
    enter_prompt();
}

int exit_cmdlet(void) {
    cout << "EXITING PROGRAM.";
    exit(1);
}

int enter_prompt(void) {
    while (1) {
        char input[512];
        char exit_string[5] = "EXIT";
        cout << ">> ";
        cin >> input;

        if (!strcmp((char *) input, (char *) exit_string)) {
            exit_cmdlet();
        }
    }
}
