#ifndef ARGS_H
#define ARGS_H

//struct to store command line arguments
typedef struct{
}cliArgs;

//init cli struct
cliArgs* initArgs(cliArgs*);

//parse args, fill cliArgs struct
cliArgs* argsParser(int argc, char** argv);

#endif
