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

// Function: sub_0020DB08
// Address: 0x20db08 - 0x20de58
void sub_0020DB08_0x20db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB08_0x20db08");
#endif

    switch (ctx->pc) {
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc14u: goto label_20dc14;
        case 0x20dc18u: goto label_20dc18;
        case 0x20dc1cu: goto label_20dc1c;
        case 0x20dc20u: goto label_20dc20;
        case 0x20dc24u: goto label_20dc24;
        case 0x20dc28u: goto label_20dc28;
        case 0x20dc2cu: goto label_20dc2c;
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc34u: goto label_20dc34;
        case 0x20dc38u: goto label_20dc38;
        case 0x20dc3cu: goto label_20dc3c;
        case 0x20dc40u: goto label_20dc40;
        case 0x20dc44u: goto label_20dc44;
        case 0x20dc48u: goto label_20dc48;
        case 0x20dc4cu: goto label_20dc4c;
        case 0x20dc50u: goto label_20dc50;
        case 0x20dc54u: goto label_20dc54;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc5cu: goto label_20dc5c;
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc64u: goto label_20dc64;
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        case 0x20ddf0u: goto label_20ddf0;
        case 0x20ddf4u: goto label_20ddf4;
        case 0x20ddf8u: goto label_20ddf8;
        case 0x20ddfcu: goto label_20ddfc;
        case 0x20de00u: goto label_20de00;
        case 0x20de04u: goto label_20de04;
        case 0x20de08u: goto label_20de08;
        case 0x20de0cu: goto label_20de0c;
        case 0x20de10u: goto label_20de10;
        case 0x20de14u: goto label_20de14;
        case 0x20de18u: goto label_20de18;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de24u: goto label_20de24;
        case 0x20de28u: goto label_20de28;
        case 0x20de2cu: goto label_20de2c;
        case 0x20de30u: goto label_20de30;
        case 0x20de34u: goto label_20de34;
        case 0x20de38u: goto label_20de38;
        case 0x20de3cu: goto label_20de3c;
        case 0x20de40u: goto label_20de40;
        case 0x20de44u: goto label_20de44;
        case 0x20de48u: goto label_20de48;
        case 0x20de4cu: goto label_20de4c;
        case 0x20de50u: goto label_20de50;
        case 0x20de54u: goto label_20de54;
        default: break;
    }

    ctx->pc = 0x20db08u;

label_20db08:
    // 0x20db08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20db0c:
    // 0x20db0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_20db10:
    // 0x20db10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20db14:
    // 0x20db14: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x20db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
label_20db18:
    // 0x20db18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20db1c:
    // 0x20db1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20db1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20db20:
    // 0x20db20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20db24:
    // 0x20db24: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x20db24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_20db28:
    // 0x20db28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20db28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_20db2c:
    // 0x20db2c: 0x24637cb0  addiu       $v1, $v1, 0x7CB0
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31920));
label_20db30:
    // 0x20db30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_20db34:
    // 0x20db34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_20db38:
    // 0x20db38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_20db3c:
    // 0x20db3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x20db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_20db40:
    // 0x20db40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20db44:
    // 0x20db44: 0xae420218  sw          $v0, 0x218($s2)
    ctx->pc = 0x20db44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
label_20db48:
    // 0x20db48: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_20db4c:
    // 0x20db4c: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
label_20db50:
    if (ctx->pc == 0x20DB50u) {
        ctx->pc = 0x20DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB4Cu;
        // 0x20db50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB54u;
        goto label_20db54;
    }
    ctx->pc = 0x20DB4Cu;
    {
        const bool branch_taken_0x20db4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x20DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB4Cu;
        // 0x20db50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db4c) {
            ctx->pc = 0x20DB58u;
            goto label_20db58;
        }
    }
    ctx->pc = 0x20DB54u;
label_20db54:
    // 0x20db54: 0xac6000dc  sw          $zero, 0xDC($v1)
    ctx->pc = 0x20db54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 0));
label_20db58:
    // 0x20db58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20db58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_20db5c:
    // 0x20db5c: 0x8c6294cc  lw          $v0, -0x6B34($v1)
    ctx->pc = 0x20db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939852)));
label_20db60:
    // 0x20db60: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_20db64:
    if (ctx->pc == 0x20DB64u) {
        ctx->pc = 0x20DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB60u;
        // 0x20db64: 0xac6094cc  sw          $zero, -0x6B34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB68u;
        goto label_20db68;
    }
    ctx->pc = 0x20DB60u;
    {
        const bool branch_taken_0x20db60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x20db60) {
            ctx->pc = 0x20DB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB60u;
            // 0x20db64: 0xac6094cc  sw          $zero, -0x6B34($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294939852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB68u;
            goto label_20db68;
        }
    }
    ctx->pc = 0x20DB68u;
