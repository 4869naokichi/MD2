/**
 * @file md2.h
 * @brief MD2を動かす
 * @author naokichi
 * @date 2023/03/02
 */

#pragma once

#include <iostream>

#include "serialport.h"
#include "speak.h"

namespace md2 {

/**
 * @brief MD2をセットアップする
 * @param port シリアルポート名
 * @param baudrate ボーレート
 * @retval TRUE 成功
 * @retval FALSE 失敗
 */
BOOL Setup(std::string port, DWORD baudrate);

/**
 * @brief 指令値を送信する
 * @param ref 指令値
 * @retval TRUE 成功
 * @retval FALSE 失敗
 */
BOOL SetMotor(float ref);

}  // namespace md2