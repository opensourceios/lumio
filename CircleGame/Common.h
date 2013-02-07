//
//  Common.h
//  CircleGame
//
//  Created by Joanne Dyer on 2/5/13.
//
//

#ifndef CircleGame_Common_h
#define CircleGame_Common_h

typedef enum {
    Active,
    Cooldown,
    AlmostOccupied,
    Occupied,
    Charging
} LightState;

typedef enum {
    Low,
    Medium,
    High,
    Charge,
    NoValue
} LightValue;

typedef enum {
    Up,
    Down,
    Left,
    Right,
    None
} RouteDirection;

typedef enum {
    Horizontal,
    Vertical
} ConnectorOrientation;

typedef enum {
    Routed,
    Enabled,
    Disabled
} ConnectorState;

#endif
