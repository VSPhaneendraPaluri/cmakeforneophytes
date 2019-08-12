#pragma once

#include "Playlist.h"
#include "Classical.h"
#include "SongGenre.h"

#include <vector>

class PopPlaylist 
: public Playlist
, public Classical
{
  public:
    PopPlaylist();
    ~PopPlaylist() = default;
    void setGenre(SongGenre_t genre) final;
    std::vector<SongDetails> getPlaylist() final;

  protected:
    void createSongs();

  private:
    std::vector<SongDetails> songsList{};
    SongGenre_t genre{SongGenre_t::NONE};
};
