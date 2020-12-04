
#ifndef _MAMAP_PROPERTY_SWITCH_HPP
#define _MAMAP_PROPERTY_SWITCH_HPP

#include "propertyobject.hpp"

namespace mamap {

class PropertySwitch : public PropertyObject {
 private:
  void propOptionValueSettingValid_();
  void switchValid(int val) const;
  void switchValid(std::string val) const;

 public:
  PropertySwitch(void);
  
  virtual PropertyType getPropertyType(void) const noexcept final {
    return PropertyType::SWITCH; 
  }

  virtual bool propValid(const std::any & value) final;
  bool propValid() const {return true;}
};

}  // namespace mamap
#endif  // _MAMAP_PROPERTY_SWITCH_HPP