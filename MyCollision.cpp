#include "MyCollision.h"

/// <summary>
/// 球の当たり判定をとる関数
/// </summary>
/// <param name="s1">球1</param>
/// <param name="s2">球2</param>
/// <returns>衝突しているか</returns>
bool MyCollision::IsCollisionSphere(const Sphere& s1, const Sphere& s2) {

	// 計算用
	float distance{};

	// 2つの球の中心座標の距離をとる
	distance = MyMath::Length(s1.center - s2.center);

	// 衝突しているか
	if (distance <= s1.radius + s2.radius) {
		// 衝突していたらTrueを返す
		return true;
	}
	
	// していない場合はFalse
	return false;

}

/// <summary>
/// 球と平面の当たり判定をとる関数
/// </summary>
/// <param name="s">球</param>
/// <param name="p">平面</param>
/// <returns>衝突しているか</returns>
bool MyCollision::IsCollisionPlane(const Sphere& s, const Plane& p) {

	// 計算用
	float k{};

	// 計算処理
	k = MyMath::Dot(p.normal, s.center) - p.distance;
	// kを絶対値に変換
	k = std::abs(k);

	// 衝突しているか
	if (k <= s.radius) {
		// していたらTrue
		return true;
	}

	// していなければfalse
	return false;

}
