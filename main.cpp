#include <iostream>
#include <dirent.h>
#include "FileParser.h"


void faQualcosaConIlFile(dirent *ent) {
    FileParser *parser = new FileParser(ent);
    parser->parse();
    delete parser;
}

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

    cout << "Fine!" << endl;
    return 0;
}
