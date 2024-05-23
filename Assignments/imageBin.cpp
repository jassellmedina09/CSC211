#include <cstdio>
#include "bitmap_image.hpp"

int main(int argc, char *argv[])
{
    bitmap_image input_image(argv[1]);

    const unsigned int height = input_image.height();
    const unsigned int width = input_image.width();

    input_image.convert_to_grayscale();

    unsigned int total_intensity = 0;
    std::size_t y = 0;

    while (y < height)
    {
        std::size_t x = 0;
        while (x < width)
        {
            unsigned char intensity;
            input_image.get_pixel(x, y, intensity, intensity, intensity);
            total_intensity += intensity;
            x++;
        }
        y++;
    }

    unsigned char threshold = static_cast<unsigned char>(total_intensity / (height * width));

    y = 0;
    while (y < height)
    {
        std::size_t x = 0;
        while (x < width)
        {
            unsigned char intensity;
            input_image.get_pixel(x, y, intensity, intensity, intensity);

            if (intensity < threshold)
                input_image.set_pixel(x, y, 0, 0, 0);
            else
                input_image.set_pixel(x, y, 255, 255, 255);

            x++;
        }
        y++;
    }

    input_image.save_image(argv[2]);

    return 0;
}