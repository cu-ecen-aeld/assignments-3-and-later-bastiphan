#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <syslog.h>

int main(int argc, char* argv[])
{
	const int INPUT_COUNT = 3;

	openlog(NULL, 0, LOG_USER);

	if (argc != INPUT_COUNT)
	{
		syslog(LOG_ERR, "Invalid number of arguments: %d", argc);
		printf("messed up\n");
		return 1;
	}
	else
	{
		char * filename = argv[1];
		char * inputstring = argv[2];
		FILE * file = fopen(filename, "w");

		if (file == NULL)
		{
			syslog(LOG_ERR, "Error creating file");
			return 1;
		}
		else
		{
			fprintf(file, "%s", inputstring);
			syslog(LOG_USER, "Writing %s to file %s", inputstring, filename);
			fclose(file);
		}
	}



	return 0;
}
