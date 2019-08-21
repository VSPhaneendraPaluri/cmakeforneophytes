#include "SongDetails.h"

SongDetails::SongDetails(std::string name, std::string singer, std::string album, uint32_t releaseYear)
: name_(name)
, singer_(singer)
, album_(album)
, releaseYear_(releaseYear)
{
}

SongDetails::~SongDetails()
{
}

void SongDetails::setSinger(std::string singer)
{
  singer_ = singer;
}

void SongDetails::setAlbum(std::string album)
{
  album_ = album;
}

void SongDetails::setReleaseYear(uint32_t releaseYear)
{
  releaseYear_ = releaseYear;
}

std::string SongDetails::getName() const
{
  return name_;
}

std::string SongDetails::getSinger() const
{
  return singer_;
}

std::string SongDetails::getAlbum() const
{
  return album_;
}

uint32_t SongDetails::getReleaseYear() const
{
  return releaseYear_;
}
