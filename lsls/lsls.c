#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  // void opened = DIR *opendir("./");
  // char opened = opendir("./");
  DIR* dir = opendir("./");
  // Open directory
  if (!dir) {
    fprintf(stderr, "Error Occured \n");
    exit(1);
}
  struct dirent* entry;
  while ((entry = readdir(dir)) != NULL) {
    printf("%s\n", entry->dirname)
  }
  
  // Repeatly read and print entries

  // Close directory
  closedir(opened)
  return 0;
}