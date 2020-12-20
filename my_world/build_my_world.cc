#include <gazebo/gazebo.hh>

namespace gazebo
{
  class ArpeggioWorld : public WorldPlugin
  {
    public: ArpeggioWorld() : WorldPlugin()
            {
              printf("Welcome to Payman Ferdosali's world!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(ArpeggioWorld)
}
