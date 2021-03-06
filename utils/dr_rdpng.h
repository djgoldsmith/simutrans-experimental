#ifndef DR_RDPNG_H
#define DR_RDPNG_H

#ifdef __cplusplus
extern "C" {
#endif

int load_block(unsigned char** block, unsigned* width, unsigned* height, const char* fname, const int base_img_size);

#ifndef _WIN32
// output either a 32 (or 16 or 15 bitmap in future ...)
int write_png( const char *file_name, unsigned char *data, int width, int height, int bit_depth );
#endif

#ifdef __cplusplus
}
#endif

#endif
