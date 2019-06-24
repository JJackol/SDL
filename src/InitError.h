#ifndef INITERROR_H
#define INITERROR_H
#include <exception>
#include <string>

class InitError : public std::exception
{
    std::string msg;
public:
    InitError();
    InitError( const std::string & );
    virtual ~InitError() throw();
    virtual const char * what() const throw();
};

#endif // INITERROR_H
