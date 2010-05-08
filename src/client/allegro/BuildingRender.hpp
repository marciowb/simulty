#ifndef _BUILDINGRENDER_HPP_
#define _BUILDINGRENDER_HPP_

#include "AllegroGUIShared.hpp"

#include "../../Building.hpp"
#include "../../BuildingZone.hpp"
#include "../../BuildingManager.hpp"

#include "../../Point.hpp"
#include "Camera.hpp"

#include "MapRender.hpp"

class BuildingRender {

    private:

    BITMAP *buildingPolice;
    BITMAP *buildingFire;
    BITMAP *buildingHospital;
    BITMAP *buildingResidential;


    public:

    BuildingRender();
    ~BuildingRender();

    void renderBuilding(BITMAP *r, Building *b, Point where);
    void render(BITMAP *r, MapRender *m, Camera cam, BuildingManager *bm);


};


#endif