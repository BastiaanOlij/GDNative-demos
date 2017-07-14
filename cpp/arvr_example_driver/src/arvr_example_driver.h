#ifndef ARVR_EXAMPLE_DRIVER_H
#define ARVR_EXAMPLE_DRIVER_H

#include <Godot.hpp>

#include <InputEvent.hpp>
#include <ARVRScriptInterface.hpp>

namespace godot {

class ARVRExampleDriver : public GodotScript<ARVRScriptInterface> {
	GODOT_CLASS(ARVRExampleDriver)

public:
	ARVRExampleDriver();
	~ARVRExampleDriver();

};

}

#endif /* ARVR_EXAMPLE_DRIVER_H */
