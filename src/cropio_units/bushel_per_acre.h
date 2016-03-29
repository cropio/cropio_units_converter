#include <map>
#include <string>

namespace cropio_units {
    typedef std::map<std::string,float> StringFloatMap;

    class BushelPerAcre {
    public:
      BushelPerAcre(char *standard_crop_name);
      ~BushelPerAcre();
      float coefficient();

    private:
      char *standard_name;
      StringFloatMap bushels_table;

      float select_crop_eq();
      void define_bushels_table();
    };
};

