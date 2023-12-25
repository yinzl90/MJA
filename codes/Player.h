#include "Stone.h"

class Player {
    vector<Stone> shouPai;
    vector<Stone> qiPai;
    vector<Stone> chiPengGang;
    Player shangJia;
    Player xiaJia;
    Player duiJia;
    bool tingPai = false;

public:
    void Player();
    void setShangJia(Player p);
    void setDuiJia(Player p);
    void setXiaJia(Player p);
    void ZhuaPai(Stone s);
    void DaPai(Stone s);
    void HuPai(Player p, Stone s);
    void ChiPai(Player p, Stone s);
    void PengPai(Player p, Stone s);
    void GangPai(Player p, Stone s);
    vector<Stone> getQiPai();
    vector<Stone> getChiPengGang();
};