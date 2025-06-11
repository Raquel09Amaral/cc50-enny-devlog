# 📘 Módulo 1 - Laços e estruturas de repetição

Esta pasta contém os exercícios práticos da aula 03 do curso [CC50 - Introdução à Ciência da Computação](https://cs50.harvard.edu/), com foco em laços (`for`, `while`, `do while`) e estruturas de repetição em linguagem C.

---

## 🧱 mario.c

Este exercício simula a construção de uma escada usando o caractere `#`, inspirado em *Super Mario Bros*.

O programa solicita ao usuário um valor entre 1 e 8 e imprime a escada alinhada à direita, com o número de degraus correspondente.

### Exemplo de saída:


---

🧠 Conceitos utilizados:
- Laços `for`
- Condicional `do while`
- Impressão formatada com `printf`
- Entrada de dados com `scanf`


---

## 🧱 mario2.c — Pirâmide dupla (com espaço no meio)

Este exercício solicita ao usuário um número inteiro representando a altura da pirâmide (de 1 a 8) e imprime **duas pirâmides alinhadas**, separadas por dois espaços no meio.

Exemplo para altura 4:

---

## 🪙 mario3.c — Cálculo de troco em moedas

Este exercício solicita ao usuário um valor em reais (R$) e calcula o menor número de moedas necessário para devolver o troco, utilizando moedas de:

- R$ 0,25
- R$ 0,10
- R$ 0,05
- R$ 0,01

### 💻 Como compilar e executar:

gcc mario3.c -o mario3 -lm
./mario3



