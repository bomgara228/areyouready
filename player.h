#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	int hp = 125;
	float damage = 1;
public:
	Player();
	void update();
	void draw(sf::RenderWindow& window);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	void decreaseHp(size_t);
	void increaseHp(size_t);
	int getHp();
	int dmg();
	void increaseDamage(float);
};