label_20db68:
    // 0x20db68: 0xc0a3702  jal         func_28DC08
label_20db6c:
    if (ctx->pc == 0x20DB6Cu) {
        ctx->pc = 0x20DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB68u;
        // 0x20db6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB70u;
        goto label_20db70;
    }
    ctx->pc = 0x20DB68u;
    SET_GPR_U32(ctx, 31, 0x20DB70u);
    ctx->pc = 0x20DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DB68u;
    // 0x20db6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DC08u, 0x20DB68u, 0x20DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x8e440194  lw          $a0, 0x194($s2)
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_20db74:
    // 0x20db74: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_20db78:
    if (ctx->pc == 0x20DB78u) {
        ctx->pc = 0x20DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB74u;
        // 0x20db78: 0x8e440198  lw          $a0, 0x198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB7Cu;
        goto label_20db7c;
    }
    ctx->pc = 0x20DB74u;
    {
        const bool branch_taken_0x20db74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db74) {
            ctx->pc = 0x20DB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB74u;
            // 0x20db78: 0x8e440198  lw          $a0, 0x198($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB88u;
            goto label_20db88;
        }
    }
    ctx->pc = 0x20DB7Cu;
label_20db7c:
    // 0x20db7c: 0xc073db6  jal         func_1CF6D8
label_20db80:
    if (ctx->pc == 0x20DB80u) {
        ctx->pc = 0x20DB84u;
        goto label_20db84;
    }
    ctx->pc = 0x20DB7Cu;
    SET_GPR_U32(ctx, 31, 0x20DB84u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x20DB7Cu, 0x20DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB84u;
label_20db84:
    // 0x20db84: 0x8e440198  lw          $a0, 0x198($s2)
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_20db88:
    // 0x20db88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_20db8c:
    if (ctx->pc == 0x20DB8Cu) {
        ctx->pc = 0x20DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB88u;
        // 0x20db8c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB90u;
        goto label_20db90;
    }
    ctx->pc = 0x20DB88u;
    {
        const bool branch_taken_0x20db88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db88) {
            ctx->pc = 0x20DB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB88u;
            // 0x20db8c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB9Cu;
            goto label_20db9c;
        }
    }
    ctx->pc = 0x20DB90u;
label_20db90:
    // 0x20db90: 0xc073db6  jal         func_1CF6D8
label_20db94:
    if (ctx->pc == 0x20DB94u) {
        ctx->pc = 0x20DB98u;
        goto label_20db98;
    }
    ctx->pc = 0x20DB90u;
    SET_GPR_U32(ctx, 31, 0x20DB98u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x20DB90u, 0x20DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB98u;
label_20db98:
    // 0x20db98: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_20db9c:
    // 0x20db9c: 0x32170001  andi        $s7, $s0, 0x1
    ctx->pc = 0x20db9cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_20dba0:
    // 0x20dba0: 0x265300e0  addiu       $s3, $s2, 0xE0
    ctx->pc = 0x20dba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_20dba4:
    // 0x20dba4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_20dba8:
    // 0x20dba8: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x20dba8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
label_20dbac:
    // 0x20dbac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_20dbb0:
    if (ctx->pc == 0x20DBB0u) {
        ctx->pc = 0x20DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBACu;
        // 0x20dbb0: 0x265600f8  addiu       $s6, $s2, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DBB4u;
        goto label_20dbb4;
    }
    ctx->pc = 0x20DBACu;
    {
        const bool branch_taken_0x20dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBACu;
        // 0x20dbb0: 0x265600f8  addiu       $s6, $s2, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbac) {
            ctx->pc = 0x20DBF8u;
            goto label_20dbf8;
        }
    }
    ctx->pc = 0x20DBB4u;
label_20dbb4:
    // 0x20dbb4: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x20dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
label_20dbb8:
    // 0x20dbb8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x20dbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20dbbc:
    // 0x20dbbc: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x20dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_20dbc0:
    // 0x20dbc0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20dbc4:
    // 0x20dbc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20dbc8:
    if (ctx->pc == 0x20DBC8u) {
        ctx->pc = 0x20DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBC4u;
        // 0x20dbc8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DBCCu;
        goto label_20dbcc;
    }
    ctx->pc = 0x20DBC4u;
    {
        const bool branch_taken_0x20dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBC4u;
        // 0x20dbc8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbc4) {
            ctx->pc = 0x20DBE8u;
            goto label_20dbe8;
        }
    }
    ctx->pc = 0x20DBCCu;
label_20dbcc:
    // 0x20dbcc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20dbd0:
    // 0x20dbd0: 0xc0f75cc  jal         func_3DD730
