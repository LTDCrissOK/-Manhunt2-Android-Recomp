#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DB38
// Address: 0x23db38 - 0x23df40
void sub_0023DB38_0x23db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB38_0x23db38");
#endif

    switch (ctx->pc) {
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        case 0x23db48u: goto label_23db48;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db54u: goto label_23db54;
        case 0x23db58u: goto label_23db58;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23db64u: goto label_23db64;
        case 0x23db68u: goto label_23db68;
        case 0x23db6cu: goto label_23db6c;
        case 0x23db70u: goto label_23db70;
        case 0x23db74u: goto label_23db74;
        case 0x23db78u: goto label_23db78;
        case 0x23db7cu: goto label_23db7c;
        case 0x23db80u: goto label_23db80;
        case 0x23db84u: goto label_23db84;
        case 0x23db88u: goto label_23db88;
        case 0x23db8cu: goto label_23db8c;
        case 0x23db90u: goto label_23db90;
        case 0x23db94u: goto label_23db94;
        case 0x23db98u: goto label_23db98;
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dba8u: goto label_23dba8;
        case 0x23dbacu: goto label_23dbac;
        case 0x23dbb0u: goto label_23dbb0;
        case 0x23dbb4u: goto label_23dbb4;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dbc0u: goto label_23dbc0;
        case 0x23dbc4u: goto label_23dbc4;
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dbccu: goto label_23dbcc;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd4u: goto label_23dbd4;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dbdcu: goto label_23dbdc;
        case 0x23dbe0u: goto label_23dbe0;
        case 0x23dbe4u: goto label_23dbe4;
        case 0x23dbe8u: goto label_23dbe8;
        case 0x23dbecu: goto label_23dbec;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dbf4u: goto label_23dbf4;
        case 0x23dbf8u: goto label_23dbf8;
        case 0x23dbfcu: goto label_23dbfc;
        case 0x23dc00u: goto label_23dc00;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc08u: goto label_23dc08;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc10u: goto label_23dc10;
        case 0x23dc14u: goto label_23dc14;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc20u: goto label_23dc20;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc28u: goto label_23dc28;
        case 0x23dc2cu: goto label_23dc2c;
        case 0x23dc30u: goto label_23dc30;
        case 0x23dc34u: goto label_23dc34;
        case 0x23dc38u: goto label_23dc38;
        case 0x23dc3cu: goto label_23dc3c;
        case 0x23dc40u: goto label_23dc40;
        case 0x23dc44u: goto label_23dc44;
        case 0x23dc48u: goto label_23dc48;
        case 0x23dc4cu: goto label_23dc4c;
        case 0x23dc50u: goto label_23dc50;
        case 0x23dc54u: goto label_23dc54;
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        default: break;
    }

    ctx->pc = 0x23db38u;

label_23db38:
    // 0x23db38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23db3c:
    // 0x23db3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23db40:
    // 0x23db40: 0x8c46bd70  lw          $a2, -0x4290($v0)
    ctx->pc = 0x23db40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950256)));
label_23db44:
    // 0x23db44: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23db44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_23db48:
    // 0x23db48: 0x9062b44c  lbu         $v0, -0x4BB4($v1)
    ctx->pc = 0x23db48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947916)));
label_23db4c:
    // 0x23db4c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x23db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_23db50:
    // 0x23db50: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x23db50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_23db54:
    // 0x23db54: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x23db54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_23db58:
    // 0x23db58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23db58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23db5c:
    // 0x23db5c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x23db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_23db60:
    // 0x23db60: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x23db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_23db64:
    // 0x23db64: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x23db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_23db68:
    // 0x23db68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23db68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23db6c:
    // 0x23db6c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x23db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_23db70:
    // 0x23db70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23db70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23db74:
    // 0x23db74: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x23db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_23db78:
    // 0x23db78: 0x245e46a0  addiu       $fp, $v0, 0x46A0
    ctx->pc = 0x23db78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
label_23db7c:
    // 0x23db7c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x23db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_23db80:
    // 0x23db80: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x23db80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_23db84:
    // 0x23db84: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x23db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_23db88:
    // 0x23db88: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x23db88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_23db8c:
    // 0x23db8c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x23db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_23db90:
    // 0x23db90: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_23db94:
    if (ctx->pc == 0x23DB94u) {
        ctx->pc = 0x23DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB90u;
        // 0x23db94: 0xa060b44c  sb          $zero, -0x4BB4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947916), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB98u;
        goto label_23db98;
    }
    ctx->pc = 0x23DB90u;
    {
        const bool branch_taken_0x23db90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB90u;
        // 0x23db94: 0xa060b44c  sb          $zero, -0x4BB4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947916), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db90) {
            ctx->pc = 0x23DBA8u;
            goto label_23dba8;
        }
    }
    ctx->pc = 0x23DB98u;
