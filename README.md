# High High Stars!!

 ͟͟͞͞➳❥ High High stars es un simulador de análisis de satisfacción del cliente en un restaurante. (Parecido a Yelp)
# ﹒⪩Objetivo⪨﹒
Poder desarrollar una herramienta que permita recoger, analizar y gestionar los comentarios elaborados por los usuarios, para que los restaurantes puedan mejorar la experiencia.

Como mencione anteriormente, High High Stars es un programa en el cual ayuda a los usuarios poder analizar su nivel de satisfacción con el restaurante. Al finalizar la comida del restaurante el usuario podrá realizar una encuesta breve en la cual podrá calificar el servicio del restaurante. Posteriormente los comentarios serán almacenados en un nodo en la lista en el cual podemos tener acceso rápido del comentario más reciente hasta el más antiguo. En la misma lista se podrá utilizar un método de búsqueda binaria en donde se pudieran originar los comentarios por calificación, o por otras especificaciones. En High High Stars es posible poder identificar patrones y poder generar informes en los cuales concluyen al promedio de calificación, comentarios más frecuentes y recomendaciones en el análisis de datos.

# Pasos del programa

## Flujo de Trabajo del Programa
### 1. Recopilación de Comentarios
Paso 1: Los clientes completan encuestas de satisfacción al finalizar su visita.
Paso 2: Los comentarios se introducen en el sistema, junto con una calificación (1-5).
Paso 3: Los comentarios se almacenan en la lista y se organizan en el BST por calificación.
### 2. Análisis de Datos
Paso 4: Analizar los comentarios para identificar patrones de satisfacción y áreas de mejora.
Paso 5: Generar informes que resuman la satisfacción del cliente, incluyendo recomendaciones.
Paso 6: Evaluar la relación entre calificaciones y aspectos específicos del servicio (ej. calidad de la comida, atención).

# Consideraciones
Project High High Stars está elaborado para solo correr utilizando el lenguaje c++, por lo tanto pueden ocurrir errores si se utiliza otro lenguaje de programación. Para poder compilar el proyecto de manera correcta se puede utilizar la siguiente función: g++ main.cpp

Este lenguaje también utiliza varios archivos como el uso de main.cpp, entre otros. La utilización de Project High High Stars sin alguno de estos archivos puede provocar que el archivo no funcione como se pretende.

Gracias

# SICT0301B: Evalúa los componentes

## Estructura
### Lista Doblemente Encadenada:
Uso: Almacenar los comentarios y calificaciones de los clientes.
Operaciones:
Agregar Comentario: O(1) (insertar al principio).
Eliminar Comentario: O(n/2 + b) (búsqueda y eliminación).
Recorrer Comentarios: O(n).
Árbol de Búsqueda Binaria (BST):
Uso: Clasificar y acceder a comentarios por calificación (1-5).
Ventajas: Permite búsquedas rápidas de comentarios similares en calificación.
Operaciones:
Crear Árbol: O(n) (inicialización).
Agregar Nodo: O(log n) en promedio (insertar comentario).
Encontrar Nodo: O(log n) en promedio (buscar comentario por calificación).


# SICT0302B: Toma decisiones

Como mencionado anteriormente 
