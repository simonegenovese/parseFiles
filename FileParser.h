//
// Created by Simone Genovese on 28/07/15.
//

#ifndef LISTFILES_FILEPARSER_H
#define LISTFILES_FILEPARSER_H


#include <sys/dirent.h>

class FileParser {

public:
    FileParser(dirent *pDirent);
    void parse();
};

#endif //LISTFILES_FILEPARSER_H

