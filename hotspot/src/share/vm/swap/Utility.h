/*
 * Utility.h
 *
 *  Created on: Jun 16, 2014
 *      Author: ravitandon
 */

#ifndef UTILITY_H_
#define UTILITY_H_
#include "swap_global.h"

class Utility {
public:
	static void printRegionTable(void *addr);
	static void* getRegionStart(void *address);
	static void* getRegionEnd(void *address);
};

#endif /* UTILITY_H_ */
