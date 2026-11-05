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

// Function: sub_00233D30
// Address: 0x233d30 - 0x233ec8
void sub_00233D30_0x233d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D30_0x233d30");
#endif

    switch (ctx->pc) {
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        default: break;
    }

    ctx->pc = 0x233d30u;

label_233d30:
    // 0x233d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233d34:
    // 0x233d34: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x233d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_233d38:
    // 0x233d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233d3c:
    // 0x233d3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233d40:
    // 0x233d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233d44:
    // 0x233d44: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_233d48:
    // 0x233d48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_233d4c:
    // 0x233d4c: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
label_233d50:
    if (ctx->pc == 0x233D50u) {
        ctx->pc = 0x233D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D4Cu;
        // 0x233d50: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D54u;
        goto label_233d54;
    }
    ctx->pc = 0x233D4Cu;
    {
        const bool branch_taken_0x233d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D4Cu;
        // 0x233d50: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d4c) {
            ctx->pc = 0x233EB8u;
            goto label_233eb8;
        }
    }
    ctx->pc = 0x233D54u;
label_233d54:
    // 0x233d54: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x233d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_233d58:
    // 0x233d58: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_233d5c:
    if (ctx->pc == 0x233D5Cu) {
        ctx->pc = 0x233D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D58u;
        // 0x233d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D60u;
        goto label_233d60;
    }
    ctx->pc = 0x233D58u;
    {
        const bool branch_taken_0x233d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D58u;
        // 0x233d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d58) {
            ctx->pc = 0x233D88u;
            goto label_233d88;
        }
    }
    ctx->pc = 0x233D60u;
label_233d60:
    // 0x233d60: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x233d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_233d64:
    // 0x233d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_233d68:
    // 0x233d68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_233d6c:
    if (ctx->pc == 0x233D6Cu) {
        ctx->pc = 0x233D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D68u;
        // 0x233d6c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D70u;
        goto label_233d70;
    }
    ctx->pc = 0x233D68u;
    {
        const bool branch_taken_0x233d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D68u;
        // 0x233d6c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d68) {
            ctx->pc = 0x233D84u;
            goto label_233d84;
        }
    }
    ctx->pc = 0x233D70u;
label_233d70:
    // 0x233d70: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_233d74:
    // 0x233d74: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x233d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_233d78:
    // 0x233d78: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x233d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_233d7c:
    // 0x233d7c: 0x8c8395a0  lw          $v1, -0x6A60($a0)
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940064)));
label_233d80:
    // 0x233d80: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x233d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_233d84:
    // 0x233d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233d88:
    // 0x233d88: 0xc08f6ce  jal         func_23DB38
label_233d8c:
    if (ctx->pc == 0x233D8Cu) {
        ctx->pc = 0x233D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D88u;
        // 0x233d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D90u;
        goto label_233d90;
    }
    ctx->pc = 0x233D88u;
    SET_GPR_U32(ctx, 31, 0x233D90u);
    ctx->pc = 0x233D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D88u;
    // 0x233d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB38u, 0x233D88u, 0x233D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D90u;
label_233d90:
    // 0x233d90: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x233d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233d94:
    // 0x233d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233d98:
    // 0x233d98: 0x0  nop
    ctx->pc = 0x233d98u;
    // NOP
label_233d9c:
    // 0x233d9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x233d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233da0:
    // 0x233da0: 0x0  nop
    ctx->pc = 0x233da0u;
    // NOP
label_233da4:
    // 0x233da4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    {
        const bool branch_taken_0x233da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233da4) {
            ctx->pc = 0x233E3Cu;
            goto label_233e3c;
        }
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0xc08bc02  jal         func_22F008
label_233db0:
    if (ctx->pc == 0x233DB0u) {
        ctx->pc = 0x233DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DACu;
        // 0x233db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DB4u;
        goto label_233db4;
    }
    ctx->pc = 0x233DACu;
    SET_GPR_U32(ctx, 31, 0x233DB4u);
    ctx->pc = 0x233DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DACu;
    // 0x233db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F008u, 0x233DACu, 0x233DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DB4u;
