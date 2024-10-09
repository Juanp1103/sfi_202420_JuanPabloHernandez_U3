# sfi_202420_JuanPabloHernandez_U3
 
1. El codigo por defecto se envia en little endian, ya que estos sistemas como arduino envian los datos por defecto de esta forma.

2. Para enviar los datos en big endian tendriamos que invertir los datos antes de enviarlos, esto lo podriamos lograr de la siguiente forma:
``` for (int i = 3; i >= 0; i--) {
    Serial.write(p[i]);} ```

