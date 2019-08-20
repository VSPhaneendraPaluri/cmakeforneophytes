#pragma once

#include "SongCharacteristics.h"

#include <stdint.h>
#include <string>

class SongDetails
{
  public:
    explicit SongDetails(std::string name, std::string singer, std::string album, uint32_t releaseYear);
    ~SongDetails();
    
    void setSinger(std::string singer);
    void setAlbum(std::string album);
    void setReleaseYear(uint32_t releaseYear);

    std::string getName() const;
    std::string getSinger() const;
    std::string getAlbum() const;
    uint32_t getReleaseYear() const;

  private:
    std::string name_{""};
    std::string album_{""};
    std::string singer_{""};
    uint32_t releaseYear_{1980};
};
