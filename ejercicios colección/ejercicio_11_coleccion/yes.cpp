#include "yes.h"

class yesData : public QSharedData
{
public:

};

yes::yes() : data(new yesData)
{

}

yes::yes(const yes &rhs) : data(rhs.data)
{

}

yes &yes::operator=(const yes &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

yes::~yes()
{

}
