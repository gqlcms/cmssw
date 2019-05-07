#ifndef CSCWireDigi_CSCWireDigiCollection_h
#define CSCWireDigi_CSCWireDigiCollection_h

/** \class CSCWireDigiCollection
 *
 *  Based on DTDigiCollection.h
 *  \author N. Terentiev - CMU
 *
 */

#include "DataFormats/CSCDigi/interface/CSCWireDigi.h"
#include "DataFormats/MuonData/interface/MuonDigiCollection.h"
#include "DataFormats/MuonDetId/interface/CSCDetId.h"

typedef MuonDigiCollection<CSCDetId, CSCWireDigi> CSCWireDigiCollection;

#endif
