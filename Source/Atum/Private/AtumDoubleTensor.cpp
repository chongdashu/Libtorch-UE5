﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "AtumDoubleTensor.h"


EAtumScalarType UAtumDoubleTensor::GetScalarType_Implementation() const noexcept
{
	return EAtumScalarType::Double;
}
