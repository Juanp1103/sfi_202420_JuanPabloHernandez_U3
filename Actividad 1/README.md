# sfi_202420_JuanPabloHernandez_U3
 
1. Un protocolo binario es un formato de comunicación en el que los datos se transmiten como una secuencia de bits (0s y 1s) en lugar de caracteres legibles por humanos. A diferencia de un protocolo de texto, que usa ASCII para representar información, un protocolo binario utiliza estructuras más compactas y eficientes para codificar los datos.

2. Los mensajes se organizan en diferentes partes que estructuran la información y aseguran la correcta transmisión de datos:
- La cabecera contiene información sobre cómo interpretar el mensaje. Este es escencial ya que le entrega al receptor Entienda como debe procesar el mensaje. Este a su vez se puede desglosar en otras partes:
    - Tipo de mensaje: Indica qué tipo de mensaje se está enviando (por ejemplo, comando, solicitud, respuesta).
    - Versión del protocolo: Indica la versión del protocolo para asegurar compatibilidad entre sistemas que usen diferentes versiones.
    - Tamaño del mensaje: Especifica la longitud total del mensaje, o solo la longitud del cuerpo, para que el receptor sepa cuántos datos debe esperar.
    - 

- El cuerpo contiene los datos reales que el mensaje está transmitiendo. Esta sección puede ser de tamaño fijo o variable, dependiendo del protocolo y del tipo de datos enviados.
    - Datos del usuario: Información que el mensaje está transmitiendo, como un archivo, un valor de sensor, una respuesta a una solicitud, etc.
    - 

- Checksum es un valor que se usa para verificar la integridad de los datos del mensaje. Se calcula a partir del contenido del mensaje (normalmente de la cabecera y el cuerpo) y se envía al final del mensaje. Se suma los valores binarios de los datos y genera un valor de comprobación, este con el fin de comprobar que el contenido del mensaje no se ha corrompido durante la transmision.