label_23db98:
    // 0x23db98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23db9c:
    // 0x23db9c: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x23db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_23dba0:
    // 0x23dba0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_23dba4:
    if (ctx->pc == 0x23DBA4u) {
        ctx->pc = 0x23DBA8u;
        goto label_23dba8;
    }
    ctx->pc = 0x23DBA0u;
    {
        const bool branch_taken_0x23dba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dba0) {
            ctx->pc = 0x23DBC4u;
            goto label_23dbc4;
        }
    }
    ctx->pc = 0x23DBA8u;
label_23dba8:
    // 0x23dba8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_23dbac:
    // 0x23dbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23dbb0:
    // 0x23dbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dbb4:
    // 0x23dbb4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x23dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_23dbb8:
    // 0x23dbb8: 0x40f809  jalr        $v0
label_23dbbc:
    if (ctx->pc == 0x23DBBCu) {
        ctx->pc = 0x23DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB8u;
        // 0x23dbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBC0u;
        goto label_23dbc0;
    }
    ctx->pc = 0x23DBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DBC0u);
        ctx->pc = 0x23DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB8u;
        // 0x23dbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBB8u, 0x23DBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DBC0u;
label_23dbc0:
    // 0x23dbc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23dbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dbc4:
    // 0x23dbc4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_23dbc8:
    if (ctx->pc == 0x23DBC8u) {
        ctx->pc = 0x23DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBC4u;
        // 0x23dbc8: 0x262202f0  addiu       $v0, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBCCu;
        goto label_23dbcc;
    }
    ctx->pc = 0x23DBC4u;
    {
        const bool branch_taken_0x23dbc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBC4u;
        // 0x23dbc8: 0x262202f0  addiu       $v0, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbc4) {
            ctx->pc = 0x23DBDCu;
            goto label_23dbdc;
        }
    }
    ctx->pc = 0x23DBCCu;
label_23dbcc:
    // 0x23dbcc: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23dbd0:
    // 0x23dbd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dbd4:
    // 0x23dbd4: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x23dbd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23dbd8:
    // 0x23dbd8: 0x262202f0  addiu       $v0, $s1, 0x2F0
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_23dbdc:
    // 0x23dbdc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x23dbdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_23dbe0:
    // 0x23dbe0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23dbe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23dbe4:
    // 0x23dbe4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23dbe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23dbe8:
    // 0x23dbe8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x23dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_23dbec:
    // 0x23dbec: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x23dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23dbf0:
    // 0x23dbf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dbf4:
    // 0x23dbf4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x23dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23dbf8:
    // 0x23dbf8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x23dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23dbfc:
    // 0x23dbfc: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x23dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23dc00:
    // 0x23dc00: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x23dc00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_23dc04:
    // 0x23dc04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x23dc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_23dc08:
    // 0x23dc08: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23dc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23dc0c:
    // 0x23dc0c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_23dc10:
    if (ctx->pc == 0x23DC10u) {
        ctx->pc = 0x23DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC0Cu;
        // 0x23dc10: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC14u;
        goto label_23dc14;
    }
    ctx->pc = 0x23DC0Cu;
    {
        const bool branch_taken_0x23dc0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC0Cu;
        // 0x23dc10: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc0c) {
            ctx->pc = 0x23DC48u;
            goto label_23dc48;
        }
    }
    ctx->pc = 0x23DC14u;
label_23dc14:
    // 0x23dc14: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x23dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23dc18:
    // 0x23dc18: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x23dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23dc1c:
    // 0x23dc1c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x23dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_23dc20:
    // 0x23dc20: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23dc20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_23dc24:
    // 0x23dc24: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23dc24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_23dc28:
    // 0x23dc28: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23dc28u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_23dc2c:
    // 0x23dc2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23dc30:
    // 0x23dc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23dc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dc34:
    // 0x23dc34: 0x0  nop
    ctx->pc = 0x23dc34u;
    // NOP
label_23dc38:
    // 0x23dc38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23dc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23dc3c:
    // 0x23dc3c: 0x0  nop
    ctx->pc = 0x23dc3cu;
    // NOP
label_23dc40:
    // 0x23dc40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_23dc44:
    if (ctx->pc == 0x23DC44u) {
        ctx->pc = 0x23DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC40u;
        // 0x23dc44: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC48u;
        goto label_23dc48;
    }
    ctx->pc = 0x23DC40u;
    {
        const bool branch_taken_0x23dc40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC40u;
        // 0x23dc44: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc40) {
            ctx->pc = 0x23DC50u;
            goto label_23dc50;
        }
    }
    ctx->pc = 0x23DC48u;