label_233db4:
    // 0x233db4: 0x8e020388  lw          $v0, 0x388($s0)
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_233db8:
    // 0x233db8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_233dbc:
    if (ctx->pc == 0x233DBCu) {
        ctx->pc = 0x233DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DB8u;
        // 0x233dbc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DC0u;
        goto label_233dc0;
    }
    ctx->pc = 0x233DB8u;
    {
        const bool branch_taken_0x233db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DB8u;
        // 0x233dbc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233db8) {
            ctx->pc = 0x233DCCu;
            goto label_233dcc;
        }
    }
    ctx->pc = 0x233DC0u;
label_233dc0:
    // 0x233dc0: 0x8c420220  lw          $v0, 0x220($v0)
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
label_233dc4:
    // 0x233dc4: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
label_233dc8:
    if (ctx->pc == 0x233DC8u) {
        ctx->pc = 0x233DCCu;
        goto label_233dcc;
    }
    ctx->pc = 0x233DC4u;
    {
        const bool branch_taken_0x233dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x233dc4) {
            ctx->pc = 0x233E28u;
            goto label_233e28;
        }
    }
    ctx->pc = 0x233DCCu;
label_233dcc:
    // 0x233dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233dd0:
    // 0x233dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233dd4:
    // 0x233dd4: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x233dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_233dd8:
    // 0x233dd8: 0x40f809  jalr        $v0
label_233ddc:
    if (ctx->pc == 0x233DDCu) {
        ctx->pc = 0x233DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DD8u;
        // 0x233ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DE0u;
        goto label_233de0;
    }
    ctx->pc = 0x233DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233DE0u);
        ctx->pc = 0x233DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DD8u;
        // 0x233ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DD8u, 0x233DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233DE0u;
label_233de0:
    // 0x233de0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_233de4:
    if (ctx->pc == 0x233DE4u) {
        ctx->pc = 0x233DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DE0u;
        // 0x233de4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DE8u;
        goto label_233de8;
    }
    ctx->pc = 0x233DE0u;
    {
        const bool branch_taken_0x233de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DE0u;
        // 0x233de4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233de0) {
            ctx->pc = 0x233DFCu;
            goto label_233dfc;
        }
    }
    ctx->pc = 0x233DE8u;
label_233de8:
    // 0x233de8: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_233dec:
    // 0x233dec: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_233df0:
    // 0x233df0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_233df4:
    if (ctx->pc == 0x233DF4u) {
        ctx->pc = 0x233DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DF0u;
        // 0x233df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DF8u;
        goto label_233df8;
    }
    ctx->pc = 0x233DF0u;
    {
        const bool branch_taken_0x233df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DF0u;
        // 0x233df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233df0) {
            ctx->pc = 0x233E1Cu;
            goto label_233e1c;
        }
    }
    ctx->pc = 0x233DF8u;
label_233df8:
    // 0x233df8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x233df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_233dfc:
    // 0x233dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233e00:
    // 0x233e00: 0xc07146c  jal         func_1C51B0
label_233e04:
    if (ctx->pc == 0x233E04u) {
        ctx->pc = 0x233E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E00u;
        // 0x233e04: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E08u;
        goto label_233e08;
    }
    ctx->pc = 0x233E00u;
    SET_GPR_U32(ctx, 31, 0x233E08u);
    ctx->pc = 0x233E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E00u;
    // 0x233e04: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51B0u, 0x233E00u, 0x233E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E08u;
label_233e08:
    // 0x233e08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233e0c:
    // 0x233e0c: 0xc08dbd8  jal         func_236F60
label_233e10:
    if (ctx->pc == 0x233E10u) {
        ctx->pc = 0x233E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E0Cu;
        // 0x233e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E14u;
        goto label_233e14;
    }
    ctx->pc = 0x233E0Cu;
    SET_GPR_U32(ctx, 31, 0x233E14u);
    ctx->pc = 0x233E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E0Cu;
    // 0x233e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x233E0Cu, 0x233E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E14u;
label_233e14:
    // 0x233e14: 0x10000004  b           . + 4 + (0x4 << 2)