label_20dbd4:
    if (ctx->pc == 0x20DBD4u) {
        ctx->pc = 0x20DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBD0u;
        // 0x20dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DBD8u;
        goto label_20dbd8;
    }
    ctx->pc = 0x20DBD0u;
    SET_GPR_U32(ctx, 31, 0x20DBD8u);
    ctx->pc = 0x20DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBD0u;
    // 0x20dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD730u, 0x20DBD0u, 0x20DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBD8u;
label_20dbd8:
    // 0x20dbd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20dbdc:
    // 0x20dbdc: 0x0  nop
    ctx->pc = 0x20dbdcu;
    // NOP
label_20dbe0:
    // 0x20dbe0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_20dbe4:
    if (ctx->pc == 0x20DBE4u) {
        ctx->pc = 0x20DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBE0u;
        // 0x20dbe4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DBE8u;
        goto label_20dbe8;
    }
    ctx->pc = 0x20DBE0u;
    {
        const bool branch_taken_0x20dbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dbe0) {
            ctx->pc = 0x20DBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DBE0u;
            // 0x20dbe4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dbd0;
        }
    }
    ctx->pc = 0x20DBE8u;
label_20dbe8:
    // 0x20dbe8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_20dbec:
    // 0x20dbec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20dbf0:
    // 0x20dbf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20dbf4:
    // 0x20dbf4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20dbf8:
    // 0x20dbf8: 0x8e440190  lw          $a0, 0x190($s2)
    ctx->pc = 0x20dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_20dbfc:
    // 0x20dbfc: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_20dc00:
    if (ctx->pc == 0x20DC00u) {
        ctx->pc = 0x20DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBFCu;
        // 0x20dc00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC04u;
        goto label_20dc04;
    }
    ctx->pc = 0x20DBFCu;
    {
        const bool branch_taken_0x20dbfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBFCu;
        // 0x20dc00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbfc) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DC04u;
label_20dc04:
    // 0x20dc04: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_20dc08:
    if (ctx->pc == 0x20DC08u) {
        ctx->pc = 0x20DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC04u;
        // 0x20dc08: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC0Cu;
        goto label_20dc0c;
    }
    ctx->pc = 0x20DC04u;
    {
        const bool branch_taken_0x20dc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC04u;
        // 0x20dc08: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc04) {
            ctx->pc = 0x20DC2Cu;
            goto label_20dc2c;
        }
    }
    ctx->pc = 0x20DC0Cu;
label_20dc0c:
    // 0x20dc0c: 0x8c6295ac  lw          $v0, -0x6A54($v1)
    ctx->pc = 0x20dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940076)));
label_20dc10:
    // 0x20dc10: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20dc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20dc14:
    // 0x20dc14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20dc18:
    if (ctx->pc == 0x20DC18u) {
        ctx->pc = 0x20DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC14u;
        // 0x20dc18: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC1Cu;
        goto label_20dc1c;
    }
    ctx->pc = 0x20DC14u;
    {
        const bool branch_taken_0x20dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC14u;
        // 0x20dc18: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc14) {
            ctx->pc = 0x20DC2Cu;
            goto label_20dc2c;
        }
    }
    ctx->pc = 0x20DC1Cu;
label_20dc1c:
    // 0x20dc1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_20dc20:
    // 0x20dc20: 0x8c4495a8  lw          $a0, -0x6A58($v0)
    ctx->pc = 0x20dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940072)));
label_20dc24:
    // 0x20dc24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20dc28:
    // 0x20dc28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20dc2c:
    // 0x20dc2c: 0xae400190  sw          $zero, 0x190($s2)
    ctx->pc = 0x20dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
label_20dc30:
    // 0x20dc30: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_20dc34:
    // 0x20dc34: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_20dc38:
    if (ctx->pc == 0x20DC38u) {
        ctx->pc = 0x20DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC34u;
        // 0x20dc38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC3Cu;
        goto label_20dc3c;
    }
    ctx->pc = 0x20DC34u;
    {
        const bool branch_taken_0x20dc34 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC34u;
        // 0x20dc38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc34) {
            ctx->pc = 0x20DC60u;
            goto label_20dc60;
        }
    }
    ctx->pc = 0x20DC3Cu;
label_20dc3c:
    // 0x20dc3c: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x20dc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_20dc40:
    // 0x20dc40: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x20dc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_20dc44:
    // 0x20dc44: 0xc07f4ba  jal         func_1FD2E8
label_20dc48:
    if (ctx->pc == 0x20DC48u) {
        ctx->pc = 0x20DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC44u;
        // 0x20dc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC4Cu;
        goto label_20dc4c;
    }
    ctx->pc = 0x20DC44u;
    SET_GPR_U32(ctx, 31, 0x20DC4Cu);
    ctx->pc = 0x20DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC44u;
    // 0x20dc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2E8u, 0x20DC44u, 0x20DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC4Cu;
