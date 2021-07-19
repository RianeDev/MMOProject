# Life
 Dedicated Server Project
 
 The purpose of this project is not to create an MMO, but an easy to use system for an MMO to be implemented. Most of the coding is done via blueprints with some minor backend codding in C++ files. The purpose is for anyone with very basic understanding to be able to build a functioning MMO with a dedicated, save server, without a headache.

TO DO:
- Setup encrypted password check.

IN PROGRESS: 
- Login system, registration, and character creation. Just need to figure out how to send the data files between maps during load. Currently, the player data is wiped from the player character the moment they load into the new map. It appears that a new, basic character bp is being spawned (based on world settings for the new map) and player is given a new player controller assigned to that mesh. The biggest problem is figuring out how to tell who the player was when logging in, since no data (not even the player controller ID) is being saved between transitions.

FINISHED:
