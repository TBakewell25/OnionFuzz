#include <stdlib.h>
#include "../utils/args.h"

int main(int argc, char** argv){
	cliArgs passed;
	char* address;
	resp* response;
	int i;

	passed = initArgs();
	parseArgs(passed, argc, argv);

	if (passed->single){
		response = route(passed->single);		
		printFuzzed(response);	
	}

	if (passed->file){
		for (i = 0; i < passed->length; i++){
			response = route(passed->file[i]);
			printFuzzed(respose);
		}
	}

	return 0;
}
				
