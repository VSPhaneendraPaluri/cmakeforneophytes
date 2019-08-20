#include "SongCharacteristics.h"

void SongCharacteristics::setBpm (uint32_t bpm)
{
  bpm_ = bpm;
}

void SongCharacteristics::setDanceability (Danceability_t danceability)
{
  danceability_ = danceability;
}

void SongCharacteristics::setLoudness (Loudness_t loundess)
{
  loundess_ = loundess;
}

uint32_t SongCharacteristics::getBpm() const
{
  return bpm_;
}

Danceability_t SongCharacteristics::getDanceability() const
{
  return danceability_;
}

Loudness_t SongCharacteristics::getLoudness() const
{
  return loundess_;
}
