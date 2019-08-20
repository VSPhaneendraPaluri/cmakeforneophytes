#include "Classical.h"

Classical::Classical()
{
}

Classical::~Classical()
{
}

void Classical::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void Classical::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void Classical::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void Classical::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t Classical::getBpm() const
{
  return bpm;
}

Danceability_t Classical::getDanceability() const
{
  return danceability;
}

Loudness_t Classical::getLoudness() const
{
  return loudness;
}
