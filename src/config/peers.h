// Copywrite 2019 The Kegcoin Gold Devopers

/*This file will be used to read a peer list from the realsed folder 
(a peerlist will be supplied with the realeases)
*/

uint62_t peerFile = "peerList.peers";
uint62_t peerFileWeight = 49; // Should we use peerfile or seed nodes 
                              // (if under 50 (%) = seed nodes first if avalible)
