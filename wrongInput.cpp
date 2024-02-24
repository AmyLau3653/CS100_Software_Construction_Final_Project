#include "wrongInput.hpp"

InvalidInput::InvalidInput()
{

}

InvalidInput::InvalidInput(std::string strInput)
    : strInput(strInput)
{

}

InvalidInput::InvalidInput(int intInput)
    : intInput(intInput)
{

}

bool InvalidInput::TitleInput()
{
    return true;
}

bool InvalidInput::IntroInvalid()
{
    return true;
}

bool InvalidInput::PlayInvalid()
{
    return true;
}

bool InvalidInput::AnalyzeInvalid()
{
    return true;
}