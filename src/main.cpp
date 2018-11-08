#include <Arduino.h>

#define UseWifi 1

#include "wifi_and_ota.h"
#include "setup_master.h"
#include "loop_master.h"


void setup() {
    setup_master(); 
}

void loop() {
    loop_master();
}