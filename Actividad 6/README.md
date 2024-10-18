# sfi_202420_JuanPabloHernandez_U3
 
- En el primer codigo nos muestra lo que normalmente usamos para la comunicacion con el microcontrolador, primero especificamos la conexion serial con un puerto especifico, continuamos diciendo cual sera la tasa baud que en este caso es de 115200 bits/s, con `DtrEnable = true` indicamos que el control de flujo "Data Terminal ready" esta habilitado, y finalmente abrimos la conexion serial.

- Aquí se está enviando un solo byte a través del puerto serial. El byte enviado es 0x01, que corresponde al primer elemento del array de datos data.

- En este ultimo codigo se lee datos desde el puerto serial. Si hay al menos 4 bytes disponibles, lee 4 bytes en el array buffer y luego los imprime en consola en formato hexadecimal (X2 para mostrar dos dígitos por byte).
