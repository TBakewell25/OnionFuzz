#ifndef IO_H
#define IO_H

//read a list of addresses, or a list of fuzz words
char** readFile(char* fileName);

//print specified fuzzed addresses to stdout
void printFuzzed(int code, char* address);


#endif
