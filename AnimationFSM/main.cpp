#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\raymanGrid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Load a reversedSprite
	sf::Texture reverseTexture;
	if (!reverseTexture.loadFromFile("assets\\raymanGridReverse.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}
	
	
	//seting up animated sprites
	std::vector<AnimatedSprite> animatedSprites;
	for (int i = 0; i < 5; i++)
	{
		AnimatedSprite a(texture);
		animatedSprites.push_back(a);
	}
	AnimatedSprite ar(reverseTexture);
	animatedSprites.push_back(ar);

	
	//Falling animatedSprite
	animatedSprites.at(0).addFrame(sf::IntRect(210, 522, 50, 55));

	//idle animatedSprite
	animatedSprites.at(1).addFrame(sf::IntRect(65, 175, 55, 55));

	//jumping animatedSprite
	animatedSprites.at(2).addFrame(sf::IntRect(65, 580, 50, 55));

	//landing animatedSprite
	animatedSprites.at(3).addFrame(sf::IntRect(162, 522, 50, 55));
	
	//WalkingLeft animatedSprite
	animatedSprites.at(4).addFrame(sf::IntRect(65, 290, 55, 55));

	//WalkingRigth animatedSprite
	animatedSprites.at(5).addFrame(sf::IntRect(505, 290, 55, 55));

	// Setup the Player
	Player player(animatedSprites);
	
	// Start the game loop
	while (window.isOpen())
	{

		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)

			{

			case sf::Event::Closed:

				// Close window : exit

				window.close();

				break;

			case sf::Event::KeyPressed:
				// Handle input event to Player
				player.handleInput(event);
				break;
			}
		}


		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};