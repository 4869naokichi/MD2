/**
 * @file md2.h
 * @brief MD2を動かす
 * @author naokichi
 * @date 2023/03/02
 */

#include <md2.h>

namespace md2 {

/**
 * @brief MD2をセットアップする
 * @param port シリアルポート名
 * @param baudrate ボーレート
 * @retval TRUE 成功
 * @retval FALSE 失敗
 */
BOOL Setup(std::string port, DWORD baudrate) {
  BOOL retval = SetupComPort(port, baudrate);
  if (retval == FALSE) {
    std::cout << "MDに接続できません。" << std::endl;
    Speak("MDに接続できません。");
    return FALSE;
  }
  return TRUE;
}

/**
 * @brief 指令値を送信する
 * @param ref 指令値
 * @retval TRUE 成功
 * @retval FALSE 失敗
 */
BOOL SetMotor(float ref) {
  BOOL retval = WriteFloat(ref);
  if (retval == FALSE) {
    std::cout << "MDに指令値を送信できません。" << std::endl;
    Speak("MDに指令値を送信できません。");
    return FALSE;
  }
  return TRUE;
}

}  // namespace md2