label_20dc4c:
    // 0x20dc4c: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x20dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_20dc50:
    // 0x20dc50: 0xc07f4b2  jal         func_1FD2C8
label_20dc54:
    if (ctx->pc == 0x20DC54u) {
        ctx->pc = 0x20DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC50u;
        // 0x20dc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC58u;
        goto label_20dc58;
    }
    ctx->pc = 0x20DC50u;
    SET_GPR_U32(ctx, 31, 0x20DC58u);
    ctx->pc = 0x20DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC50u;
    // 0x20dc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2C8u, 0x20DC50u, 0x20DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC58u;
label_20dc58:
    // 0x20dc58: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x20dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_20dc5c:
    // 0x20dc5c: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x20dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_20dc60:
    // 0x20dc60: 0xc0837a0  jal         func_20DE80
label_20dc64:
    if (ctx->pc == 0x20DC64u) {
        ctx->pc = 0x20DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC60u;
        // 0x20dc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC68u;
        goto label_20dc68;
    }
    ctx->pc = 0x20DC60u;
    SET_GPR_U32(ctx, 31, 0x20DC68u);
    ctx->pc = 0x20DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC60u;
    // 0x20dc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE80u, 0x20DC60u, 0x20DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC68u;
label_20dc68:
    // 0x20dc68: 0x8e440108  lw          $a0, 0x108($s2)
    ctx->pc = 0x20dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_20dc6c:
    // 0x20dc6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_20dc70:
    if (ctx->pc == 0x20DC70u) {
        ctx->pc = 0x20DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC6Cu;
        // 0x20dc70: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC74u;
        goto label_20dc74;
    }
    ctx->pc = 0x20DC6Cu;
    {
        const bool branch_taken_0x20dc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC6Cu;
        // 0x20dc70: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc6c) {
            ctx->pc = 0x20DC88u;
            goto label_20dc88;
        }
    }
    ctx->pc = 0x20DC74u;
label_20dc74:
    // 0x20dc74: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_20dc78:
    if (ctx->pc == 0x20DC78u) {
        ctx->pc = 0x20DC7Cu;
        goto label_20dc7c;
    }
    ctx->pc = 0x20DC74u;
    {
        const bool branch_taken_0x20dc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20dc74) {
            ctx->pc = 0x20DC88u;
            goto label_20dc88;
        }
    }
    ctx->pc = 0x20DC7Cu;
label_20dc7c:
    // 0x20dc7c: 0xc0c3212  jal         func_30C848
label_20dc80:
    if (ctx->pc == 0x20DC80u) {
        ctx->pc = 0x20DC84u;
        goto label_20dc84;
    }
    ctx->pc = 0x20DC7Cu;
    SET_GPR_U32(ctx, 31, 0x20DC84u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x20DC7Cu, 0x20DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC84u;
label_20dc84:
    // 0x20dc84: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x20dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20dc88:
    // 0x20dc88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20dc8c:
    if (ctx->pc == 0x20DC8Cu) {
        ctx->pc = 0x20DC90u;
        goto label_20dc90;
    }
    ctx->pc = 0x20DC88u;
    {
        const bool branch_taken_0x20dc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc88) {
            ctx->pc = 0x20DCB4u;
            goto label_20dcb4;
        }
    }
    ctx->pc = 0x20DC90u;
label_20dc90:
    // 0x20dc90: 0xc0844da  jal         func_211368
label_20dc94:
    if (ctx->pc == 0x20DC94u) {
        ctx->pc = 0x20DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC90u;
        // 0x20dc94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC98u;
        goto label_20dc98;
    }
    ctx->pc = 0x20DC90u;
    SET_GPR_U32(ctx, 31, 0x20DC98u);
    ctx->pc = 0x20DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC90u;
    // 0x20dc94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211368u, 0x20DC90u, 0x20DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC98u;
label_20dc98:
    // 0x20dc98: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x20dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20dc9c:
    // 0x20dc9c: 0xc084a46  jal         func_212918
label_20dca0:
    if (ctx->pc == 0x20DCA0u) {
        ctx->pc = 0x20DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC9Cu;
        // 0x20dca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCA4u;
        goto label_20dca4;
    }
    ctx->pc = 0x20DC9Cu;
    SET_GPR_U32(ctx, 31, 0x20DCA4u);
    ctx->pc = 0x20DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC9Cu;
    // 0x20dca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x20DC9Cu, 0x20DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCA4u;
label_20dca4:
    // 0x20dca4: 0xc0c3212  jal         func_30C848
label_20dca8:
    if (ctx->pc == 0x20DCA8u) {
        ctx->pc = 0x20DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCA4u;
        // 0x20dca8: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCACu;
        goto label_20dcac;
    }
    ctx->pc = 0x20DCA4u;
    SET_GPR_U32(ctx, 31, 0x20DCACu);
    ctx->pc = 0x20DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCA4u;
    // 0x20dca8: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x20DCA4u, 0x20DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCACu;
