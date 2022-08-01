#include "Image.h"

int main(int argc, char** argv) {
	Image test("sample_image.bmp");
	bool write;


	write = test.write("image.bmp");
	printf("%d", write);
	Image copy = test;

	for(int i = 0;i < copy.w*copy.channels;i++){
		copy.data[i]= 255;
	}
	copy.write("copy.png");
	return 0;
}