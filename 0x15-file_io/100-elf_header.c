#include "main.h"

/**

  * _strlen - length of a string

  * @s: input char

  * Return: length of a string

**/
#include <elf.h>
#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))
/**
* verify- verify the file to check if is a ELF
* @e_ident: the ELF struct
* return: no return is a void func.
*/

void verify(unsigned char *e_ident)
{
	if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
	    *(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* magic - print magic number
* @e_ident: the ELF struct
* return: no return is a void func.
*/

void magic(unsigned char *e_ident)
{
	int i; /* the index to count the magic bytes */
	int limit;

	limit = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (i = 0; i < limit; i++)
		printf("%02x ", *(e_ident + i));
	printf("%02x\n", *(e_ident + i));
}
int _strlen(char *s)

{

	int i = 0;

	while (s[i])

	{

		i++;

	}

	return (i);

}

/**

* append_text_to_file - appends text at the end of a file.

* @filename: file to append.

* @text_content: info to append into the file.

* Return: 1 on success, -1 on failure

*/



	

	

	

		

	

	

	

		

	

	

	

		

		

			


	
