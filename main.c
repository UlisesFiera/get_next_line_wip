#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void) 
{
    int		fd;
	char	*line;
	int		i;

	i = 1;
	fd = open("test_1.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL) {
        printf("Line %i: %s", i, line);
        free(line);
        i++;
    }
	if (line == NULL)
		printf("Null! End of file.\n");
    close(fd);
    return (0);
}
