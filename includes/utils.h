/*
 * utils.h
 *
 *  Created on: Sep 25, 2020
 *      Author: nathan
 */

#ifndef INCLUDES_UTILS_H_
#define INCLUDES_UTILS_H_
#include <vector>
#include <string>
#include "constants.h"


void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

process getNext(std::vector<process> &myProcesses);

int getSize(std::vector<process> &myProcesses);

int handleMissingData(std::vector<process> &myProcesses);



#endif /* INCLUDES_UTILS_H_ */
