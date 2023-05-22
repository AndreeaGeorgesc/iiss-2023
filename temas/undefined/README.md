 Utilizamos la convención común en pseudocódigo para definir clases y métodos.
 Utilizamos el operador de fusión opcional (or) al construir una instancia de MobileTester para evitar que el argumento phone sea undefined o null. 
 Si no se proporciona ningún objeto phone, se crea una instancia de MobilePhone con valores predeterminados como None.
 Dentro del método testPhone(), verificamos si los valores de marca, modelo y precio son None utilizando la condición not self.phone.getBrand()
 , not self.phone.getModel() y not self.phone.getPrice(). Si alguno de estos valores falta, se muestra un mensaje de error correspondiente.
