#include <iostream>
#include <unistd.h>
#include <string>
#include <pwd.h>
#include <fstream>

int
  main (int argc, char** argv)
{
    using std::string;
    int myuid = getuid();
    passwd *mypwd = getpwuid(myuid);
    string homedir = mypwd->pw_dir;

    return (0);
}
