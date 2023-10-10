#pragma once

#ifndef RISK_H
#define RISK_H

#include "list"
#include "vector"
#include "Tropa.h"
#include "Continente.h"
#include "Jugador.h"
#include "Carta.h"
#include "Territorio.h"
#include <memory>
#include <queue>
#include "D:\Javeriana\Estructuras de datos\PROYECTO\Risk\RiskGit\Huffman\ArbolHuffman.h"

using namespace std;
class Risk {
protected:
    vector<Continente> listaContinentes;
    vector<Carta> listaCartas;
    list<Jugador> listaJugadores;
    list<shared_ptr<Territorio>> listaTerritorios;
    int currentTurn;
    int cartasIntercambiadas;
    bool isGameInitialized = false;
    bool isGameOver = false;

public:
    //Constructor
    Risk();

    //Getters y Setters
    vector<Continente> &getListaContinentes();
    void setListaContinentes(const vector<Continente> &listaContinentes);
    vector<Carta> &getListaCartas();
    void setListaCartas(const vector<Carta> &listaCartas);
    list<Jugador> &getListaJugadores();
    void setListaJugadores(const list<Jugador> &listaJugadores);
    const list<shared_ptr<Territorio>> &getListaTerritorios() const;
    void setListaTerritorios(const list<shared_ptr<Territorio>> &listaTerritorios);
    int getCurrentTurn() const;
    void setCurrentTurn(int currentTurn);
    bool isGameInitialized1() const;
    void setIsGameInitialized(bool isGameInitialized);
    bool isGameOver1() const;
    void setIsGameOver(bool isGameOver);
    int getCartasIntercambiadas() const;
    void setCartasIntercambiadas(int cartasIntercambiadas);

    //OTras funciones
    void eliminarUltimaCarta();
    ArbolHuffman crearArbolHuffman(map<int, int>);
    string contenidoDeLaPartidaEnTexto();
    string contenidoDeLaPartidaCodificado(map<int,string> carateresYCodigos);
};

#endif //RISK_H
