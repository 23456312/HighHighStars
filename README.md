# High High Stars!!☆☆☆☆☆

 ͟͟͞͞➳❥ High High stars es un simulador de análisis de satisfacción del cliente en un restaurante. (Parecido a Yelp)
# ﹒⪩Objetivo⪨﹒
Poder desarrollar una herramienta que permita recoger, analizar y gestionar los comentarios elaborados por los usuarios, para que los restaurantes puedan mejorar la experiencia.

Como mencione anteriormente, High High Stars es un programa en el cual ayuda a los usuarios poder analizar su nivel de satisfacción con el restaurante. Al finalizar la comida del restaurante el usuario podrá realizar una encuesta breve en la cual podrá calificar el servicio del restaurante. Posteriormente los comentarios serán almacenados en un nodo en la lista en el cual podemos tener acceso rápido del comentario más reciente hasta el más antiguo. En la misma lista se podrá utilizar un método de búsqueda binaria en donde se pudieran originar los comentarios por calificación, o por otras especificaciones. En High High Stars es posible poder identificar patrones y poder generar informes en los cuales concluyen al promedio de calificación, comentarios más frecuentes y recomendaciones en el análisis de datos.

# •┈••✦ Pasos del programa ✦••┈•

## Flujo de Trabajo del Programa
### 1. Recopilación de Comentarios
Paso 1: Los clientes completan encuestas de satisfacción al finalizar su visita.
Paso 2: Los comentarios se introducen en el sistema, junto con una calificación (1-5).
Paso 3: Los comentarios se almacenan en la lista y se organizan en el BST por calificación.
### 2. Análisis de Datos
Paso 4: Analizar los comentarios para identificar patrones de satisfacción y áreas de mejora.
Paso 5: Generar informes que resuman la satisfacción del cliente, incluyendo recomendaciones.
Paso 6: Evaluar la relación entre calificaciones y aspectos específicos del servicio (ej. calidad de la comida, atención).

# ─── ･ ｡ﾟ☆: *.☽ Consideraciones☽.* :☆ﾟ. ───
Project High High Stars está elaborado para solo correr utilizando el lenguaje c++, por lo tanto pueden ocurrir errores si se utiliza otro lenguaje de programación. Para poder compilar el proyecto de manera correcta se puede utilizar la siguiente función: g++ main.cpp

Este lenguaje también utiliza varios archivos como el uso de main.cpp, entre otros. La utilización de Project High High Stars sin alguno de estos archivos puede provocar que el archivo no funcione como se pretende.

Gracias

# ┊SICT0301B: Evalúa los componentes┊

## Estructura
### Lista Doblemente Encadenada:
Uso: Almacenar los comentarios y calificaciones de los clientes.
#### Operaciones:
Agregar Comentario: O(1) (Es presentado en todos los casos).
Eliminar Comentario: O(1) (en el mejor de los casos), de lo contrario O(n) (en el peor y en el promedio de los casos).
Recorrer Comentarios: O(n) (Es presentado en todos los casos).
### Árbol de Búsqueda Binaria (BST):
Uso: Clasificar y acceder a comentarios por calificación (1-5).
Ventajas: Permite búsquedas rápidas de comentarios similares en calificación.
#### Operaciones:
Crear Árbol: O(n) (inicialización, en todos los caso presenta misma complejidad).
Agregar Nodo: O(log n) en promedio y en el mejor de los casos (insertar comentario), O(n) en el peor de los casos.
Encontrar Nodo: O(1) en el mejor de los casos, O(log n) en promedio (buscar comentario por calificación), O(n) en el peor de los casos.
### Ordenamiento(QuickSort):
Promedio y mejor caso: O(n log n)
Peor de los casos: 0(n^2) aunque se puede minimizar con un pivote.


# ˚ ༘♡ ⋆SICT0302B: Toma decisiones｡˚ ❀