label_23dc48:
    // 0x23dc48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dc4c:
    // 0x23dc4c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x23dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23dc50:
    // 0x23dc50: 0xa2230314  sb          $v1, 0x314($s1)
    ctx->pc = 0x23dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 788), (uint8_t)GPR_U32(ctx, 3));
label_23dc54:
    // 0x23dc54: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_23dc58:
    if (ctx->pc == 0x23DC58u) {
        ctx->pc = 0x23DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC54u;
        // 0x23dc58: 0xa2230315  sb          $v1, 0x315($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 789), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC5Cu;
        goto label_23dc5c;
    }
    ctx->pc = 0x23DC54u;
    {
        const bool branch_taken_0x23dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC54u;
        // 0x23dc58: 0xa2230315  sb          $v1, 0x315($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 789), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc54) {
            ctx->pc = 0x23DF00u;
            goto label_23df00;
        }
    }
    ctx->pc = 0x23DC5Cu;
label_23dc5c:
    // 0x23dc5c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x23dc5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_23dc60:
    // 0x23dc60: 0xfa2102f0  sqc2        $vf1, 0x2F0($s1)
    ctx->pc = 0x23dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_23dc64:
    // 0x23dc64: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x23dc64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23dc68:
    // 0x23dc68: 0xc0f6a96  jal         func_3DAA58
label_23dc6c:
    if (ctx->pc == 0x23DC6Cu) {
        ctx->pc = 0x23DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC68u;
        // 0x23dc6c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC70u;
        goto label_23dc70;
    }
    ctx->pc = 0x23DC68u;
    SET_GPR_U32(ctx, 31, 0x23DC70u);
    ctx->pc = 0x23DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC68u;
    // 0x23dc6c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23DC68u, 0x23DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC70u;
label_23dc70:
    // 0x23dc70: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_23dc74:
    // 0x23dc74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23dc74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dc78:
    // 0x23dc78: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23dc7c:
    // 0x23dc7c: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
label_23dc80:
    // 0x23dc80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23dc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23dc84:
    // 0x23dc84: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x23dc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_23dc88:
    // 0x23dc88: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x23dc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_23dc8c:
    // 0x23dc8c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x23dc8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_23dc90:
    // 0x23dc90: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_23dc94:
    // 0x23dc94: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x23dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23dc98:
    // 0x23dc98: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x23dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23dc9c:
    // 0x23dc9c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x23dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23dca0:
    // 0x23dca0: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x23dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23dca4:
    // 0x23dca4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x23dca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_23dca8:
    // 0x23dca8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x23dca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_23dcac:
    // 0x23dcac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x23dcacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_23dcb0:
    // 0x23dcb0: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x23dcb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_23dcb4:
    // 0x23dcb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23dcb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23dcb8:
    // 0x23dcb8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x23dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_23dcbc:
    // 0x23dcbc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23dcc0:
    // 0x23dcc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23dcc4:
    // 0x23dcc4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x23dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_23dcc8:
    // 0x23dcc8: 0x9064bd24  lbu         $a0, -0x42DC($v1)
    ctx->pc = 0x23dcc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950180)));
label_23dccc:
    // 0x23dccc: 0xac40761c  sw          $zero, 0x761C($v0)
    ctx->pc = 0x23dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30236), GPR_U32(ctx, 0));
label_23dcd0:
    // 0x23dcd0: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_23dcd4:
    if (ctx->pc == 0x23DCD4u) {
        ctx->pc = 0x23DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCD0u;
        // 0x23dcd4: 0xac407618  sw          $zero, 0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCD8u;
        goto label_23dcd8;
    }
    ctx->pc = 0x23DCD0u;
    {
        const bool branch_taken_0x23dcd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCD0u;
        // 0x23dcd4: 0xac407618  sw          $zero, 0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcd0) {
            ctx->pc = 0x23DD64u;
            goto label_23dd64;
        }
    }
    ctx->pc = 0x23DCD8u;
label_23dcd8:
    // 0x23dcd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23dcdc:
    // 0x23dcdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23dcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dce0:
    // 0x23dce0: 0x8c53bd20  lw          $s3, -0x42E0($v0)
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
label_23dce4:
    // 0x23dce4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23dce8:
    // 0x23dce8: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_23dcec:
    if (ctx->pc == 0x23DCECu) {
        ctx->pc = 0x23DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE8u;
        // 0x23dcec: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCF0u;
        goto label_23dcf0;
    }
    ctx->pc = 0x23DCE8u;
    {
        const bool branch_taken_0x23dce8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE8u;
        // 0x23dcec: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dce8) {
            ctx->pc = 0x23DD88u;
            goto label_23dd88;
        }
    }
    ctx->pc = 0x23DCF0u;
