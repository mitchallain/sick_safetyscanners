#pragma once

#include <sick_microscan3_ros_driver/data_processing/AbstractParseUDPSequence.h>
#include <sick_microscan3_ros_driver/datastructure/DerivedValues.h>


namespace sick {
namespace data_processing {

class ParseDerivedValues : public AbstractParseUDPSequence
{
public:
  static datastructure::DerivedValues parseUDPSequence(sick::datastructure::PacketBuffer buffer, datastructure::Data &data);

private:
  ParseDerivedValues();
};

}
}


