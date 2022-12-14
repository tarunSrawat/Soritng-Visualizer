#include "Text.h"

Text t;
void Text::setString(std::string str) {
	text.setString(str);
}
void Text::setPosition_(sf::Vector2f newPos) {
	text.setPosition(newPos);
}
void Text::drawTo(sf::RenderWindow& window) {
	window.draw(text);
}
sf::Vector2f Text::getPosition() {
	return text.getPosition();
}
float Text::size() {
	return text.getString().getSize();
}
void Text::setPosition(Text txt, float var, float size) {
	text.setPosition({ txt.getPosition().x + var * size ,670});
}
std::string Text::getString() {
	return text.getString();
}
sf::Font Text::getFont() {
	return *text.getFont();
}
void Text::setFont(sf::Font ft) {
	text.setFont(ft);
}