label_23dcf0:
    // 0x23dcf0: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x23dcf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23dcf4:
    // 0x23dcf4: 0x3c150024  lui         $s5, 0x24
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)36 << 16));
label_23dcf8:
    // 0x23dcf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23dcf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dcfc:
    // 0x23dcfc: 0x0  nop
    ctx->pc = 0x23dcfcu;
    // NOP
label_23dd00:
    // 0x23dd00: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_23dd04:
    // 0x23dd04: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_23dd08:
    // 0x23dd08: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23dd0c:
    // 0x23dd0c: 0x14760002  bne         $v1, $s6, . + 4 + (0x2 << 2)
label_23dd10:
    if (ctx->pc == 0x23DD10u) {
        ctx->pc = 0x23DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD0Cu;
        // 0x23dd10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD14u;
        goto label_23dd14;
    }
    ctx->pc = 0x23DD0Cu;
    {
        const bool branch_taken_0x23dd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x23DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD0Cu;
        // 0x23dd10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd0c) {
            ctx->pc = 0x23DD18u;
            goto label_23dd18;
        }
    }
    ctx->pc = 0x23DD14u;
label_23dd14:
    // 0x23dd14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dd18:
    // 0x23dd18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23dd1c:
    // 0x23dd1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23dd20:
    if (ctx->pc == 0x23DD20u) {
        ctx->pc = 0x23DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD1Cu;
        // 0x23dd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD24u;
        goto label_23dd24;
    }
    ctx->pc = 0x23DD1Cu;
    {
        const bool branch_taken_0x23dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD1Cu;
        // 0x23dd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd1c) {
            ctx->pc = 0x23DD48u;
            goto label_23dd48;
        }
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0xc0b5332  jal         func_2D4CC8
label_23dd28:
    if (ctx->pc == 0x23DD28u) {
        ctx->pc = 0x23DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD24u;
        // 0x23dd28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD2Cu;
        goto label_23dd2c;
    }
    ctx->pc = 0x23DD24u;
    SET_GPR_U32(ctx, 31, 0x23DD2Cu);
    ctx->pc = 0x23DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD24u;
    // 0x23dd28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4CC8u, 0x23DD24u, 0x23DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD2Cu;
label_23dd2c:
    // 0x23dd2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23dd30:
    if (ctx->pc == 0x23DD30u) {
        ctx->pc = 0x23DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD2Cu;
        // 0x23dd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD34u;
        goto label_23dd34;
    }
    ctx->pc = 0x23DD2Cu;
    {
        const bool branch_taken_0x23dd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD2Cu;
        // 0x23dd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd2c) {
            ctx->pc = 0x23DD48u;
            goto label_23dd48;
        }
    }
    ctx->pc = 0x23DD34u;
label_23dd34:
    // 0x23dd34: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_23dd38:
    // 0x23dd38: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23dd3c:
    // 0x23dd3c: 0x26a7da40  addiu       $a3, $s5, -0x25C0
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957632));
label_23dd40:
    // 0x23dd40: 0xc0dbe70  jal         func_36F9C0
label_23dd44:
    if (ctx->pc == 0x23DD44u) {
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD48u;
        goto label_23dd48;
    }
    ctx->pc = 0x23DD40u;
    SET_GPR_U32(ctx, 31, 0x23DD48u);
    ctx->pc = 0x23DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD40u;
    // 0x23dd44: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x23DD40u, 0x23DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23dd4c:
    // 0x23dd4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23dd50:
    // 0x23dd50: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23dd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23dd54:
    // 0x23dd54: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_23dd58:
    if (ctx->pc == 0x23DD58u) {
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x269401c4  addiu       $s4, $s4, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD5Cu;
        goto label_23dd5c;
    }
    ctx->pc = 0x23DD54u;
    {
        const bool branch_taken_0x23dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x269401c4  addiu       $s4, $s4, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd54) {
            ctx->pc = 0x23DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dd00;
        }
    }
    ctx->pc = 0x23DD5Cu;
label_23dd5c:
    // 0x23dd5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_23dd60:
    if (ctx->pc == 0x23DD60u) {
        ctx->pc = 0x23DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD5Cu;
        // 0x23dd60: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD64u;
        goto label_23dd64;
    }
    ctx->pc = 0x23DD5Cu;
    {
        const bool branch_taken_0x23dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD5Cu;
        // 0x23dd60: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd5c) {
            ctx->pc = 0x23DD8Cu;
            goto label_23dd8c;
        }
    }
    ctx->pc = 0x23DD64u;
label_23dd64:
    // 0x23dd64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23dd68:
    // 0x23dd68: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x23dd68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
label_23dd6c:
    // 0x23dd6c: 0x8c45bd28  lw          $a1, -0x42D8($v0)
    ctx->pc = 0x23dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950184)));
