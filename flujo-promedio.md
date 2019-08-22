# *Stream Flow* y Promedio
## Análisis del problema:
La idea del programa es poder ingresar tanta cantidad de numeros como el usuario desee, acumulando mientras la sumatoria de los valores ingresados junto con un contador, para luego cuando el usuario quiera salir del programa, se muestre el promedio de los datos ingresados.
### Transcripción del problema:
Nos enfrentamos al problema planteando un algoritmo de flujo del siguiente tipo:

### Refinamiento del problema e hipótesis del trabajo:
Logramos generar ese diagrama haciendo un ciclo *for* infinito donde cada vez que se de un *loop* al ciclo se pida un ingreso por teclado de un valor numérico, el cual a medida que avanza el ciclo ese valor se suma a un acumulador y un contador va incrementando en una unidad su tamaño.
<pre>
	for (int x; std::cin << x;) {
		contador += 1
		acumulador += x
	}
	std::cout << acumulador/contador
</pre>
De esta manera, el usuario para salir debe apretar el comando *CTRL+C*, saliendo de esa manera del programa y mostrando en pantalla el promedio de los datos ingresados.
 
## Modelo IPO:
### Input:
Como entrada de datos vamos a tener los números reales ($\real$) ingresados por el usuario a través del teclado.
### Process:
El proceso va a ser llevado a cabo en el ciclo *for* mencionado anteriormente, incrementando en una unidad el contador y acumulando la sumatoria de los valores ingresados.
### Output:
Como salida de datos tenemos una muestra en pantalla del promedio de todos los datos ingresados.
<!--stackedit_data:
eyJoaXN0b3J5IjpbOTg0OTIxODE1LC0xNDg5MTI0OTUxLC0xNj
Y4ODM3MzIsMTI4MjU4MTM1MiwtMTgxODE4OTc5OCw5NDI3NTYx
NzldfQ==
-->