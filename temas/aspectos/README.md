En este ejemplo, tenemos una función de aspecto de registro denominada logging_aspect. Utiliza el decorador @Aspect de aspectlib para indicar que es un aspecto. La función de aspecto toma los parámetros *args y **kwargs, lo que le permite manejar cualquier cantidad de argumentos de palabras clave.

Dentro de la función de aspecto, tenemos el comportamiento de registro. Antes de ejecutar el método, imprime un mensaje indicando el nombre del método. Luego usa yield para pausar la ejecución e invocar el método original. Una vez que se completa el método, reanuda la ejecución e imprime el nombre del método y el valor devuelto. Si ocurre una excepción, imprime los detalles de la excepción y vuelve a generar la excepción.

El aspecto se aplica al método my_method de la clase MyClass usando el decorador @logging_aspect. Cuando se llama a my_method, el aspecto intercepta la llamada, ejecuta el comportamiento de registro definido en la función de aspecto y luego permite que se ejecute el método original.

Ejecutar este código producirá el siguiente resultado:

Before executing method: <method-wrapper '__ne__' of MyClass object at 0x7fb9dac0b8b0>
Inside my_method
After executing method: <method-wrapper '__ne__' of MyClass object at 0x7fb9dac0b8b0>
Returned value: 42
