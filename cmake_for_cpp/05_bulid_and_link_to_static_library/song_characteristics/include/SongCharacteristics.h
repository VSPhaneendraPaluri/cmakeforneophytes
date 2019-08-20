#pragma once

#include "SongAttributes.h"

class SongCharacteristics
{
  public:
    explicit SongCharacteristics() = default;
    ~SongCharacteristics() = default;

  protected:
    virtual void setBpm (uint32_t bpm);
    virtual void setDanceability (Danceability_t danceability);
    virtual void setLoudness (Loudness_t loundess);

    virtual uint32_t getBpm() const;
    virtual Danceability_t getDanceability() const;
    virtual Loudness_t getLoudness() const;

  private:
    uint32_t bpm_ { 320 };
    uint32_t length_ { 180 }; // in seconds
    uint32_t releaseYear_ { 2019 };
    Danceability_t danceability_ { Danceability_t::LOW };
    Loudness_t loundess_ { Loudness_t::LOW };
};
