/** \class CSCDMBStatusDigi
 *
 *  Digi for CSC DMB info available in DDU
 *
 *
 */
#include "DataFormats/CSCDigi/interface/CSCDMBStatusDigi.h"
#include <cstdint>
#include <cstring>
#include <ostream>

CSCDMBStatusDigi::CSCDMBStatusDigi(const uint16_t *header,
                                   const uint16_t *trailer) {
  uint16_t headerSizeInBytes = 16;
  uint16_t trailerSizeInBytes = 16;
  memcpy(header_, header, headerSizeInBytes);
  memcpy(trailer_, trailer, trailerSizeInBytes);
}

std::ostream &operator<<(std::ostream &o, const CSCDMBStatusDigi &digi) {
  o << " ";
  o << "\n";

  return o;
}
