cmake_minimum_required(VERSION 4.3)
project(untitled C)


set(CMAKE_C_STANDARD 11)

# === MÓDULO: VARIÁVEIS ===
add_executable(programa1 variaveis/programa1.c)

# === MÓDULO: EXERCÍCIOS PRÁTICOS ===
add_executable(ExercicioPraticar exercicioPraticar/ExercicioPraticar.c)

# === MÓDULO: ESTRUTURA DE DECISÃO ===
add_executable(EstruturaDecisao estruturaDecisao/EstruturaDecisao.c)
add_executable(ExerciciosDecisao estruturaDecisao/ExercicioPratica/Exercicios.c)
add_executable(Switch estruturaDecisao/Switch.c)

# === MÓDULO: LAÇOS DE REPETIÇÃO ===
add_executable(For LacoRepeticao/For.c)
add_executable(While LacoRepeticao/While.c)
add_executable(DoWhile LacoRepeticao/DoWhile.c)
add_executable(LoopExercicio1 LacoRepeticao/ExerciciosLoop/Exercicio1.c)
add_executable(LoopExercicio2 LacoRepeticao/ExerciciosLoop/Exercicio2.c)
add_executable(LoopExercicio3 LacoRepeticao/ExerciciosLoop/Exercicio3.c)

# === MÓDULO: TIPOS DE DADOS E NÚMEROS BINÁRIOS ===
add_executable(Tipos_Numericos tipos_dados/Tipos_Numericos.c)
add_executable(numeros_binarios NumerosBinarios/numeros_binarios.c)

# === MÓDULO: FUNÇÕES (Projeto com arquivos múltiplos) ===
add_executable(Cabecalho
        funcoes/Cabecalho.c
        funcoes/ajuda.c
        funcoes/ajuda.h
)