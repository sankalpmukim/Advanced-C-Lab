#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a structure to specify data of customers in a bank
// the data to be stored is:
// account number, name, balance

struct customer
{
    int account_number;
    char name[20];
    float balance;
};

// create a function to print the account number and name of each customer with balance below 100
// the function should take a pointer to the structure as an argument
void print_customer(struct customer *c)
{
    printf("Account number: %d\n", c->account_number);
    printf("Name: %s\n", c->name);
    printf("Balance: %.2f\n", c->balance);
}

void print_customer_below_100(struct customer **c, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (c[i]->balance < 100)
        {
            print_customer(c[i]);
        }
    }
}

// withdrawal function
// the function should take a pointer to the structure as an argument
int withdraw(struct customer *c, int amount)
{
    if (c->balance - 500 < amount)
    {
        return 0;
    }
    else
    {
        c->balance -= amount;
        return 1;
    }
}

// deposit function
// the function should take a pointer to the structure as an argument
void deposit(struct customer *c, int amount)
{
    c->balance += amount;
}

// create customer
struct customer *create_customer(int account_number, char *name, float balance)
{
    struct customer *c = (struct customer *)malloc(sizeof(struct customer));
    c->account_number = account_number;
    strcpy(c->name, name);
    c->balance = balance;
    return c;
}

// query customer by account number
struct customer *query_customer(struct customer **c, int n, int account_number)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (c[i]->account_number == account_number)
        {
            return c[i];
        }
    }
    return NULL;
}

int main()
{
    // create an array of customers
    struct customer *customers[5];
    // create customers
    customers[0] = create_customer(1, "John", 50);
    customers[1] = create_customer(2, "Mary", 75);
    customers[2] = create_customer(3, "Peter", 300);
    customers[3] = create_customer(4, "Paul", 400);
    customers[4] = create_customer(5, "Mary", 500);
    // print customers
    int i;
    for (i = 0; i < 5; i++)
    {
        print_customer(customers[i]);
    }
    // print customers with balance below 100
    print_customer_below_100(customers, 5);
    // query customer by account number
    struct customer *c = query_customer(customers, 5, 2);
    if (c != NULL)
    {
        print_customer(c);
    }
    else
    {
        printf("Customer not found\n");
    }
    // withdraw
    if (withdraw(c, 500))
    {
        printf("Withdrawal successful\n");
    }
    else
    {
        printf("Withdrawal failed\n");
    }
    // print customer
    print_customer(c);
    // deposit
    deposit(c, 500);
    // print customer
    print_customer(c);
    return 0;
}