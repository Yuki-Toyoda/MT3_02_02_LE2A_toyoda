#pragma once
#include "MyConst.h"
#include "MyStruct.h"
#include "MyMath.h"

/// <summary>
/// 当たり判定を行う関数を保持するクラス
/// </summary>
class MyCollision
{
public:

	/// <summary>
	/// 球同士の当たり判定をとる関数
	/// </summary>
	/// <param name="s1">球1</param>
	/// <param name="s2">球2</param>
	/// <returns>衝突しているか</returns>
	static bool IsCollisionSphere(const Sphere& s1, const Sphere& s2);

	/// <summary>
	/// 球と平面の当たり判定をとる関数
	/// </summary>
	/// <param name="s">球</param>
	/// <param name="p">平面</param>
	/// <returns>衝突しているか</returns>
	static bool IsCollisionPlane(const Sphere& s, const Plane& p);

};

