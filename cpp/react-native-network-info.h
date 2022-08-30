#include <iostream>
#include <unistd.h>
#include <jsi/jsilib.h>
#include <jsi/jsi.h>

#define MAX_HOSTNAME_LENGTH 254

using namespace facebook;

void installNetworkInfo(jsi::Runtime &rt);

void cleanUpNetworkInfo();
