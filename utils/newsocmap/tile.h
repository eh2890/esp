#ifndef TILE_H
#define TILE_H

#include <string>
#include <stdio.h>

#include <QFrame>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QPalette>
#include <QColor>
#include <QComboBox>
#include <QSpinBox>
#include <QCheckBox>

#include "socmap_utils.h"

using namespace socmap;

class Tile : public QFrame
{

    Q_OBJECT

public:
   Tile(QWidget *parent,
        QGridLayout *parent_layout,
        unsigned y,
        unsigned x,
        std::string cpu_arch);

   ~Tile();

   void set_id(unsigned id);
   std::string get_type();
   std::string get_ip();
   std::string get_domain();
   std::string get_PLL();
   std::string get_buf();
   std::string get_impl();

private slots:
    void on_type_sel_currentIndexChanged(const QString &arg1);
    void on_ip_sel_currentIndexChanged(const QString &arg1);
    void on_impl_sel_currentIndexChanged(const QString &arg1);
    void on_domain_sel_valueChanged(int arg1);
    void on_has_pll_sel_toggled(bool arg1);
    void on_extra_buf_sel_toggled(bool arg1);
    void on_has_cache_sel_toggled(bool arg1);
    void on_has_ddr_sel_toggled(bool arg1);

private:
    QGridLayout *layout;
    QLabel *id_l;
    QComboBox *type_sel;
    QLabel *ip_sel_l;
    QComboBox *ip_sel;
    QLabel *impl_sel_l;
    QComboBox *impl_sel;
    QLabel *domain_sel_l;
    QSpinBox *domain_sel;
    QCheckBox *has_pll_sel;
    QCheckBox *extra_buf_sel;
    QCheckBox *has_cache_sel;
    QCheckBox *has_ddr_sel;
    QLabel *acc_caches;
    QCheckBox *has_caches;

    std::vector<std::string> ip_list;
    std::vector<std::string> impl_list;

    void tile_reset();
    void impl_reset();
    void domain_reset();
    void clocking_reset();
    void domain_setEnabled(bool en);
    void clocking_setEnabled(bool en);

public:
    unsigned id;
    unsigned nocx;
    unsigned nocy;
    std::string cpu_arch;
    tile_t type;
    std::string ip;
    std::string impl;
    unsigned domain;
    bool has_pll;
    bool extra_buf;
    bool has_cache;
    bool has_ddr;

};

#endif // TILE_H
