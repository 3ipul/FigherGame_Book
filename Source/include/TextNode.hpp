#ifndef TEXTNODE_HPP
#define TEXTNODE_HPP

#include "include/ResourceHolder.hpp"
#include "include/ResourceIdentifiers.hpp"
#include "include/SceneNode.hpp"

#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>


class TextNode : public SceneNode
{
	public:
		explicit			TextNode(const FontHolder& fonts, const std::string& text);

		void				setString(const std::string& text);


	private:
		virtual void		drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;


	private:
		sf::Text			mText;
};

#endif // TEXTNODE_HPP