label_20dcac:
    // 0x20dcac: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dcb0:
    if (ctx->pc == 0x20DCB0u) {
        ctx->pc = 0x20DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCACu;
        // 0x20dcb0: 0xae400104  sw          $zero, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCB4u;
        goto label_20dcb4;
    }
    ctx->pc = 0x20DCACu;
    {
        const bool branch_taken_0x20dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCACu;
        // 0x20dcb0: 0xae400104  sw          $zero, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcac) {
            ctx->pc = 0x20DCBCu;
            goto label_20dcbc;
        }
    }
    ctx->pc = 0x20DCB4u;
label_20dcb4:
    // 0x20dcb4: 0xc0844ec  jal         func_2113B0
label_20dcb8:
    if (ctx->pc == 0x20DCB8u) {
        ctx->pc = 0x20DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCB4u;
        // 0x20dcb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCBCu;
        goto label_20dcbc;
    }
    ctx->pc = 0x20DCB4u;
    SET_GPR_U32(ctx, 31, 0x20DCBCu);
    ctx->pc = 0x20DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCB4u;
    // 0x20dcb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2113B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2113B0u, 0x20DCB4u, 0x20DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCBCu;
label_20dcbc:
    // 0x20dcbc: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_20dcc0:
    // 0x20dcc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_20dcc4:
    // 0x20dcc4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20dcc8:
    if (ctx->pc == 0x20DCC8u) {
        ctx->pc = 0x20DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCC4u;
        // 0x20dcc8: 0x8e4400c8  lw          $a0, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCCCu;
        goto label_20dccc;
    }
    ctx->pc = 0x20DCC4u;
    {
        const bool branch_taken_0x20dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dcc4) {
            ctx->pc = 0x20DCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DCC4u;
            // 0x20dcc8: 0x8e4400c8  lw          $a0, 0xC8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DCD8u;
            goto label_20dcd8;
        }
    }
    ctx->pc = 0x20DCCCu;
label_20dccc:
    // 0x20dccc: 0xc0871e2  jal         func_21C788
label_20dcd0:
    if (ctx->pc == 0x20DCD0u) {
        ctx->pc = 0x20DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCCCu;
        // 0x20dcd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCD4u;
        goto label_20dcd4;
    }
    ctx->pc = 0x20DCCCu;
    SET_GPR_U32(ctx, 31, 0x20DCD4u);
    ctx->pc = 0x20DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCCCu;
    // 0x20dcd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C788u, 0x20DCCCu, 0x20DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCD4u;
label_20dcd4:
    // 0x20dcd4: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x20dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_20dcd8:
    // 0x20dcd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_20dcdc:
    if (ctx->pc == 0x20DCDCu) {
        ctx->pc = 0x20DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCD8u;
        // 0x20dcdc: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCE0u;
        goto label_20dce0;
    }
    ctx->pc = 0x20DCD8u;
    {
        const bool branch_taken_0x20dcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dcd8) {
            ctx->pc = 0x20DCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DCD8u;
            // 0x20dcdc: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCE0u;
label_20dce0:
    // 0x20dce0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x20dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_20dce4:
    // 0x20dce4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20dce8:
    // 0x20dce8: 0x40f809  jalr        $v0
label_20dcec:
    if (ctx->pc == 0x20DCECu) {
        ctx->pc = 0x20DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE8u;
        // 0x20dcec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCF0u;
        goto label_20dcf0;
    }
    ctx->pc = 0x20DCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DCF0u);
        ctx->pc = 0x20DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE8u;
        // 0x20dcec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DCE8u, 0x20DCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DCF0u;
label_20dcf0:
    // 0x20dcf0: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x20dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20dcf4:
    // 0x20dcf4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_20dcf8:
    if (ctx->pc == 0x20DCF8u) {
        ctx->pc = 0x20DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF4u;
        // 0x20dcf8: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCFCu;
        goto label_20dcfc;
    }
    ctx->pc = 0x20DCF4u;
    {
        const bool branch_taken_0x20dcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF4u;
        // 0x20dcf8: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcf4) {
            ctx->pc = 0x20DD10u;
            goto label_20dd10;
        }
    }
    ctx->pc = 0x20DCFCu;
label_20dcfc:
    // 0x20dcfc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20dd00:
    // 0x20dd00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20dd04:
    // 0x20dd04: 0x40f809  jalr        $v0
label_20dd08:
    if (ctx->pc == 0x20DD08u) {
        ctx->pc = 0x20DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD04u;
        // 0x20dd08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD0Cu;
        goto label_20dd0c;
    }
    ctx->pc = 0x20DD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DD0Cu);
        ctx->pc = 0x20DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD04u;
        // 0x20dd08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD04u, 0x20DD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DD0Cu;
