#include "mbed.h"
#include "HX711.h"

HX711 hx711(p18, p19);
Serial pc(USBTX, USBRX, 115200);

int main() 
{
    hx711.thread_start();
    while(1) 
    {
        pc.printf("%f\r\n", hx711.get_thvalue);
        wait_ms(1);
    }
}
