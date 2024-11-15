#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv) 
{
    int		fd;
    char	*line;

    // Check if a filename is provided
    if (argc != 2) 
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return (1);  // Exit if filename is not provided
    }

    // Open the file
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) 
    {
        printf("Error opening file: %s\n", argv[1]);
        return (1);  // Exit if file opening fails
    }

    // Read lines from the file
    printf("Reading lines from file: %s\n\n", argv[1]);
    while ((line = get_next_line(fd)) != NULL) 
    {
        printf("Line read: %s", line);
        free(line);  // Free the allocated memory for the line
    }

    // Close the file after reading
    close(fd);
    return (0);
}