label_20dd0c:
    // 0x20dd0c: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x20dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
label_20dd10:
    // 0x20dd10: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x20dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_20dd14:
    // 0x20dd14: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_20dd18:
    if (ctx->pc == 0x20DD18u) {
        ctx->pc = 0x20DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD14u;
        // 0x20dd18: 0x8e5000cc  lw          $s0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD1Cu;
        goto label_20dd1c;
    }
    ctx->pc = 0x20DD14u;
    {
        const bool branch_taken_0x20dd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd14) {
            ctx->pc = 0x20DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD14u;
            // 0x20dd18: 0x8e5000cc  lw          $s0, 0xCC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD34u;
            goto label_20dd34;
        }
    }
    ctx->pc = 0x20DD1Cu;
label_20dd1c:
    // 0x20dd1c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_20dd20:
    // 0x20dd20: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20dd24:
    // 0x20dd24: 0x40f809  jalr        $v0
label_20dd28:
    if (ctx->pc == 0x20DD28u) {
        ctx->pc = 0x20DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD24u;
        // 0x20dd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD2Cu;
        goto label_20dd2c;
    }
    ctx->pc = 0x20DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DD2Cu);
        ctx->pc = 0x20DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD24u;
        // 0x20dd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD24u, 0x20DD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DD2Cu;
label_20dd2c:
    // 0x20dd2c: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x20dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
label_20dd30:
    // 0x20dd30: 0x8e5000cc  lw          $s0, 0xCC($s2)
    ctx->pc = 0x20dd30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_20dd34:
    // 0x20dd34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_20dd38:
    if (ctx->pc == 0x20DD38u) {
        ctx->pc = 0x20DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD34u;
        // 0x20dd38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD3Cu;
        goto label_20dd3c;
    }
    ctx->pc = 0x20DD34u;
    {
        const bool branch_taken_0x20dd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD34u;
        // 0x20dd38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd34) {
            ctx->pc = 0x20DD6Cu;
            goto label_20dd6c;
        }
    }
    ctx->pc = 0x20DD3Cu;
label_20dd3c:
    // 0x20dd3c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20dd40:
    // 0x20dd40: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20dd44:
    // 0x20dd44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20dd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dd48:
    // 0x20dd48: 0xc0419b8  jal         func_1066E0
label_20dd4c:
    if (ctx->pc == 0x20DD4Cu) {
        ctx->pc = 0x20DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD48u;
        // 0x20dd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD50u;
        goto label_20dd50;
    }
    ctx->pc = 0x20DD48u;
    SET_GPR_U32(ctx, 31, 0x20DD50u);
    ctx->pc = 0x20DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD48u;
    // 0x20dd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1066E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1066E0u, 0x20DD48u, 0x20DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD50u;
label_20dd50:
    // 0x20dd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dd54:
    // 0x20dd54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20dd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20dd58:
    // 0x20dd58: 0xc0419b8  jal         func_1066E0
label_20dd5c:
    if (ctx->pc == 0x20DD5Cu) {
        ctx->pc = 0x20DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD58u;
        // 0x20dd5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD60u;
        goto label_20dd60;
    }
    ctx->pc = 0x20DD58u;
    SET_GPR_U32(ctx, 31, 0x20DD60u);
    ctx->pc = 0x20DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD58u;
    // 0x20dd5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1066E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1066E0u, 0x20DD58u, 0x20DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD60u;
label_20dd60:
    // 0x20dd60: 0xc0f5222  jal         func_3D4888
label_20dd64:
    if (ctx->pc == 0x20DD64u) {
        ctx->pc = 0x20DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD60u;
        // 0x20dd64: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD68u;
        goto label_20dd68;
    }
    ctx->pc = 0x20DD60u;
    SET_GPR_U32(ctx, 31, 0x20DD68u);
    ctx->pc = 0x20DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD60u;
    // 0x20dd64: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x20DD60u, 0x20DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD68u;
label_20dd68:
    // 0x20dd68: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x20dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_20dd6c:
    // 0x20dd6c: 0x8e450130  lw          $a1, 0x130($s2)
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_20dd70:
    // 0x20dd70: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_20dd74:
    if (ctx->pc == 0x20DD74u) {
        ctx->pc = 0x20DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD70u;
        // 0x20dd74: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD78u;
        goto label_20dd78;
    }
    ctx->pc = 0x20DD70u;
    {
        const bool branch_taken_0x20dd70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD70u;
        // 0x20dd74: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd70) {
            ctx->pc = 0x20DD84u;
            goto label_20dd84;
        }
    }
    ctx->pc = 0x20DD78u;
label_20dd78:
    // 0x20dd78: 0xc0b2b08  jal         func_2CAC20
