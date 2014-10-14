#pragma once

#include <list>
#include "Listener.h"

#ifndef EVENT_H
#define EVENT_H

//!	Abstract Event class
/*!
	Abstract Event class to be used as "Observable" from the Observer pattern.
	Intentionally called Event to avoid any confusion because of the name, just like with
	the Listener class.
*/
class Listener;
class Event
{
private:
	//! List of Listeners
	/*!
	List of instances of Listeners to notify when the Event gets updated. Using std::list
	from STL.
	*/
	std::list<Listener*> _listeners;
public:
	//! Event Constructor
	/*!
		Constructor that does nothing at the moment
	*/
	Event(){}

	//! Event Destructor
	/*!
		Once he was good, but now it wants to destroy everything that he knows
	*/
	virtual ~Event(){}

	//! Attach a Listener
	/*!
		Method to attach a Listener to the Event
		\param _listener an instance of Listener
		\sa Listener::Listener()
	*/
	void attach(Listener *_listener)
	{
		_listeners.push_back(_listener);
	}

	//! Detach a Listener
	/*!
		Method to detach a Listener from the Event (if attached)
		\param _listener an instance of Listener
	*/
	void detach(Listener *_listener)
	{
		std::list<Listener*>::iterator it;
		it = std::find(_listeners.begin(), _listeners.end(), _listener);
		if (it != _listeners.end() )
			_listeners.remove(_listener);
	}

	//! Notify all listeners
	/*!
		Method to notify all listeners that there was an update. Sends the current Event object,
		e.q. this, as an argument. Might not be the best method, but we'll see if it works for us.
	*/
	void notify(){
		
		std::list<Listener*>::iterator it;
		for (it = _listeners.begin(); it != _listeners.end(); ++it)
		{
			(*it)->update(this);
		}
	}
};

#endif