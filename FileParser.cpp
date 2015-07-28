//
// Created by Simone Genovese on 28/07/15.
//

#include <stdio.h>
#include "FileParser.h"

dirent *localFile;

FileParser::FileParser(const dirent *pDirent) {
    localFile = pDirent;
}

void parse(){
    printf ("%s\n", localFile->d_name);
}