˚₊· ͟͟͞͞➳❥Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.˚₊· ͟͟͞͞➳❥
Como mencionado anteriormente el proceso de High High Stars toma decisiones las cuales permiten adaptar a los restaurantes a las necesidades de los clientes, mejorando continuamente la experiencia y fomentando la satisfacción. No solo eso sino que en mi proyecto se utilizara la función de QuickSort. Esto se debe a que es eficiente con un promedio de complejidad de O(n log n). Lo cual lo hace eficiente para las listas grandes, también tiene un buen rendimiento con su peor caso siendo de O(n^2), pero puede ser evitado utilizando un buen pivote. 

˚₊· ͟͟͞͞➳❥Selecciona una estructura de datos adecuada al problema y la usa correctamente.˚₊· ͟͟͞͞➳❥

𖨆♡𖨆Selecciona y usa una estructura lineal adecuada al problema𖨆♡𖨆
En el caso de High High Stars se utiliza una lista doblemente encadenada. Esto se debe ya que es ideal para poder almacenar los comentarios de los clientes, gracias a sus caracteristicas. Por ejemplo, gracias a que tiene una inserción eficiente, ya que cuando un comentario es agredado, la lista lo inserya al principio lo cual lo hace eficiente para la utilización de High High Stars. Gracias a que son ingresados al inicio esto hace que sea un metodo lineal sin necesidad de desplazamiento, lo cual hace que la operación de insercción sea rápida y eficiente. Otra caracteristica es que las listas doblemente encadenadas permiten recorrer los comentarios en ambias direciones lo cual lo hace útil en el caso de que necesitemos mostrar los comentarios recientes o los más antiguos. 

𖨆♡𖨆Selecciona un algoritmo de ordenamiento adecuado al problema𖨆♡𖨆
Como mencionado anteriormente, en el caso de los algoritmos de ordenamiento se utiliza QuickSort. QuickSort es utilizado para ordenar los comentarios segun su calificación (1 a 5 estrellas). Dicho esto algunas de las razones por las que se utiliza este método es por su eficiencia promedio, como mencionado anteriormente quicksort tiene un promedio de O(log n) lo cual es muy eficiente por la gran parte, no solo eso sino que como su nombre lo indica puede ordenar en este caso los comentarios de una manera rápida. Otro aspecto que lo hace importante es que quick sort no necesita espacio adicional significativo para ordenar los elemtos, en otras palabras si hay una larga cantidad de comentarios quick sort nos ayuda a no utilizar más de la memoria necesaria. Para finalizar la adaptibilidad de dicho algoritmo lo hace gran utilizado en mi programa debido a que se puede adaptar de buena manera en listas grandes y medianas, lo cual es ideal para High High Stars debido a que recopila y ordena los comentarios de los clientes.

𖨆♡𖨆Usa un árbol adecuado para resolver un problema𖨆♡𖨆



# ˚ ༘♡ ⋆SICT0303B: Implementa acciones científicas｡˚ ❀

ੈ✩‧₊˚Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.ੈ✩‧₊˚

El programa High High Stars tiene una busqueda de comentarios por rating, lo cual nos permite poder buscar comentarios especificos por el valor de su rating. Otro caso es que muestra los resportes ordenados, gracias al BST el cual ayuda a organizar los comentarios por ratings hace el programa más eficiente. 

ੈ✩‧₊˚Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera.ੈ✩‧₊˚

El programa cuenta con varias funciones en las que muestra esta funcionalidad una de ellas siendo la lectura de comentarios desde archivos. Dentro del programa hay una función con el nombre de loadComments el cual lee los comentarios de un archivo.No solo eso sino que dichos comentarios estan registrados en el archivo comments.txt los cuales se leen al iniciar el programa.


ੈ✩‧₊˚Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. Usar de manera.ੈ✩‧₊˚

 Por otra parte la función de save comments muestra escritura de comentarios en un archivo debido a que guarda los comentarios del usuario en un archivo. No solo eso sino, que al finalizar el programa el archivo de comments.txt es actualizado con la función y es guardada.
