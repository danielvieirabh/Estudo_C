cmake_minimum_required(VERSION 4.3)
project(untitled C)

set(CMAKE_C_STANDARD 11)
add_library(untitled STATIC library.c
        teste.c
        teste.h
        variaveis/programa1.c
        exercicioPraticar/ExercicioPraticar.c
        estruturaDecisao/EstruturaDecisao.c
        estruturaDecisao/ExercicioPratica/Exercicios.c
        estruturaDecisao/Switch.c
        LacoRepeticao/For.c
        LacoRepeticao/While.c
        LacoRepeticao/DoWhile.c
        LacoRepeticao/ExerciciosLoop/Exercicio1.c
        LacoRepeticao/ExerciciosLoop/Exercicio2.c
        LacoRepeticao/ExerciciosLoop/Exercicio3.c
)
