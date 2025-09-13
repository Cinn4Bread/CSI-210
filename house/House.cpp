#include <sstream>
#include "House.h"

using namespace std;

House::House()
{
	private:
	Room rooms[MAX_TOTAL_ROOMS];
	int numBedrooms = 0;
	int numBathrooms = 0;
	int numLivingRooms = 0;
	int roomIndex = 0;
}

//return false if room has too low a height, too small an area or the house already is at max for that type of room
bool House::addRoom( const Room& theRoom )
{
	if(roomIndex = MAX_TOTAL_ROOMS)
	{
		return false;
	}
	else if(theRoom.getHeight < MIN_HEIGHT || theRoom.getSquareFootage() < MIN_AREA)
	{
		return false;
	}
	return true;
}

int House::getCurrentRoomCount(Room theRoom)
{
	RoomType type = theRoom.getType();

	switch (type)
	{
		case BEDROOM:
			return getNumBedrooms();
		case BATHROOM:
			return getNumBathrooms();
		case KITCHEN:
			return getNumKitchens();
		case LIVINGROOM:
			return getNumLivingrooms();
		default:
			cout << "No such room type." << endl;
			return 0;
	}
}

int House::getNumBedrooms()
{
	int value = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		if(rooms[i].getType() == BEDROOM)
		{
			value++;
		}
	}
	return value;
}

int House::getNumBathrooms()
{
	int value = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		if(rooms[i].getType() == BATHROOM)
		{
			value++;
		}
	}
	return value;
}

int House::getNumKitchens()
{
	int value = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		if(rooms[i].getType() == KITCHEN)
		{
			value++;
		}
	}
	return value;
}

int House::getNumLivingrooms()
{
	int value = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		if(rooms[i].getType() == LIVINGROOM)
		{
			value++;
		}
	}
	return value;
}

int House::getTotalSquareFootage()
{
	int totalSQ = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		totalSQ += rooms[i].getSquareFootage();
	}

	return totalSQ;
}

int House::getTotalVolume()
{
	int totalVolume = 0;

	for(int i = 0; i < roomIndex; i++)
	{
		totalVolume += rooms[i].getVolume();
	}

	return totalVolume;
}

bool House::isValid()
{
	//stub
	return false;
}

string House::enumerateRooms()
{
	//stub
	string report = "These are the rooms in the house:\n";

	return report;
}

string House::getDescription()
{
	stringstream theStream;

	theStream	
		<< "House has:\n"
		<< getNumBedrooms() << " Bedrooms\n"
		<< getNumBathrooms() << " Bathrooms\n"
		<< getNumKitchens() << " Kitchens\n"
		<< getNumLivingrooms() << " Livingrooms\n\n"
		<< getTotalSquareFootage() << " Square feet total\n"
		<< getTotalVolume() << " Cubic feet total volume\n";

	if( isValid() )
	{
		theStream << "House is Valid!\n\n";
	}
	else
	{
		theStream << "House is not Valid!\n\n";
	}

	return theStream.str();
}