# Erf
Questo è un semplice programma in C che uso come hello world.
Ho settato un sistema in MySys64 (vedi C:\Projects\ConTex\_my-project\Readme-Context.pdf)
Poi ho installato le extension c++ di MS in VS Code. Qui ho messo il formatter con stile Google.
Poi ho scelto lo standard C 17. 
Per gli header ho messo questo path: ${workspaceFolder}/**;C:/msys64/ucrt64/include
Guarda gli altri settings in .vscode/c_cpp_properties.json.
Ho creato anche il file task.json per CTRL + Shift + B per il build.
Se il build non funziona, è perchè il path non contiene C:/msys64/ucrt64/bin.
Per fare questo, invece di settare un altro $PATH globale, uso powershell, setto il path
e poi lancio code:

    PS D:\scratch\c\erf> $env:path="C:\msys64\ucrt64\bin;" + $env:path
    Code .

