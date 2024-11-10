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
Project High High Stars está elaborado para solo correr utilizando el lenguaje c++, por lo tanto pueden ocurrir errores si se utiliza otro lenguaje de programación. Para poder compilar el proyecto de manera correcta se puede utilizar la siguiente función: g++ -std=c++11 main.cpp

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

##✧Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.✧

###・❥・display Comments・❥・
En el mejor de los casos display Comments presenta un caso de complejidad de o(n), en el caso promedio de O(n) y en el peor de los casos O(n). Debido a que es necesario recorrer la lista completa.
###・❥・save Comments・❥・
En la función save Comments presenta el mismo caso de complejidad para el mejor, promedio y el peor. El cual es O(n) debido a que tiene que recorrer toda la lista.
###・❥・display In Order・❥・
En la función de Display In Order tiene que recorrer en orden del árbol binario. En este caso O(n) es el caso de complejidad para todos los casos.
###・❥・search By Rating・❥・
En el mejor de los casos Search By Rating presenta un caso de complejidad de o(log n) en el mejor de los casos, en el caso promedio de O(log n). Esto es debido a que el árbol está equilibrado, de lo contrario en el peor de los casos presenta O(n). Debido a que el árbol está desbalanceado (como una lista enlazada), la búsqueda será lineal.
###・❥・get Node Count・❥・
En la función de Get Node Count presenta el mismo caso de complejidad para todos los puntos el cuál es O(n) debido a que la complejidad es lineal con respecto al número de nodos.
###・❥・Complejidad Final・❥・
Para finalizar el programa de High High Stars tiene una complejidad final de O(log n). (Este cálculo fue sacado combinando todas las operaciones de las complejidades.)

Mejor Caso O(n log n) = O(n)+O(1)+O(n)+O(n logn)+O(n)+O(n)+O(log n)+O(n)

Promedio O(n log n) = O(n)+O(1)+O(n)+O(n log n)+O(n)+O(n)+O(log n)+O(n)

Peor O(n2) = O(n)+O(1)+O(n)+O(n2)+O(n)+O(n)+O(n)+O(n)


# ˚ ༘♡ ⋆SICT0302B: Toma decisiones｡˚ ❀


##˚₊· ͟͟͞͞➳❥Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.˚₊· ͟͟͞͞➳❥

Como mencionado anteriormente el proceso de High High Stars toma decisiones las cuales permiten adaptar a los restaurantes a las necesidades de los clientes, mejorando continuamente la experiencia y fomentando la satisfacción. No solo eso sino que en mi proyecto se utilizara la función de QuickSort. Esto se debe a que es eficiente con un promedio de complejidad de O(n log n). Lo cual lo hace eficiente para las listas grandes, también tiene un buen rendimiento con su peor caso siendo de O(n^2), pero puede ser evitado utilizando un buen pivote. 

##˚₊· ͟͟͞͞➳❥Selecciona una estructura de datos adecuada al problema y la usa correctamente.˚₊· ͟͟͞͞➳❥

###𖨆♡𖨆Selecciona y usa una estructura lineal adecuada al problema𖨆♡𖨆

En el caso de High High Stars se utiliza una estructura de una lista doblemente enlazada. La justificación para esta estructura es que es ideal para poder almacenar los comentarios de los clientes, debido a sus características. Las listas doblemente enlazadas son más adecuadas para las operaciones de inserción y eliminación en especial cuando se requieren en cualquier parte de la lista (si es que se tiene acceso al nodo). No solo eso, sino también es eficaz para los recorridos secuenciales.  En el caso de inserción este algoritmo tiene un caso de complejidad de O(1) en el mejor de los casos, por el contrario tiene O(n) en el peor de los casos, a comparación de un árbol de búsqueda Binaria que en su inserción tiene una complejidad de O(log n) en el caso promedio, pero O(n) en el peor caso (Sólo cuando el árbol está desbalanceado).  Otra característica por la cual este método fue utilizado en el proyecto es debido a que este tipo de listas permiten recorrer los comentarios en ambas direcciones, lo cuál lo hace útil en el caso de que necesitemos mostrar los comentarios recientes o los más antiguos.


###𖨆♡𖨆Usa un árbol adecuado para resolver un problema𖨆♡𖨆

En el caso de High High Stars se utiliza un árbol de búsqueda binaria mejor conocido como BST. Este se utiliza como una de las formas de almacenar, organizar y buscar comentarios en función a su calificación. El árbol de búsqueda nos permite realizar búsquedas rápidas y mantiene los comentarios ordenados para un fácil acceso. Este método lo hace útil en cuanto se requieren consultas frecuentes de comentarios con calificaciones específicas. En este caso tiene una complejidad de O(log n) en el mejor de los casos, O(log n) caso promedio y O(n) en el peor de los casos. Comparándolo con otros métodos como es el caso de las búsquedas secuenciales se puede observar que las búsquedas secuenciales tienen un caso de O(1) en el mejor de los casos y O(n) en el caso promedio y peor. Lamentablemente este método no tiene un órden en los elementos lo cual no nos permite utilizar las propiedades de un BST para reducir el número de comparaciones. Para finalizar un BST nos permite hacer búsquedas rápidas, mantenimiento del órden de los comentarios, y simplicidad en la implementación, la cuál ofrece varias características como lo es la inserción y eliminación. Lo cual es vital en High High Stars.



# ˚ ༘♡ ⋆SICT0303B: Implementa acciones científicas｡˚ ❀

##ੈ✩‧₊˚Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.ੈ✩‧₊˚

Para poder consultar la información de las estructuras del programa High High Stars se utiliza un Binary Search Tree mejor conocido como BST. Lo que hace en este caso es que una vez acabada la experiencia del usuario le aparece un opción en donde puede hacer una búsqueda de comentarios por ratings, gracias a esto nos permite buscar comentarios específicos por el valor de su rating. Lo que hace el BST es organizar los comentarios y posteriormente buscar los comentarios que el usuario quiere visualizar. Esto es visto en el archivo BST.h, para especificar en la línea 63 función Search Rating. Por el contrario el main.cpp es el que llama a dicha función en la línea 55. 

##ੈ✩‧₊˚Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera.ੈ✩‧₊˚

High High Stars hace la utilización de varias funciones para funcionar de manera eficaz, una de ellas siendo la lectura de archivos la cúal es vital para que High High Stars funcione. Dentro del programa existe la utilización de una función con el nombre load Comments que solo es encontrada en el archivo main.cpp en la línea 17, lo que hace esta función es que lee los comentarios y sus ratings del archivo que se proporciona y posteriormente los guarda en el objeto CommentList. Posteriormente en la línea 41 podemos observar que el archivo que se utilizará contiene el nombre de comments.txt. 

##ੈ✩‧₊˚Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. Usar de manera.ੈ✩‧₊˚

 De igual manera que el punto anterior, High High Stars utiliza mecanismos de escritura en los archivos para poder funcionar de manera correcta. Dentro del programa existe la utilización de una función con el nombre saveComments a diferencia de load Comments, esta función puede ser encontrada en ambos como en el main.cpp y comments.h. En la función saveComments dentro de la comment.h en la línea 75 lo que hace es guardar los comentarios almacenados en la lista doblemente ligada en un archivo de texto. Por el contrario saveComments en el main.cpp el cual está en la línea 28 guarda los comentarios de un archivo en la clase de CommentList.
