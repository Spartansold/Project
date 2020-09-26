/*
 * fileio.h
 *
 *  Created on: Sep 25, 2020
 *      Author: nathan
 */

#ifndef INCLUDES_FILEIO_H_
#define INCLUDES_FILEIO_H_
#include <string>
#include <vector>
#include "constants.h"


int loadData(const std::string filename, std::vector<process> &myProcesses);

int saveData(const std::string filename, std::vector<process> &myProcesses);



#endif /* INCLUDES_FILEIO_H_ */
