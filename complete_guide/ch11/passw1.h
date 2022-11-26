/*
passw1.h
The functions getPassword() and timediff()
to read and examine a password.
-----------------------------------------------------
*/

#ifndef PASSW_H
#define PASSW_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

long timediff(void); // Prototype
static string secret = "ISUS"; // Password
static long maxcount = 6, maxtime = 60; // Limits

bool getPassword();
long timediff();

#endif // PASSW_H