//
//  UIDoF.h
//
//  Created by Patricio Gonzalez Vivo on 7/7/14.
//
//

#pragma once

#include "UIShader.h"

#include "PingPong.h"

class UIDoF : public UIShader {
public:
    
    UIDoF();
    
    void    setupUI();
    
    string  getClassName(){return "DoF";}
    
    void    begin();
    
    bool    bDebug;
    
protected:
    
    float radius;
	float focalRange;
	float focalDistance;
};