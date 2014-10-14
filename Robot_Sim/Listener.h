#pragma once

#ifndef LISTENER_H
#define LISTENER_H

//! Abstract Listener Class
/*!
 Abstract Listener class to be used as "Observer" from the Observer pattern.
 Intentionally called Listener to avoid any confusion because of the name and to give it
 more of a "software feel", if there's such a thing as "software feel"
 */
class Event;
class Listener
{
public:
	//! Listener Constructor
	/*!
		Constructor that does nothing at the moment
	*/
	Listener(){}
	
	//! Listener Destructor
	/*!
		Destructor that could do something, intentionally made virtual
	*/
	virtual ~Listener(){}

	//! update method
	/*!
		Pure virtual method that gets called whenever an Event fires it's "notify" method.
		Needs to be implemented by the subclass.
		\param _event an instance of a derived Event
		\sa Event::notify()
	*/
	virtual void update(Event* _event) = 0;
};

#endif