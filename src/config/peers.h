// Copyright 2019 The Kegcoin Gold Devopers
// Copyright 2019 The Richonite Devopers

/*This file will be used to read a peer list from the realsed folder 
(a peerlist will be supplied with the realeases)
*/

const string peerFile = "peerList.peers";
uint32_t peerFileWeight = 49; // Should we use peerfile or seed nodes 
                              // (if under 50 (%) = seed nodes first if avalible)

