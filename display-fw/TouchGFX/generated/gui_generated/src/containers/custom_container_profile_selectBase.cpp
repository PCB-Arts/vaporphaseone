/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/custom_container_profile_selectBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

custom_container_profile_selectBase::custom_container_profile_selectBase()
{
    setWidth(500);
    setHeight(50);
    box1.setPosition(0, 0, 500, 50);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 1, 35));

    textArea1.setXY(30, 13);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(189, 189, 189));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID53).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID31));

    add(box1);
    add(textArea1);
}

void custom_container_profile_selectBase::initialize()
{

}
