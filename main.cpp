
#include <iostream>

#include "Functions.h"

int main(void)
{
    curl_global_init(CURL_GLOBAL_ALL);
    std::ofstream ofs("output.html");
    if(CURLE_OK == curl_read("http://google.com", ofs, 30))
	{
		std::cout<< "success";
	}
    /* always cleanup */
    curl_global_cleanup();

  return 0;
}
