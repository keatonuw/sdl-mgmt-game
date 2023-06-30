/**
 * Event handler headers
*/
#include <SDL.h>

typedef struct event_manager event_manager;
typedef void (*event_callback)();

/**
 * Allocates a new event manager on the stack. Caller owns the event_manager.
*/
event_manager* alloc_event_manager();

/**
 * Frees an event_manager.
*/
void free_event_manager(event_manager* mgmt);

/**
 * Registers a callback such that, when event occurs, callback is invoked.
*/
void register_event_handler(event_manager* mgmt, SDL_EventType event, event_callback callback);

/**
 * Like register_event_handler, but for key down events.
*/
void register_key_down_handler(event_manager* mgmt, SDL_KeyCode key, event_callback callback);

/**
 * Like register_event_handler, but for key up events.
*/
void register_key_up_handler(event_manager* mgmt, SDL_KeyCode key, event_callback callback);

/**
 * Execute all callbacks registered for given event.
*/
void handle_event(event_manager* mgmt, SDL_Event event);