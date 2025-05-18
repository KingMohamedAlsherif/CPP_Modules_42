#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm {
public:
    AForm(const std::string& name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);

    virtual void execute(Bureaucrat const& executor) const;

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    class NotSignedException : public std::exception {
    public:
        const char* what() const throw();
    };

protected:
    virtual void executeAction() const = 0;

private:
    const std::string name_;
    bool isSigned_;
    const int gradeToSign_;
    const int gradeToExecute_;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif