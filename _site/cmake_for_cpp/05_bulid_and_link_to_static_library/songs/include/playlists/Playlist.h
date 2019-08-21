#pragma once

#include "SongGenre.h"
#include "SongDetails.h"

#include <vector>

class Playlist
{
  public:
    virtual void setGenre(SongGenre_t genre) = 0;
    virtual std::vector<SongDetails> getPlaylist() = 0;
};
