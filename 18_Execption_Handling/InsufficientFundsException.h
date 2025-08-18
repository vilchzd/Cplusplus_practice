#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

class InsufficientFundsException: public std::exception
{
public:
    InsufficientFundsException() noexcept {}
    ~InsufficientFundsException() {}
    virtual const char *what() const noexcept {
        return "Insufficient Funds Exception";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
