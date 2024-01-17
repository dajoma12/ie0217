#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

using namespace std;

class Podcast : public MaterialAudiovisual {
    public:
        string resumen;
        string relacionado;
        Podcast(string titulo, string grupo, string tipo, string autor,
            int duracion, string genero, string estado, 
            float precio, string resumen, string relacionado);

        void volumenPodcast();
        void infoPodcast();
        
};


#endif // PODCAST_HPP