label_20dd7c:
    if (ctx->pc == 0x20DD7Cu) {
        ctx->pc = 0x20DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD78u;
        // 0x20dd7c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD80u;
        goto label_20dd80;
    }
    ctx->pc = 0x20DD78u;
    SET_GPR_U32(ctx, 31, 0x20DD80u);
    ctx->pc = 0x20DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD78u;
    // 0x20dd7c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x20DD78u, 0x20DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD80u;
label_20dd80:
    // 0x20dd80: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x20dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
label_20dd84:
    // 0x20dd84: 0x8e84bd30  lw          $a0, -0x42D0($s4)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
label_20dd88:
    // 0x20dd88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_20dd8c:
    if (ctx->pc == 0x20DD8Cu) {
        ctx->pc = 0x20DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD88u;
        // 0x20dd8c: 0x26a49b28  addiu       $a0, $s5, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD90u;
        goto label_20dd90;
    }
    ctx->pc = 0x20DD88u;
    {
        const bool branch_taken_0x20dd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd88) {
            ctx->pc = 0x20DD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD88u;
            // 0x20dd8c: 0x26a49b28  addiu       $a0, $s5, -0x64D8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD9Cu;
            goto label_20dd9c;
        }
    }
    ctx->pc = 0x20DD90u;
label_20dd90:
    // 0x20dd90: 0xc0b5bd0  jal         func_2D6F40
label_20dd94:
    if (ctx->pc == 0x20DD94u) {
        ctx->pc = 0x20DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD90u;
        // 0x20dd94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD98u;
        goto label_20dd98;
    }
    ctx->pc = 0x20DD90u;
    SET_GPR_U32(ctx, 31, 0x20DD98u);
    ctx->pc = 0x20DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD90u;
    // 0x20dd94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F40u, 0x20DD90u, 0x20DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD98u;
label_20dd98:
    // 0x20dd98: 0x26a49b28  addiu       $a0, $s5, -0x64D8
    ctx->pc = 0x20dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941480));
label_20dd9c:
    // 0x20dd9c: 0xc08037a  jal         func_200DE8
label_20dda0:
    if (ctx->pc == 0x20DDA0u) {
        ctx->pc = 0x20DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD9Cu;
        // 0x20dda0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDA4u;
        goto label_20dda4;
    }
    ctx->pc = 0x20DD9Cu;
    SET_GPR_U32(ctx, 31, 0x20DDA4u);
    ctx->pc = 0x20DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD9Cu;
    // 0x20dda0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200DE8u, 0x20DD9Cu, 0x20DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDA4u;
label_20dda4:
    // 0x20dda4: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x20dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_20dda8:
    // 0x20dda8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20ddac:
    if (ctx->pc == 0x20DDACu) {
        ctx->pc = 0x20DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA8u;
        // 0x20ddac: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDB0u;
        goto label_20ddb0;
    }
    ctx->pc = 0x20DDA8u;
    {
        const bool branch_taken_0x20dda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA8u;
        // 0x20ddac: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda8) {
            ctx->pc = 0x20DDBCu;
            goto label_20ddbc;
        }
    }
    ctx->pc = 0x20DDB0u;
label_20ddb0:
    // 0x20ddb0: 0xc0c497c  jal         func_3125F0
label_20ddb4:
    if (ctx->pc == 0x20DDB4u) {
        ctx->pc = 0x20DDB8u;
        goto label_20ddb8;
    }
    ctx->pc = 0x20DDB0u;
    SET_GPR_U32(ctx, 31, 0x20DDB8u);
    ctx->pc = 0x3125F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125F0u, 0x20DDB0u, 0x20DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDB8u;
label_20ddb8:
    // 0x20ddb8: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x20ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
label_20ddbc:
    // 0x20ddbc: 0x8e4401a4  lw          $a0, 0x1A4($s2)
    ctx->pc = 0x20ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_20ddc0:
    // 0x20ddc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_20ddc4:
    if (ctx->pc == 0x20DDC4u) {
        ctx->pc = 0x20DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC0u;
        // 0x20ddc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDC8u;
        goto label_20ddc8;
    }
    ctx->pc = 0x20DDC0u;
    {
        const bool branch_taken_0x20ddc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ddc0) {
            ctx->pc = 0x20DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DDC0u;
            // 0x20ddc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DDDCu;
            goto label_20dddc;
        }
    }
    ctx->pc = 0x20DDC8u;
label_20ddc8:
    // 0x20ddc8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20ddcc:
    // 0x20ddcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20ddd0:
    // 0x20ddd0: 0x40f809  jalr        $v0
label_20ddd4:
    if (ctx->pc == 0x20DDD4u) {
        ctx->pc = 0x20DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDD0u;
        // 0x20ddd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDD8u;
        goto label_20ddd8;
    }
    ctx->pc = 0x20DDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DDD8u);
        ctx->pc = 0x20DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDD0u;
        // 0x20ddd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DDD0u, 0x20DDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DDD8u;
