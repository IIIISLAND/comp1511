Your task is to add code to this function in struct_create.c:

// create an instance of the struct and return a pointer to it
struct numbers *struct_create(int a, int b) {
    // PUT YOUR CODE HERE (you must change the next line!)
}
struct_create is written using the following struct that cannot be changed:
struct numbers {
    int first;
    int second;
};
struct_create should take two integers as input and return a pointer to a struct numbers variable that it has created. Its first input should be stored in the first field and its second input should be stored in the second field.

For example if the integers are:

int a = 1;
int b = 2;
and the function is called like this:

struct numbers* n = struct_create(a, b);
n will now be pointing at a struct that has n->first == 1 and n->second == 2.
Assumptions/Restrictions/Clarifications.
struct numbers cannot be edited. It must be used as it is.

struct_create should call malloc() to allocate memory.

struct_create should not print anything. It should not call printf.

Your submitted file may contain a main function. It will not be tested or marked.

When you think your program is working you can autotest to run some simple automated tests:

