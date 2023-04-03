cmake_minimum_required(VERSION 3.24)
project(Progetto)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Progetto
        Artigliere.cpp
        Artigliere.h
        Giocatore.cpp
        Giocatore.h
        Kill.cpp
        Kill.h
        List.cpp
        List.h
        Lupo.cpp
        Lupo.h
        main.cpp
        Medico.cpp
        Medico.h
        Medium.cpp
        Medium.h
        Personaggio.cpp
        Personaggio.h
        Saver.cpp
        Saver.h
        Seer.cpp
        Seer.h
        Veggente.cpp
        Veggente.h)