label_23dd70:
    // 0x23dd70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23dd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23dd74:
    // 0x23dd74: 0x24e7da40  addiu       $a3, $a3, -0x25C0
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957632));
label_23dd78:
    // 0x23dd78: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23dd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23dd7c:
    // 0x23dd7c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x23dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_23dd80:
    // 0x23dd80: 0xc0dbe70  jal         func_36F9C0
label_23dd84:
    if (ctx->pc == 0x23DD84u) {
        ctx->pc = 0x23DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD80u;
        // 0x23dd84: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD88u;
        goto label_23dd88;
    }
    ctx->pc = 0x23DD80u;
    SET_GPR_U32(ctx, 31, 0x23DD88u);
    ctx->pc = 0x23DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD80u;
    // 0x23dd84: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x23DD80u, 0x23DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD88u;
label_23dd88:
    // 0x23dd88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23dd8c:
    // 0x23dd8c: 0x8ee2989c  lw          $v0, -0x6764($s7)
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294940828)));
label_23dd90:
    // 0x23dd90: 0x3c32021  addu        $a0, $fp, $v1
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_23dd94:
    // 0x23dd94: 0x8c83761c  lw          $v1, 0x761C($a0)
    ctx->pc = 0x23dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30236)));
label_23dd98:
    // 0x23dd98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23dd98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23dd9c:
    // 0x23dd9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23dda0:
    if (ctx->pc == 0x23DDA0u) {
        ctx->pc = 0x23DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD9Cu;
        // 0x23dda0: 0xaee3989c  sw          $v1, -0x6764($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294940828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDA4u;
        goto label_23dda4;
    }
    ctx->pc = 0x23DD9Cu;
    {
        const bool branch_taken_0x23dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd9c) {
            ctx->pc = 0x23DDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD9Cu;
            // 0x23dda0: 0xaee3989c  sw          $v1, -0x6764($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294940828), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDA4u;
            goto label_23dda4;
        }
    }
    ctx->pc = 0x23DDA4u;
label_23dda4:
    // 0x23dda4: 0x8c847618  lw          $a0, 0x7618($a0)
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30232)));
label_23dda8:
    // 0x23dda8: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x23dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
label_23ddac:
    // 0x23ddac: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x23ddacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23ddb0:
    // 0x23ddb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ddb4:
    if (ctx->pc == 0x23DDB4u) {
        ctx->pc = 0x23DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB0u;
        // 0x23ddb4: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB8u;
        goto label_23ddb8;
    }
    ctx->pc = 0x23DDB0u;
    {
        const bool branch_taken_0x23ddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB0u;
        // 0x23ddb4: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb0) {
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DDB8u;
label_23ddb8:
    // 0x23ddb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23ddbc:
    if (ctx->pc == 0x23DDBCu) {
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDC0u;
        goto label_23ddc0;
    }
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23DDC8u;
            goto label_23ddc8;
        }
    }
    ctx->pc = 0x23DDC0u;
label_23ddc0:
    // 0x23ddc0: 0x284200c9  slti        $v0, $v0, 0xC9
    ctx->pc = 0x23ddc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
label_23ddc4:
    // 0x23ddc4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x23ddc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23ddc8:
    // 0x23ddc8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23ddcc:
    // 0x23ddcc: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x23ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_23ddd0:
    // 0x23ddd0: 0x8e037618  lw          $v1, 0x7618($s0)
    ctx->pc = 0x23ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30232)));
label_23ddd4:
    // 0x23ddd4: 0xae23030c  sw          $v1, 0x30C($s1)
    ctx->pc = 0x23ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 3));
label_23ddd8:
    // 0x23ddd8: 0x8e02761c  lw          $v0, 0x761C($s0)
    ctx->pc = 0x23ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30236)));
label_23dddc:
    // 0x23dddc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23dde0:
    if (ctx->pc == 0x23DDE0u) {
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0xae220310  sw          $v0, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDE4u;
        goto label_23dde4;
    }
    ctx->pc = 0x23DDDCu;
    {
        const bool branch_taken_0x23dddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0xae220310  sw          $v0, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dddc) {
            ctx->pc = 0x23DDECu;
            goto label_23ddec;
        }
    }
    ctx->pc = 0x23DDE4u;
label_23dde4:
    // 0x23dde4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_23dde8:
    if (ctx->pc == 0x23DDE8u) {
        ctx->pc = 0x23DDECu;
        goto label_23ddec;
    }
    ctx->pc = 0x23DDE4u;
    {
        const bool branch_taken_0x23dde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dde4) {
            ctx->pc = 0x23DE38u;
            goto label_23de38;
        }
    }
    ctx->pc = 0x23DDECu;
