### tp012022

## ¿Qué es un archivo .gitignore?

Un archivo .gitignore es un archivo de texto plano con el cual se le indica a Git 
sobre los archivos y/o carpetas que no se desean guardar en un proyecto.

## ¿Cuándo se lo debe utilizar? :smiley:

   Principalmente, cuando se crea un nuevo repositorio para hacer proyectos, es una buena prática tener un archivo .gitignore. Pues, nunca faltan
los archivos innecesarios o irrelevantes como, por ejemplo, los archivos ejecutables (archivos de extesión .exe) o de cualquier otra índole similar que son derivados de archivos más importantes y que pueden variar en un cierto tiempo.

## ¿Cómo se origina un archivo .gitignore? 🤖

Pues, el procedimiento es muy sencillo y se puede realizar usando Git Bash. Para esto, debes abrir Git Bash desde tu repositorio local y ejecutar el comando "_touch .gitignore_". Luego, accedes a tu archivo _.gitignore_ desde tu repositorio local y determinan los archivos, patrones de archivos o carpetas que desea que Git ignore de esta forma:

~~~
#Ignorar archivo particular
ignorado.txt

#Ignorar patron de archivos
*.exe
*.txt

#Ignorar carpetas
doc/*.txt
~~~

  Si usas un repositorio remoto (como Github), no hay que olvidarse de subirlo al mismo.
    
   #### SALUDOS 😄👍