label_20ddd8:
    // 0x20ddd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20ddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20dddc:
    // 0x20dddc: 0xc0d7412  jal         func_35D048
label_20dde0:
    if (ctx->pc == 0x20DDE0u) {
        ctx->pc = 0x20DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDDCu;
        // 0x20dde0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDE4u;
        goto label_20dde4;
    }
    ctx->pc = 0x20DDDCu;
    SET_GPR_U32(ctx, 31, 0x20DDE4u);
    ctx->pc = 0x20DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDDCu;
    // 0x20dde0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20DDDCu, 0x20DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDE4u;
label_20dde4:
    // 0x20dde4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x20dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20dde8:
    // 0x20dde8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20ddec:
    if (ctx->pc == 0x20DDECu) {
        ctx->pc = 0x20DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE8u;
        // 0x20ddec: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDF0u;
        goto label_20ddf0;
    }
    ctx->pc = 0x20DDE8u;
    {
        const bool branch_taken_0x20dde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE8u;
        // 0x20ddec: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dde8) {
            ctx->pc = 0x20DE10u;
            goto label_20de10;
        }
    }
    ctx->pc = 0x20DDF0u;
label_20ddf0:
    // 0x20ddf0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20ddf4:
    // 0x20ddf4: 0x0  nop
    ctx->pc = 0x20ddf4u;
    // NOP
label_20ddf8:
    // 0x20ddf8: 0xc0f75cc  jal         func_3DD730
label_20ddfc:
    if (ctx->pc == 0x20DDFCu) {
        ctx->pc = 0x20DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDF8u;
        // 0x20ddfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE00u;
        goto label_20de00;
    }
    ctx->pc = 0x20DDF8u;
    SET_GPR_U32(ctx, 31, 0x20DE00u);
    ctx->pc = 0x20DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDF8u;
    // 0x20ddfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD730u, 0x20DDF8u, 0x20DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE00u;
label_20de00:
    // 0x20de00: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20de04:
    // 0x20de04: 0x0  nop
    ctx->pc = 0x20de04u;
    // NOP
label_20de08:
    // 0x20de08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_20de0c:
    if (ctx->pc == 0x20DE0Cu) {
        ctx->pc = 0x20DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE08u;
        // 0x20de0c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE10u;
        goto label_20de10;
    }
    ctx->pc = 0x20DE08u;
    {
        const bool branch_taken_0x20de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20de08) {
            ctx->pc = 0x20DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DE08u;
            // 0x20de0c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ddf8;
        }
    }
    ctx->pc = 0x20DE10u;
label_20de10:
    // 0x20de10: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x20de10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_20de14:
    // 0x20de14: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20de14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_20de18:
    // 0x20de18: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x20de18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_20de1c:
    // 0x20de1c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_20de20:
    if (ctx->pc == 0x20DE20u) {
        ctx->pc = 0x20DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE1Cu;
        // 0x20de20: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE24u;
        goto label_20de24;
    }
    ctx->pc = 0x20DE1Cu;
    {
        const bool branch_taken_0x20de1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE1Cu;
        // 0x20de20: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de1c) {
            ctx->pc = 0x20DE2Cu;
            goto label_20de2c;
        }
    }
    ctx->pc = 0x20DE24u;
label_20de24:
    // 0x20de24: 0xc0f5222  jal         func_3D4888
label_20de28:
    if (ctx->pc == 0x20DE28u) {
        ctx->pc = 0x20DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE24u;
        // 0x20de28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE2Cu;
        goto label_20de2c;
    }
    ctx->pc = 0x20DE24u;
    SET_GPR_U32(ctx, 31, 0x20DE2Cu);
    ctx->pc = 0x20DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DE24u;
    // 0x20de28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x20DE24u, 0x20DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE2Cu;
label_20de2c:
    // 0x20de2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20de2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20de30:
    // 0x20de30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20de30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20de34:
    // 0x20de34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20de34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20de38:
    // 0x20de38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20de38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20de3c:
    // 0x20de3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20de3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20de40:
    // 0x20de40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20de40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20de44:
    // 0x20de44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20de44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20de48:
    // 0x20de48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x20de48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_20de4c:
    // 0x20de4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20de4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20de50:
    // 0x20de50: 0x3e00008  jr          $ra
label_20de54:
    if (ctx->pc == 0x20DE54u) {
        ctx->pc = 0x20DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE50u;
        // 0x20de54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE58u;
        goto label_fallthrough_0x20de50;
    }
    ctx->pc = 0x20DE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE50u;
        // 0x20de54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20de50:
    ctx->pc = 0x20DE58u;
}
