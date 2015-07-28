#include <iostream>
#include <dirent.h>
#include "FileParser.h"

void faQualcosaConIlFile(const dirent *ent);

using namespace std;

int main() {
    DIR *dir;
    struct dirent *ent;
    const char *path = "//Users//";
//    const char *path = "c:\\src\\";
    if ((dir = opendir(path)) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir(dir)) != NULL) {
            faQualcosaConIlFile(ent);
        }
        closedir(dir);
    } else {
        /* could not open directory */
        perror("");
        return EXIT_FAILURE;
    }

    cout << "Hello, World!" << endl;
    return 0;
}

void faQualcosaConIlFile(const dirent *ent) {
    FileParser *parser = new FileParser(ent);
    parser->parse();
}