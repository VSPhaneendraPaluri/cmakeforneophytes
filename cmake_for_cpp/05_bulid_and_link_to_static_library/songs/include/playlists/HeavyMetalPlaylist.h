#pragma once

#include "Playlist.h"
#include "Classical.h"
#include "SongGenre.h"

#include <vector>

class HeavyMetalPlaylist 
: public Playlist
, public Classical
{
  public:
    HeavyMetalPlaylist();
    ~HeavyMetalPlaylist() = default;
    void setGenre(SongGenre_t genre) final;
    std::vector<SongDetails> getPlaylist() final;

  protected:
    void createSongs();

  private:
    std::vector<SongDetails> songsList{};
    SongGenre_t genre{SongGenre_t::NONE};
};
