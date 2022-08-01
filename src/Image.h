#include <stdint.h>
#include <cstdio>

enum ImageType {
    PNG, JPG, BMP
};

struct Image {
    uint8_t* data = NULL;  
    size_t size = 0;
    int w;
    int h;
    int channels;

    Image(const char* filename);
    Image(int w, int h, int channels);
    Image(const Image& img); 
    ~Image();

    bool read(const char* fiiename);
    bool write(const char* fiiename);
    ImageType get_filetype(const char* filename);
};