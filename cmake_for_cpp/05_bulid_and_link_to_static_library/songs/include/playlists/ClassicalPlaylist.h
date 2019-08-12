#pragma once

#include "Playlist.h"
#include "Classical.h"
#include "SongGenre.h"

#include <vector>

class ClassicalPlaylist 
: public Playlist
, public Classical
{
  public:
    ClassicalPlaylist();
    ~ClassicalPlaylist() = default;
    void setGenre(SongGenre_t genre) final;
    std::vector<SongDetails> getPlaylist() final;

  protected:
    void createSongs();

  private:
    std::vector<SongDetails> songsList{};
    SongGenre_t genre{SongGenre_t::NONE};
};
