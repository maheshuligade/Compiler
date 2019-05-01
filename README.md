# Compiler (Simple Integer Language (SILC) Compiler)

This is Complier for [Simple Integer Language](https://silcnitc.github.io/) which supports different features like
  -  Built in error and sytax checking
  -  Different Data Types like `int`, `string`, `arrays`,etc
  -  Conditional Loops
  -  Functions

# Get started!

  - `sim-2` is a machine simulator which we use to run the compiled code.
      ```sh
    $ cd sim-2
    $ make
    ```
    this generates the `sim` file which is our machine simulator,
  - Now we need to compile our `SILC` Compiler 
    ```sh
    $ cd ..
    $ make
    ```
    this generates the file `interpreter` which is executables for our `SILC` compiler
  - Now run these following commands to check the error and syntachecking feature
    ```sh
    $ ./interpreter  bubble_sort.silc
    ```
    ```sh
    $ ./interpreter array_test.silc
    ``` 
    
- And now to generate the machine code run following command
    ```sh
    $ ./interpreter program.silc 
    ``` 
    this generates the file  `program.sim` this is compiled machine code of the file `program.silc`. To run this compiled file on `sim-2` machine 
    use the command
    ```sh
    $ sim-2/sim program.sim
    ``` 



### Tech

 SILC compiler uses a number of open source projects to work properly:
 
* [C++] - For compiler design logic
* [Lex] -  Generates lexical analyzers. Lex is commonly used with the yacc parser generator
* [YACC] - It is Compiler Compiler 
* [markdown-it] - Markdown parser done right. Fast and easy to extend.


License
----

MIT
