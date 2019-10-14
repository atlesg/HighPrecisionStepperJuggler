/*
  Constants
  Author: T-Kuhn.
  Sapporo, October, 2018. Released into the public domain.
  */

#ifndef Constants_h
#define Constants_h
#include "Arduino.h"

#define STEPPER1_STEP_PIN 2
#define STEPPER1_DIR_PIN 1
#define STEPPER2_STEP_PIN 16
#define STEPPER2_DIR_PIN 17
#define STEPPER3_STEP_PIN 5
#define STEPPER3_DIR_PIN 18
#define STEPPER4_STEP_PIN 19
#define STEPPER4_DIR_PIN 21

#define BUTTON_PIN 12
#define NAN_ALERT_LED 25
#define BUTTON_COOLDOWN_CYCLES 500000

#define EXECUTING_ISR_CODE 0
#define ROTARY_ENC_1_A 32
#define ROTARY_ENC_1_B 33

// gear: 26.85:1

// without gear:
// 200 steps / rev (full step mode)

// with gear:
// 5370 steps / rev (full step mode)
// 10740 steps / rev (1/2 step mode)
// 21480 steps / rev (1/4 step mode)
// 42960 steps / rev (1/8 step mode)
// 85920 steps / rev (1/16 step mode)

// we want to figure out what setting will allow us to do 1 full rev the fastest.

#define PULSES_PER_REVOLUTION
#define PULSES_TO_MOVE 85920
#define MOVE_DURATION 0.55f
#define PAUSE_DURATION 1.0f

#define FREQUENCY_MULTIPLIER 0.000002f
#define TIMER_US 2

// NOTE: SineStepper and MoveBatch ids must be lower then MAX_NUM_OF_STEPPERS
#define MAX_NUM_OF_STEPPERS 10
#define MAX_NUM_OF_BATCHED_MOVES 100

#endif