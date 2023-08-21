//Zadanie 1// 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

#define ROZMIAR1 (sizeof(tab1)/sizeof(const long double))
#define ROZMIAR2 (sizeof(tab2)/sizeof(const char))

int main(void) 
{ 
    const long double tab1[] = {89.9, 92.3, 1.9, 38.6, 36.5, 54.6, 54.7, 130.5, 72.4, 115.2,
    68.0, 94.9, 88.3, 19.9, 116.0, 30.2, 141.5, 91.4, 140.7, 128.9, 64.4, 63.4, 46.0, 2.9, 9.1,
    128.5, 38.5, 109.5, 112.7, 51.0, 111.2, 52.6, 143.3, 113.1, 91.2, 29.8, 17.7, 145.9, 10.3,
    90.1, 111.2, 78.3, 35.0, 49.5, 98.2, 1.0, 79.7, 89.7, 92.3, 70.4, 68.6, 6.7, 133.8, 114.5,
    9.6, 142.9, 93.0, 48.1, 102.4, 55.7, 99.1, 63.7, 108.4, 92.4, 26.8, 49.6, 122.2, 44.5, 45.5,
    132.5, 134.6, 6.7, 60.8, 19.6, 56.2, 9.0, 20.6, 135.9, 98.6, 112.9, 56.4, 17.2, 119.6, 40.1,
    131.7, 129.3, 33.0, 74.8, 27.3, 135.4, 130.5, 126.4, 49.1, 88.9, 68.8, 75.9, 138.5, 41.0,
    120.3, 34.0, 23.5, 105.0, 40.8, 84.3, 124.6, 97.0, 93.2, 145.2, 82.9, 41.8, 108.1, 139.3,
    59.1, 77.7, 29.4, 40.8, 57.0, 62.4, 115.6, 84.3, 47.9, 96.1, 60.8, 96.9, 35.0, 129.6, 22.8,
    23.5, 20.6, 143.2, 57.5, 44.1, 98.1, 98.3, 128.4, 72.7, 45.3, 71.6, 67.9, 128.2, 113.5,
    26.0};
    printf("Rozmiar tablicy tab1 = %lu\n",ROZMIAR1);

    const char tab2[] = "scp - copies files between hosts on a network. It uses ssh(1) for data transfer, and uses the same authentication and provides the same security as ssh(1). Unlike rcp(1), scp will ask for passwords or passphrases if they are needed for authentication. File names may contain a user and host specification to indicate that the file is to be copied to/from that host. Local file names can be made explicit using absolute or relative pathnames to avoid scp treating file names containing ':' as host specifiers. Copies between two remote hosts are also permitted. When copying a source file to a target file which already exists, scp will replace the contents of the target file (keeping the inode). If the target file does not yet exist, an empty file with the target file name is created, then filled with the source file contents. No attempt is made at \"near-atomic\" transfer using temporary files.";
    printf("Rozmiar tablicy tab2 = %lu\n",ROZMIAR2);
    

    return 0; 
}