label_23ddec:
    // 0x23ddec: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_23ddf0:
    // 0x23ddf0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_23ddf4:
    if (ctx->pc == 0x23DDF4u) {
        ctx->pc = 0x23DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF0u;
        // 0x23ddf4: 0x8e240304  lw          $a0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDF8u;
        goto label_23ddf8;
    }
    ctx->pc = 0x23DDF0u;
    {
        const bool branch_taken_0x23ddf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ddf0) {
            ctx->pc = 0x23DDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDF0u;
            // 0x23ddf4: 0x8e240304  lw          $a0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE08u;
            goto label_23de08;
        }
    }
    ctx->pc = 0x23DDF8u;
label_23ddf8:
    // 0x23ddf8: 0xc0b2524  jal         func_2C9490
label_23ddfc:
    if (ctx->pc == 0x23DDFCu) {
        ctx->pc = 0x23DE00u;
        goto label_23de00;
    }
    ctx->pc = 0x23DDF8u;
    SET_GPR_U32(ctx, 31, 0x23DE00u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DDF8u, 0x23DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE00u;
label_23de00:
    // 0x23de00: 0xae200300  sw          $zero, 0x300($s1)
    ctx->pc = 0x23de00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
label_23de04:
    // 0x23de04: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x23de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_23de08:
    // 0x23de08: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_23de0c:
    if (ctx->pc == 0x23DE0Cu) {
        ctx->pc = 0x23DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE08u;
        // 0x23de0c: 0x8e240308  lw          $a0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE10u;
        goto label_23de10;
    }
    ctx->pc = 0x23DE08u;
    {
        const bool branch_taken_0x23de08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de08) {
            ctx->pc = 0x23DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE08u;
            // 0x23de0c: 0x8e240308  lw          $a0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE20u;
            goto label_23de20;
        }
    }
    ctx->pc = 0x23DE10u;
label_23de10:
    // 0x23de10: 0xc0b2524  jal         func_2C9490
label_23de14:
    if (ctx->pc == 0x23DE14u) {
        ctx->pc = 0x23DE18u;
        goto label_23de18;
    }
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DE10u, 0x23DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0xae200304  sw          $zero, 0x304($s1)
    ctx->pc = 0x23de18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
label_23de1c:
    // 0x23de1c: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_23de20:
    // 0x23de20: 0x50800031  beql        $a0, $zero, . + 4 + (0x31 << 2)
label_23de24:
    if (ctx->pc == 0x23DE24u) {
        ctx->pc = 0x23DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE20u;
        // 0x23de24: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE28u;
        goto label_23de28;
    }
    ctx->pc = 0x23DE20u;
    {
        const bool branch_taken_0x23de20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de20) {
            ctx->pc = 0x23DE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE20u;
            // 0x23de24: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DEE8u;
            goto label_23dee8;
        }
    }
    ctx->pc = 0x23DE28u;
label_23de28:
    // 0x23de28: 0xc0b2524  jal         func_2C9490
label_23de2c:
    if (ctx->pc == 0x23DE2Cu) {
        ctx->pc = 0x23DE30u;
        goto label_23de30;
    }
    ctx->pc = 0x23DE28u;
    SET_GPR_U32(ctx, 31, 0x23DE30u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DE28u, 0x23DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE30u;
label_23de30:
    // 0x23de30: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23de34:
    if (ctx->pc == 0x23DE34u) {
        ctx->pc = 0x23DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE30u;
        // 0x23de34: 0xae200308  sw          $zero, 0x308($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE38u;
        goto label_23de38;
    }
    ctx->pc = 0x23DE30u;
    {
        const bool branch_taken_0x23de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE30u;
        // 0x23de34: 0xae200308  sw          $zero, 0x308($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de30) {
            ctx->pc = 0x23DEE4u;
            goto label_23dee4;
        }
    }
    ctx->pc = 0x23DE38u;
label_23de38:
    // 0x23de38: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_23de3c:
    if (ctx->pc == 0x23DE3Cu) {
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE40u;
        goto label_23de40;
    }
    ctx->pc = 0x23DE38u;
    {
        const bool branch_taken_0x23de38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de38) {
            ctx->pc = 0x23DE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE38u;
            // 0x23de3c: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DEA4u;
            goto label_23dea4;
        }
    }
    ctx->pc = 0x23DE40u;
label_23de40:
    // 0x23de40: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x23de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_23de44:
    // 0x23de44: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_23de48:
    if (ctx->pc == 0x23DE48u) {
        ctx->pc = 0x23DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE44u;
        // 0x23de48: 0x8e047618  lw          $a0, 0x7618($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE4Cu;
        goto label_23de4c;
    }
    ctx->pc = 0x23DE44u;
    {
        const bool branch_taken_0x23de44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de44) {
            ctx->pc = 0x23DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE44u;
            // 0x23de48: 0x8e047618  lw          $a0, 0x7618($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE74u;
            goto label_23de74;
        }
    }
    ctx->pc = 0x23DE4Cu;
