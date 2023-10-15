#include "main.h"


/**
* _realloc - reallocates a memory block
* @ptr: pointer to memory previously allocated
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp_blk;
	unsigned int j;

	if (ptr == NULL)
	{
		tmp_blk = malloc(new_size);
		return (tmp_blk);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp_blk = malloc(new_size);
		if (tmp_blk != NULL)
		{
			for (j = 0; j < min(old_size, new_size); j++)
				*((char *)tmp_blk + j) = *((char *) ptr + j);
			free(ptr);
			return (tmp_blk);
		}
		else
			return (NULL);
	}
}
