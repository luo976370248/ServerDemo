#ifndef _mysql_warpper_h_
#define _mysql_warpper_h_

#include "mysql.h"


class mysql_wrapper {
public:
	static void connect(char* ip, int port,char* db_name, char* uname, char* pwd,void(*open_cb)(const char* err, void* context, void* udata), void* udata = nullptr);

	static void close(void* context);

	static void query(void* context,char* sql,void(*query_cb)(const char* err, MYSQL_RES* result, void* udata), void* udata = nullptr);
};

#endif // !_mysql_warpper_h_
