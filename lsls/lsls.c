#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  void opened = DIR *opendir(char *path);
  // Open directory
  if (!opened) {
    fprintf(sderr, "Error Occured \n");
    exit();
}
  struct dirent *readdir(opened)
  // Repeatly read and print entries

  // Close directory
  closedir(opened)
  return 0;
}