#include "types.h"
#include "user.h"
#include "fcntl.h"
//reading from README file to test lseek
int main(int argc, char* argv[]) {
    int fd;
    char data[256];
    fd = open("README", O_RDONLY);
    lseek(fd, 150, SEEK_SET);
    read(fd, data, 45);
    printf(1, "%s\n", data);
    printf(1,"---lseek successfull---\n");
    exit();
}
