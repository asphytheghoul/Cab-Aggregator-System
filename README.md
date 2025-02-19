# Cab Booking Simulator

The Cab Booking Simulator is a command-line application written in C++. It simulates a cab booking service where users can book cabs to travel from their current location to a specified destination.

## Functionality

- Users can sign up and provide their name and initial account balance.
- Users can enter their current coordinates and choose a destination from the available options.
- The system finds the nearest available cab and displays its details, including driver name, car model, car number, and distance from the user.
- Users can confirm the booking and proceed with the ride.
- The fare is calculated based on the distance between the start and destination coordinates.
- If the cab accepts the ride, the user's account balance is updated, and the ride begins.
- The system simulates live cab positions and updates them every few seconds.
- After the ride is completed, the fare is displayed, and the updated account balance is shown.
- User data, including the name, initial balance, and balance after the ride, is stored in a CSV file.

## Data Structures

- `Cab`: Represents a cab with attributes like driver name, car model, car number, coordinates, and availability.
- `User`: Represents a user with attributes like name and account balance.
- `Coordinates`: A structure to store x and y coordinates for locations.
- `map<string, Coordinates>`: A map to store destination names as keys and their corresponding coordinates as values.

## Usage

1. Clone the repository: `git clone <repository-url>`
2. Compile the code: `g++ -o cab_booking_simulator main.cpp`
3. Run the application: `./cab_booking_simulator`

## more changes
Incorporate a map-based GUI to display cab positions and user locations in real-time.

