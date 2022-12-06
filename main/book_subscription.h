#pragma once
#ifndef BOOK_SUBSCRIPTION_H
#define BOOK_SUBSCRIPTION_H

#include "constants.h"

struct date
{
    int hours;
    int minutes;
};

struct person
{
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
    char last_name[MAX_STRING_SIZE];
};
struct Topics
{
    char tema[MAX_STRING_SIZE];
};

struct book_subscription
{
    person reader;
    date start;
    date finish;
    Topics tema;
    char title[MAX_STRING_SIZE];
};

#endif
