#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

// Player cannot perform the specified build action
class IllegalBuildException{};

// Player does not own the object
class PlayerDoesNotOwnException{};

// Player does not have enough resources to perform the action
class NotEnoughResourceException{};

#endif
