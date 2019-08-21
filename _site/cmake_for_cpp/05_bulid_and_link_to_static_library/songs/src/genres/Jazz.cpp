#include "Jazz.h"

Jazz::Jazz()
{
}

Jazz::~Jazz()
{
}

void Jazz::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void Jazz::createSongsList()
{
}

void Jazz::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void Jazz::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void Jazz::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t Jazz::getBpm() const
{
  return bpm;
}

Danceability_t Jazz::getDanceability() const
{
  return danceability;
}

Loudness_t Jazz::getLoudness() const
{
  return loudness;
}
