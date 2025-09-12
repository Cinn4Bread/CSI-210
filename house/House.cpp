#include <sstream>
#include "House.h"

using namespace std;

House::House()
{
	private:
	Room rooms[MAX_TOTAL_ROOMS];
	
	int numBedrooms;
	int numBathrooms;
	int numKitchens;
	int numLivingRooms;

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
		getNumBedrooms();
		break;

		case BATHROOM:
		return getNumBathrooms();
		break;

		case KITCHEN:
		return getNumKitchens(); //codes
		break;

		case LIVINGROOM:
		return getNumLivingrooms();
		break;
	
		default:
		cout << "No such room type."
		return 0;
		break;
	}
}

int House::getNumBedrooms()
{
	//stub
	return 0;
}

int House::getNumBathrooms()
{
	//stub
	return 0;
}

int House::getNumKitchens()
{
	//stub
	return 0;
}

int House::getNumLivingrooms()
{
	//stub
	return 0;
}

int House::getTotalSquareFootage()
{
	//stub
	return 0;
}

int House::getTotalVolume()
{
	//stub
	return 0;
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