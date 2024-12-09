#ifndef USER_AUTH_H
#define USER_AUTH_H

#include <string>
#include <fstream>
#include <argon2.h>

bool verifyPassword(const std::string& username, const std::string& password);

#endif // USER_AUTH_H