label_233e18:
    if (ctx->pc == 0x233E18u) {
        ctx->pc = 0x233E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E14u;
        // 0x233e18: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E1Cu;
        goto label_233e1c;
    }
    ctx->pc = 0x233E14u;
    {
        const bool branch_taken_0x233e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E14u;
        // 0x233e18: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e14) {
            ctx->pc = 0x233E28u;
            goto label_233e28;
        }
    }
    ctx->pc = 0x233E1Cu;
label_233e1c:
    // 0x233e1c: 0xc08dbd8  jal         func_236F60
label_233e20:
    if (ctx->pc == 0x233E20u) {
        ctx->pc = 0x233E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E1Cu;
        // 0x233e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E24u;
        goto label_233e24;
    }
    ctx->pc = 0x233E1Cu;
    SET_GPR_U32(ctx, 31, 0x233E24u);
    ctx->pc = 0x233E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E1Cu;
    // 0x233e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x233E1Cu, 0x233E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E24u;
label_233e24:
    // 0x233e24: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x233e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_233e28:
    // 0x233e28: 0x8c6201b4  lw          $v0, 0x1B4($v1)
    ctx->pc = 0x233e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_233e2c:
    // 0x233e2c: 0x40f809  jalr        $v0
label_233e30:
    if (ctx->pc == 0x233E30u) {
        ctx->pc = 0x233E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E2Cu;
        // 0x233e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E34u;
        goto label_233e34;
    }
    ctx->pc = 0x233E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233E34u);
        ctx->pc = 0x233E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E2Cu;
        // 0x233e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E2Cu, 0x233E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233E34u;
label_233e34:
    // 0x233e34: 0x1000000a  b           . + 4 + (0xA << 2)
label_233e38:
    if (ctx->pc == 0x233E38u) {
        ctx->pc = 0x233E3Cu;
        goto label_233e3c;
    }
    ctx->pc = 0x233E34u;
    {
        const bool branch_taken_0x233e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e34) {
            ctx->pc = 0x233E60u;
            goto label_233e60;
        }
    }
    ctx->pc = 0x233E3Cu;
label_233e3c:
    // 0x233e3c: 0xc08f644  jal         func_23D910
label_233e40:
    if (ctx->pc == 0x233E40u) {
        ctx->pc = 0x233E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E3Cu;
        // 0x233e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E44u;
        goto label_233e44;
    }
    ctx->pc = 0x233E3Cu;
    SET_GPR_U32(ctx, 31, 0x233E44u);
    ctx->pc = 0x233E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E3Cu;
    // 0x233e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D910u, 0x233E3Cu, 0x233E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E44u;
label_233e44:
    // 0x233e44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_233e48:
    if (ctx->pc == 0x233E48u) {
        ctx->pc = 0x233E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E44u;
        // 0x233e48: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E4Cu;
        goto label_233e4c;
    }
    ctx->pc = 0x233E44u;
    {
        const bool branch_taken_0x233e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E44u;
        // 0x233e48: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e44) {
            ctx->pc = 0x233E60u;
            goto label_233e60;
        }
    }
    ctx->pc = 0x233E4Cu;
label_233e4c:
    // 0x233e4c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x233e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_233e50:
    // 0x233e50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x233e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_233e54:
    // 0x233e54: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x233e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_233e58:
    // 0x233e58: 0x8c8395a0  lw          $v1, -0x6A60($a0)
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940064)));
label_233e5c:
    // 0x233e5c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x233e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_233e60:
    // 0x233e60: 0xc08983e  jal         func_2260F8
label_233e64:
    if (ctx->pc == 0x233E64u) {
        ctx->pc = 0x233E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E60u;
        // 0x233e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E68u;
        goto label_233e68;
    }
    ctx->pc = 0x233E60u;
    SET_GPR_U32(ctx, 31, 0x233E68u);
    ctx->pc = 0x233E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E60u;
    // 0x233e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260F8u, 0x233E60u, 0x233E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E68u;
label_233e68:
    // 0x233e68: 0xc08cefc  jal         func_233BF0
label_233e6c:
    if (ctx->pc == 0x233E6Cu) {
        ctx->pc = 0x233E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E68u;
        // 0x233e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E70u;
        goto label_233e70;
    }
    ctx->pc = 0x233E68u;
    SET_GPR_U32(ctx, 31, 0x233E70u);
    ctx->pc = 0x233E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E68u;
    // 0x233e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BF0u, 0x233E68u, 0x233E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E70u;
