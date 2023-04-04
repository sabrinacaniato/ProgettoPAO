cmake_minimum_required(VERSION 3.24)
project(Progetto)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Progetto
        FileCPP/Artigliere.cpp
        FileH/Artigliere.h
        FileCPP/Giocatore.cpp
        FileH/Giocatore.h
        FileCPP/Lista.cpp
        FileH/Lista.h
        FileCPP/Lupo.cpp
        FileH/Lupo.h
        main.cpp
        FileCPP/Medico.cpp
        FileH/Medico.h
        FileCPP/Medium.cpp
        FileH/Medium.h
        FileCPP/Personaggio.cpp
        FileH/Personaggio.h
        FileCPP/Veggente.cpp
        FileH/Veggente.h FileCPP/Lista.cpp FileCPP/PersonaggioMagico.cpp FileH/PersonaggioMagico.h)