label_23de4c:
    // 0x23de4c: 0xc0b2524  jal         func_2C9490
label_23de50:
    if (ctx->pc == 0x23DE50u) {
        ctx->pc = 0x23DE54u;
        goto label_23de54;
    }
    ctx->pc = 0x23DE4Cu;
    SET_GPR_U32(ctx, 31, 0x23DE54u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DE4Cu, 0x23DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE54u;
label_23de54:
    // 0x23de54: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_23de58:
    // 0x23de58: 0xc0b2524  jal         func_2C9490
label_23de5c:
    if (ctx->pc == 0x23DE5Cu) {
        ctx->pc = 0x23DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE58u;
        // 0x23de5c: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE60u;
        goto label_23de60;
    }
    ctx->pc = 0x23DE58u;
    SET_GPR_U32(ctx, 31, 0x23DE60u);
    ctx->pc = 0x23DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE58u;
    // 0x23de5c: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DE58u, 0x23DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE60u;
label_23de60:
    // 0x23de60: 0xae200304  sw          $zero, 0x304($s1)
    ctx->pc = 0x23de60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
label_23de64:
    // 0x23de64: 0xc0b2524  jal         func_2C9490
label_23de68:
    if (ctx->pc == 0x23DE68u) {
        ctx->pc = 0x23DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE64u;
        // 0x23de68: 0x8e240308  lw          $a0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE6Cu;
        goto label_23de6c;
    }
    ctx->pc = 0x23DE64u;
    SET_GPR_U32(ctx, 31, 0x23DE6Cu);
    ctx->pc = 0x23DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE64u;
    // 0x23de68: 0x8e240308  lw          $a0, 0x308($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x23DE64u, 0x23DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE6Cu;
label_23de6c:
    // 0x23de6c: 0xae200308  sw          $zero, 0x308($s1)
    ctx->pc = 0x23de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 0));
label_23de70:
    // 0x23de70: 0x8e047618  lw          $a0, 0x7618($s0)
    ctx->pc = 0x23de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30232)));
label_23de74:
    // 0x23de74: 0xc0b241a  jal         func_2C9068
label_23de78:
    if (ctx->pc == 0x23DE78u) {
        ctx->pc = 0x23DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE74u;
        // 0x23de78: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE7Cu;
        goto label_23de7c;
    }
    ctx->pc = 0x23DE74u;
    SET_GPR_U32(ctx, 31, 0x23DE7Cu);
    ctx->pc = 0x23DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE74u;
    // 0x23de78: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x23DE74u, 0x23DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE7Cu;
label_23de7c:
    // 0x23de7c: 0xae220300  sw          $v0, 0x300($s1)
    ctx->pc = 0x23de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 2));
label_23de80:
    // 0x23de80: 0x8e04761c  lw          $a0, 0x761C($s0)
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30236)));
label_23de84:
    // 0x23de84: 0xc0b241a  jal         func_2C9068
label_23de88:
    if (ctx->pc == 0x23DE88u) {
        ctx->pc = 0x23DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE84u;
        // 0x23de88: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE8Cu;
        goto label_23de8c;
    }
    ctx->pc = 0x23DE84u;
    SET_GPR_U32(ctx, 31, 0x23DE8Cu);
    ctx->pc = 0x23DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE84u;
    // 0x23de88: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x23DE84u, 0x23DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE8Cu;
label_23de8c:
    // 0x23de8c: 0xae220304  sw          $v0, 0x304($s1)
    ctx->pc = 0x23de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 2));
label_23de90:
    // 0x23de90: 0x8e04761c  lw          $a0, 0x761C($s0)
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30236)));
label_23de94:
    // 0x23de94: 0xc0b241a  jal         func_2C9068
label_23de98:
    if (ctx->pc == 0x23DE98u) {
        ctx->pc = 0x23DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE94u;
        // 0x23de98: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE9Cu;
        goto label_23de9c;
    }
    ctx->pc = 0x23DE94u;
    SET_GPR_U32(ctx, 31, 0x23DE9Cu);
    ctx->pc = 0x23DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE94u;
    // 0x23de98: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x23DE94u, 0x23DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE9Cu;
label_23de9c:
    // 0x23de9c: 0xae220308  sw          $v0, 0x308($s1)
    ctx->pc = 0x23de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 2));
label_23dea0:
    // 0x23dea0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x23dea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23dea4:
    // 0x23dea4: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x23dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_23dea8:
    // 0x23dea8: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x23dea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_23deac:
    // 0x23deac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23deb0:
    // 0x23deb0: 0x8e067618  lw          $a2, 0x7618($s0)
    ctx->pc = 0x23deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30232)));
label_23deb4:
    // 0x23deb4: 0xc0efa49  jal         func_3BE924
