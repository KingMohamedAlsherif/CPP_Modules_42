#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target_(other.target_) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    AForm::operator=(other);
    if (this != &other) {
        target_ = other.target_;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream ofs((target_ + "_shrubbery").c_str());
    if (!ofs.is_open()) {
        std::cerr << "Failed to open file " << target_ + "_shrubbery" << std::endl;
        return;
    }

    ofs << "              &&& &&  & &&" << std::endl;
    ofs << "          && &\\/&\\|& ()|/ @, &&" << std::endl;
    ofs << "          &\\/(/&/&||/& /_/)_&/_&" << std::endl;
    ofs << "       &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
    ofs << "      &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
    ofs << "    &&   && & &| &| /& & % ()& /&&" << std::endl;
    ofs << "     ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
    ofs << "         &&     \\|||" << std::endl;
    ofs << "                 |||" << std::endl;
    ofs << "                 |||" << std::endl;
    ofs << "                 |||" << std::endl;
    ofs << "           , -=-~  .-^- _" << std::endl;
    ofs << "-----------------------------------" << std::endl;
    ofs << " \"Breathe deep. The forest speaks in silence.\"" << std::endl;

    ofs.close();
}
