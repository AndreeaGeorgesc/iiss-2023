En este código, se crea una promesa sumPromise para contener el resultado de la tarea asincrónica. Se obtiene un futuro sumFuture de la promesa, que eventualmente mantendrá el resultado.

A la función de calcular suma se le pasa la promesa (usando la semántica de movimiento) junto con los argumentos de entrada. Dentro de la función, se calcula la suma y el resultado se establece mediante p.set_value().

En main(), el subproceso de trabajo se inicia con std::thread, pasando la función de cálculo de suma, los argumentos de entrada y la promesa movida. El subproceso principal puede continuar con otro trabajo mientras el cálculo está en curso.

Luego, el subproceso principal espera el resultado llamando a sumFuture.get(), que se bloquea hasta que el resultado esté disponible. Una vez que se obtiene el resultado, se puede utilizar según sea necesario.

Finalmente, el subproceso principal espera a que finalice el subproceso de trabajo llamando a workerThread.join(), asegurándose de que el programa no se cierre prematuramente.
