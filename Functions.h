#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <Iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <fstream>
#include <sstream>
#include <libxslt/transform.h>
#include <libxslt/xsltutils.h>
extern int xmlLoadExtDtdDefaultValue;
//Call back function sends output to stream.
size_t writefun(void* buf, size_t size, size_t nmemb, void* userp);

//sets options and makes request
CURLcode curl_read(const std::string& url, std::ostream& os, long timeout);

#endif // FUNCTIONS_H_INCLUDED
