void setup() {
    Serial.begin(115200);
}

void loop() {
    // Definimos los dos números
    static float num1 = 3589.3645;
    static float num2 = 123.4567;

    uint8_t* p_num1 = (uint8_t*) &num1;
    uint8_t* p_num2 = (uint8_t*) &num2;

    if (Serial.available()) {
        char command = Serial.read();
        
        if (command == 's') {
            Serial.println("Transmitting in Little-Endian:");
            Serial.write(p_num1, 4);  // Transmitir num1 en little-endian
            Serial.write(p_num2, 4);  // Transmitir num2 en little-endian

            Serial.println("\nTransmitting in Big-Endian:");
            for (int i = 3; i >= 0; i--) {
                Serial.write(p_num1[i]);  // Transmitir num1 en big-endian
            }
            for (int i = 3; i >= 0; i--) {
                Serial.write(p_num2[i]);  // Transmitir num2 en big-endian
            }
        }
    }
}