label_233e70:
    // 0x233e70: 0xc097014  jal         func_25C050
label_233e74:
    if (ctx->pc == 0x233E74u) {
        ctx->pc = 0x233E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E70u;
        // 0x233e74: 0x8e040fcc  lw          $a0, 0xFCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4044)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E78u;
        goto label_233e78;
    }
    ctx->pc = 0x233E70u;
    SET_GPR_U32(ctx, 31, 0x233E78u);
    ctx->pc = 0x233E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E70u;
    // 0x233e74: 0x8e040fcc  lw          $a0, 0xFCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4044)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C050u, 0x233E70u, 0x233E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E78u;
label_233e78:
    // 0x233e78: 0x8e020428  lw          $v0, 0x428($s0)
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
label_233e7c:
    // 0x233e7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_233e80:
    if (ctx->pc == 0x233E80u) {
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E84u;
        goto label_233e84;
    }
    ctx->pc = 0x233E7Cu;
    {
        const bool branch_taken_0x233e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e7c) {
            ctx->pc = 0x233E94u;
            goto label_233e94;
        }
    }
    ctx->pc = 0x233E84u;
label_233e84:
    // 0x233e84: 0xc092f50  jal         func_24BD40
label_233e88:
    if (ctx->pc == 0x233E88u) {
        ctx->pc = 0x233E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E84u;
        // 0x233e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E8Cu;
        goto label_233e8c;
    }
    ctx->pc = 0x233E84u;
    SET_GPR_U32(ctx, 31, 0x233E8Cu);
    ctx->pc = 0x233E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E84u;
    // 0x233e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BD40u, 0x233E84u, 0x233E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E8Cu;
label_233e8c:
    // 0x233e8c: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x233e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
label_233e90:
    // 0x233e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e94:
    // 0x233e94: 0xc08e966  jal         func_23A598
label_233e98:
    if (ctx->pc == 0x233E98u) {
        ctx->pc = 0x233E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E94u;
        // 0x233e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E9Cu;
        goto label_233e9c;
    }
    ctx->pc = 0x233E94u;
    SET_GPR_U32(ctx, 31, 0x233E9Cu);
    ctx->pc = 0x233E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E94u;
    // 0x233e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A598u, 0x233E94u, 0x233E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E9Cu;
label_233e9c:
    // 0x233e9c: 0xc08ba82  jal         func_22EA08
label_233ea0:
    if (ctx->pc == 0x233EA0u) {
        ctx->pc = 0x233EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E9Cu;
        // 0x233ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EA4u;
        goto label_233ea4;
    }
    ctx->pc = 0x233E9Cu;
    SET_GPR_U32(ctx, 31, 0x233EA4u);
    ctx->pc = 0x233EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E9Cu;
    // 0x233ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x233E9Cu, 0x233EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EA4u;
label_233ea4:
    // 0x233ea4: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x233ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
label_233ea8:
    // 0x233ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233eac:
    // 0x233eac: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x233eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_233eb0:
    // 0x233eb0: 0xc08fed2  jal         func_23FB48
label_233eb4:
    if (ctx->pc == 0x233EB4u) {
        ctx->pc = 0x233EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB0u;
        // 0x233eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EB8u;
        goto label_233eb8;
    }
    ctx->pc = 0x233EB0u;
    SET_GPR_U32(ctx, 31, 0x233EB8u);
    ctx->pc = 0x233EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EB0u;
    // 0x233eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x233EB0u, 0x233EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EB8u;
label_233eb8:
    // 0x233eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ebc:
    // 0x233ebc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233ec0:
    // 0x233ec0: 0x3e00008  jr          $ra
label_233ec4:
    if (ctx->pc == 0x233EC4u) {
        ctx->pc = 0x233EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EC0u;
        // 0x233ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EC8u;
        goto label_fallthrough_0x233ec0;
    }
    ctx->pc = 0x233EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EC0u;
        // 0x233ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x233ec0:
    ctx->pc = 0x233EC8u;
}
