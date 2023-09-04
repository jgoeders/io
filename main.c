#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "buttons.h"
#include "device.h"
#include "display.h"
#include "log.h"
#include "fonts/fonts.h"

/* DEFAULT COLORS */
#define BACKGROUND_COLOR WHITE
#define FONT_COLOR BLACK

// Makes sure to deinitialize everything before program close
void intHandler(int dummy) {
    log_info("Exiting...");
    display_exit();
    exit(0);
}

int main(void) {

    signal(SIGINT, intHandler);

    // Initialize the hardware here
    log_info("Starting...");
    /* place lines here*/
    delay_ms(1000);

    // Add file scanning logic here
    

    // Everythin inside this loop will repeat until 'Ctrl-C' is pressed in the terminal.
    // Add drawing logic here
    while (true) {
        delay_ms(200);

        // // Example of how to interact with a button
        // if (button_up() == 0) {
        // // Do something upon detecting button press

        //     while (button_up() == 0) {
        //         // Do something while the button is pressed
        //         delay_ms(1);
        //     }
        // }

        /* Write code to fufill lab requirements here*/
    }
    return 0;
}
