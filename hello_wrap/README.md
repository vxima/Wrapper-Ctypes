# Exemplo basico de como chamar uma funçao de C para o python

* ## Como compilar :

Isso cria um arquvio .so para os sistemas Linux para que possa ser chamado pela funçao CDLL no arquivo do python.

```
gcc -shared -Wl,-soname,print -o print.so -fPIC print.c
```

* ## Como rodar:

Executa o codigo em python que chama a função em C.

```
python wrap.py
```