label_23deb8:
    if (ctx->pc == 0x23DEB8u) {
        ctx->pc = 0x23DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB4u;
        // 0x23deb8: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEBCu;
        goto label_23debc;
    }
    ctx->pc = 0x23DEB4u;
    SET_GPR_U32(ctx, 31, 0x23DEBCu);
    ctx->pc = 0x23DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEB4u;
    // 0x23deb8: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x23DEB4u, 0x23DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEBCu;
label_23debc:
    // 0x23debc: 0x8e06761c  lw          $a2, 0x761C($s0)
    ctx->pc = 0x23debcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30236)));
label_23dec0:
    // 0x23dec0: 0x260528c0  addiu       $a1, $s0, 0x28C0
    ctx->pc = 0x23dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10432));
label_23dec4:
    // 0x23dec4: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x23dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_23dec8:
    // 0x23dec8: 0xc0efa49  jal         func_3BE924
label_23decc:
    if (ctx->pc == 0x23DECCu) {
        ctx->pc = 0x23DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC8u;
        // 0x23decc: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DED0u;
        goto label_23ded0;
    }
    ctx->pc = 0x23DEC8u;
    SET_GPR_U32(ctx, 31, 0x23DED0u);
    ctx->pc = 0x23DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEC8u;
    // 0x23decc: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x23DEC8u, 0x23DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DED0u;
label_23ded0:
    // 0x23ded0: 0x8e06761c  lw          $a2, 0x761C($s0)
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30236)));
label_23ded4:
    // 0x23ded4: 0x26056100  addiu       $a1, $s0, 0x6100
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24832));
label_23ded8:
    // 0x23ded8: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_23dedc:
    // 0x23dedc: 0xc0efa49  jal         func_3BE924
label_23dee0:
    if (ctx->pc == 0x23DEE0u) {
        ctx->pc = 0x23DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEDCu;
        // 0x23dee0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEE4u;
        goto label_23dee4;
    }
    ctx->pc = 0x23DEDCu;
    SET_GPR_U32(ctx, 31, 0x23DEE4u);
    ctx->pc = 0x23DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEDCu;
    // 0x23dee0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x23DEDCu, 0x23DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEE4u;
label_23dee4:
    // 0x23dee4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23dee8:
    // 0x23dee8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23deec:
    // 0x23deec: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23def0:
    // 0x23def0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23def4:
    if (ctx->pc == 0x23DEF4u) {
        ctx->pc = 0x23DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF0u;
        // 0x23def4: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEF8u;
        goto label_23def8;
    }
    ctx->pc = 0x23DEF0u;
    {
        const bool branch_taken_0x23def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF0u;
        // 0x23def4: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23def0) {
            ctx->pc = 0x23DF04u;
            goto label_23df04;
        }
    }
    ctx->pc = 0x23DEF8u;
label_23def8:
    // 0x23def8: 0xc071e68  jal         func_1C79A0
label_23defc:
    if (ctx->pc == 0x23DEFCu) {
        ctx->pc = 0x23DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF8u;
        // 0x23defc: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF00u;
        goto label_23df00;
    }
    ctx->pc = 0x23DEF8u;
    SET_GPR_U32(ctx, 31, 0x23DF00u);
    ctx->pc = 0x23DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEF8u;
    // 0x23defc: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C79A0u, 0x23DEF8u, 0x23DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF00u;
label_23df00:
    // 0x23df00: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x23df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23df04:
    // 0x23df04: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23df04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23df08:
    // 0x23df08: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x23df08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23df0c:
    // 0x23df0c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x23df0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_23df10:
    // 0x23df10: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x23df10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23df14:
    // 0x23df14: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x23df14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_23df18:
    // 0x23df18: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x23df18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23df1c:
    // 0x23df1c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x23df1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_23df20:
    // 0x23df20: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x23df20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23df24:
    // 0x23df24: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x23df24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_23df28:
    // 0x23df28: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x23df28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23df2c:
    // 0x23df2c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x23df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_23df30:
    // 0x23df30: 0xa062b44c  sb          $v0, -0x4BB4($v1)
    ctx->pc = 0x23df30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947916), (uint8_t)GPR_U32(ctx, 2));
label_23df34:
    // 0x23df34: 0x3e00008  jr          $ra
label_23df38:
    if (ctx->pc == 0x23DF38u) {
        ctx->pc = 0x23DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF34u;
        // 0x23df38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF3Cu;
        goto label_23df3c;
    }
    ctx->pc = 0x23DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF34u;
        // 0x23df38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DF3Cu;
label_23df3c:
    // 0x23df3c: 0x0  nop
    ctx->pc = 0x23df3cu;
    // NOP
    ctx->pc = 0x23df40u;
}
