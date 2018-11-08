#include <Arduino.h>

#include "wifi_and_ota.h"


void setup() {
    Serial.begin(115200);
    wifi_setup();  
}

void loop() {
    ota.loop();
}