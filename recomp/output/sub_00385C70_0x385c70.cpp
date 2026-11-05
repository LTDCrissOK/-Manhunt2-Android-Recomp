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

// Function: sub_00385C70
// Address: 0x385c70 - 0x385e38
void sub_00385C70_0x385c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385C70_0x385c70");
#endif

    switch (ctx->pc) {
        case 0x385c70u: goto label_385c70;
        case 0x385c74u: goto label_385c74;
        case 0x385c78u: goto label_385c78;
        case 0x385c7cu: goto label_385c7c;
        case 0x385c80u: goto label_385c80;
        case 0x385c84u: goto label_385c84;
        case 0x385c88u: goto label_385c88;
        case 0x385c8cu: goto label_385c8c;
        case 0x385c90u: goto label_385c90;
        case 0x385c94u: goto label_385c94;
        case 0x385c98u: goto label_385c98;
        case 0x385c9cu: goto label_385c9c;
        case 0x385ca0u: goto label_385ca0;
        case 0x385ca4u: goto label_385ca4;
        case 0x385ca8u: goto label_385ca8;
        case 0x385cacu: goto label_385cac;
        case 0x385cb0u: goto label_385cb0;
        case 0x385cb4u: goto label_385cb4;
        case 0x385cb8u: goto label_385cb8;
        case 0x385cbcu: goto label_385cbc;
        case 0x385cc0u: goto label_385cc0;
        case 0x385cc4u: goto label_385cc4;
        case 0x385cc8u: goto label_385cc8;
        case 0x385cccu: goto label_385ccc;
        case 0x385cd0u: goto label_385cd0;
        case 0x385cd4u: goto label_385cd4;
        case 0x385cd8u: goto label_385cd8;
        case 0x385cdcu: goto label_385cdc;
        case 0x385ce0u: goto label_385ce0;
        case 0x385ce4u: goto label_385ce4;
        case 0x385ce8u: goto label_385ce8;
        case 0x385cecu: goto label_385cec;
        case 0x385cf0u: goto label_385cf0;
        case 0x385cf4u: goto label_385cf4;
        case 0x385cf8u: goto label_385cf8;
        case 0x385cfcu: goto label_385cfc;
        case 0x385d00u: goto label_385d00;
        case 0x385d04u: goto label_385d04;
        case 0x385d08u: goto label_385d08;
        case 0x385d0cu: goto label_385d0c;
        case 0x385d10u: goto label_385d10;
        case 0x385d14u: goto label_385d14;
        case 0x385d18u: goto label_385d18;
        case 0x385d1cu: goto label_385d1c;
        case 0x385d20u: goto label_385d20;
        case 0x385d24u: goto label_385d24;
        case 0x385d28u: goto label_385d28;
        case 0x385d2cu: goto label_385d2c;
        case 0x385d30u: goto label_385d30;
        case 0x385d34u: goto label_385d34;
        case 0x385d38u: goto label_385d38;
        case 0x385d3cu: goto label_385d3c;
        case 0x385d40u: goto label_385d40;
        case 0x385d44u: goto label_385d44;
        case 0x385d48u: goto label_385d48;
        case 0x385d4cu: goto label_385d4c;
        case 0x385d50u: goto label_385d50;
        case 0x385d54u: goto label_385d54;
        case 0x385d58u: goto label_385d58;
        case 0x385d5cu: goto label_385d5c;
        case 0x385d60u: goto label_385d60;
        case 0x385d64u: goto label_385d64;
        case 0x385d68u: goto label_385d68;
        case 0x385d6cu: goto label_385d6c;
        case 0x385d70u: goto label_385d70;
        case 0x385d74u: goto label_385d74;
        case 0x385d78u: goto label_385d78;
        case 0x385d7cu: goto label_385d7c;
        case 0x385d80u: goto label_385d80;
        case 0x385d84u: goto label_385d84;
        case 0x385d88u: goto label_385d88;
        case 0x385d8cu: goto label_385d8c;
        case 0x385d90u: goto label_385d90;
        case 0x385d94u: goto label_385d94;
        case 0x385d98u: goto label_385d98;
        case 0x385d9cu: goto label_385d9c;
        case 0x385da0u: goto label_385da0;
        case 0x385da4u: goto label_385da4;
        case 0x385da8u: goto label_385da8;
        case 0x385dacu: goto label_385dac;
        case 0x385db0u: goto label_385db0;
        case 0x385db4u: goto label_385db4;
        case 0x385db8u: goto label_385db8;
        case 0x385dbcu: goto label_385dbc;
        case 0x385dc0u: goto label_385dc0;
        case 0x385dc4u: goto label_385dc4;
        case 0x385dc8u: goto label_385dc8;
        case 0x385dccu: goto label_385dcc;
        case 0x385dd0u: goto label_385dd0;
        case 0x385dd4u: goto label_385dd4;
        case 0x385dd8u: goto label_385dd8;
        case 0x385ddcu: goto label_385ddc;
        case 0x385de0u: goto label_385de0;
        case 0x385de4u: goto label_385de4;
        case 0x385de8u: goto label_385de8;
        case 0x385decu: goto label_385dec;
        case 0x385df0u: goto label_385df0;
        case 0x385df4u: goto label_385df4;
        case 0x385df8u: goto label_385df8;
        case 0x385dfcu: goto label_385dfc;
        case 0x385e00u: goto label_385e00;
        case 0x385e04u: goto label_385e04;
        case 0x385e08u: goto label_385e08;
        case 0x385e0cu: goto label_385e0c;
        case 0x385e10u: goto label_385e10;
        case 0x385e14u: goto label_385e14;
        case 0x385e18u: goto label_385e18;
        case 0x385e1cu: goto label_385e1c;
        case 0x385e20u: goto label_385e20;
        case 0x385e24u: goto label_385e24;
        case 0x385e28u: goto label_385e28;
        case 0x385e2cu: goto label_385e2c;
        case 0x385e30u: goto label_385e30;
        case 0x385e34u: goto label_385e34;
        default: break;
    }

    ctx->pc = 0x385c70u;

label_385c70:
    // 0x385c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x385c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_385c74:
    // 0x385c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385c78:
    // 0x385c78: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x385c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_385c7c:
    // 0x385c7c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x385c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_385c80:
    // 0x385c80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x385c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385c84:
    // 0x385c84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x385c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_385c88:
    // 0x385c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x385c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385c8c:
    // 0x385c8c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x385c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_385c90:
    // 0x385c90: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x385c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_385c94:
    // 0x385c94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x385c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_385c98:
    // 0x385c98: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x385c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_385c9c:
    // 0x385c9c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_385ca0:
    if (ctx->pc == 0x385CA0u) {
        ctx->pc = 0x385CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C9Cu;
        // 0x385ca0: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CA4u;
        goto label_385ca4;
    }
    ctx->pc = 0x385C9Cu;
    {
        const bool branch_taken_0x385c9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x385CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C9Cu;
        // 0x385ca0: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c9c) {
            ctx->pc = 0x385CB0u;
            goto label_385cb0;
        }
    }
    ctx->pc = 0x385CA4u;
label_385ca4:
    // 0x385ca4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x385ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_385ca8:
    // 0x385ca8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_385cac:
    if (ctx->pc == 0x385CACu) {
        ctx->pc = 0x385CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CA8u;
        // 0x385cac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CB0u;
        goto label_385cb0;
    }
    ctx->pc = 0x385CA8u;
    {
        const bool branch_taken_0x385ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385ca8) {
            ctx->pc = 0x385CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385CA8u;
            // 0x385cac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385CB8u;
            goto label_385cb8;
        }
    }
    ctx->pc = 0x385CB0u;
label_385cb0:
    // 0x385cb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x385cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385cb4:
    // 0x385cb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x385cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_385cb8:
    // 0x385cb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_385cbc:
    if (ctx->pc == 0x385CBCu) {
        ctx->pc = 0x385CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CB8u;
        // 0x385cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CC0u;
        goto label_385cc0;
    }
    ctx->pc = 0x385CB8u;
    {
        const bool branch_taken_0x385cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CB8u;
        // 0x385cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385cb8) {
            ctx->pc = 0x385CCCu;
            goto label_385ccc;
        }
    }
    ctx->pc = 0x385CC0u;
label_385cc0:
    // 0x385cc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x385cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_385cc4:
    // 0x385cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385cc8:
    // 0x385cc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x385cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_385ccc:
    // 0x385ccc: 0xc0e1612  jal         func_385848
label_385cd0:
    if (ctx->pc == 0x385CD0u) {
        ctx->pc = 0x385CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CCCu;
        // 0x385cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CD4u;
        goto label_385cd4;
    }
    ctx->pc = 0x385CCCu;
    SET_GPR_U32(ctx, 31, 0x385CD4u);
    ctx->pc = 0x385CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CCCu;
    // 0x385cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385848u, 0x385CCCu, 0x385CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CD4u;
label_385cd4:
    // 0x385cd4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_385cd8:
    if (ctx->pc == 0x385CD8u) {
        ctx->pc = 0x385CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CD4u;
        // 0x385cd8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CDCu;
        goto label_385cdc;
    }
    ctx->pc = 0x385CD4u;
    {
        const bool branch_taken_0x385cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385cd4) {
            ctx->pc = 0x385CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385CD4u;
            // 0x385cd8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385CF0u;
            goto label_385cf0;
        }
    }
    ctx->pc = 0x385CDCu;
label_385cdc:
    // 0x385cdc: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_385ce0:
    if (ctx->pc == 0x385CE0u) {
        ctx->pc = 0x385CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CDCu;
        // 0x385ce0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CE4u;
        goto label_385ce4;
    }
    ctx->pc = 0x385CDCu;
    {
        const bool branch_taken_0x385cdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x385cdc) {
            ctx->pc = 0x385CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385CDCu;
            // 0x385ce0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385CF0u;
            goto label_385cf0;
        }
    }
    ctx->pc = 0x385CE4u;
label_385ce4:
    // 0x385ce4: 0xc0e187c  jal         func_3861F0
label_385ce8:
    if (ctx->pc == 0x385CE8u) {
        ctx->pc = 0x385CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CE4u;
        // 0x385ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CECu;
        goto label_385cec;
    }
    ctx->pc = 0x385CE4u;
    SET_GPR_U32(ctx, 31, 0x385CECu);
    ctx->pc = 0x385CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CE4u;
    // 0x385ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3861F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3861F0u, 0x385CE4u, 0x385CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CECu;
label_385cec:
    // 0x385cec: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x385cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_385cf0:
    // 0x385cf0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_385cf4:
    if (ctx->pc == 0x385CF4u) {
        ctx->pc = 0x385CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CF0u;
        // 0x385cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CF8u;
        goto label_385cf8;
    }
    ctx->pc = 0x385CF0u;
    {
        const bool branch_taken_0x385cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CF0u;
        // 0x385cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385cf0) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385CF8u;
label_385cf8:
    // 0x385cf8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x385cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385cfc:
    // 0x385cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385d00:
    // 0x385d00: 0xc0e3b9e  jal         func_38EE78
label_385d04:
    if (ctx->pc == 0x385D04u) {
        ctx->pc = 0x385D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D00u;
        // 0x385d04: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D08u;
        goto label_385d08;
    }
    ctx->pc = 0x385D00u;
    SET_GPR_U32(ctx, 31, 0x385D08u);
    ctx->pc = 0x385D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D00u;
    // 0x385d04: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE78u, 0x385D00u, 0x385D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D08u;
label_385d08:
    // 0x385d08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_385d0c:
    if (ctx->pc == 0x385D0Cu) {
        ctx->pc = 0x385D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D08u;
        // 0x385d0c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D10u;
        goto label_385d10;
    }
    ctx->pc = 0x385D08u;
    {
        const bool branch_taken_0x385d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385d08) {
            ctx->pc = 0x385D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385D08u;
            // 0x385d0c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385D24u;
            goto label_385d24;
        }
    }
    ctx->pc = 0x385D10u;
label_385d10:
    // 0x385d10: 0xc0e1b4a  jal         func_386D28
label_385d14:
    if (ctx->pc == 0x385D14u) {
        ctx->pc = 0x385D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D10u;
        // 0x385d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D18u;
        goto label_385d18;
    }
    ctx->pc = 0x385D10u;
    SET_GPR_U32(ctx, 31, 0x385D18u);
    ctx->pc = 0x385D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D10u;
    // 0x385d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D28u, 0x385D10u, 0x385D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D18u;
label_385d18:
    // 0x385d18: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x385d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_385d1c:
    // 0x385d1c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_385d20:
    if (ctx->pc == 0x385D20u) {
        ctx->pc = 0x385D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D1Cu;
        // 0x385d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D24u;
        goto label_385d24;
    }
    ctx->pc = 0x385D1Cu;
    {
        const bool branch_taken_0x385d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D1Cu;
        // 0x385d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d1c) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385D24u;
label_385d24:
    // 0x385d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x385d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_385d28:
    // 0x385d28: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x385d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_385d2c:
    // 0x385d2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x385d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_385d30:
    // 0x385d30: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x385d30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_385d34:
    // 0x385d34: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_385d38:
    if (ctx->pc == 0x385D38u) {
        ctx->pc = 0x385D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D34u;
        // 0x385d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D3Cu;
        goto label_385d3c;
    }
    ctx->pc = 0x385D34u;
    {
        const bool branch_taken_0x385d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x385D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D34u;
        // 0x385d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d34) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385D3Cu;
label_385d3c:
    // 0x385d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385d40:
    // 0x385d40: 0xc0e1612  jal         func_385848
label_385d44:
    if (ctx->pc == 0x385D44u) {
        ctx->pc = 0x385D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D40u;
        // 0x385d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D48u;
        goto label_385d48;
    }
    ctx->pc = 0x385D40u;
    SET_GPR_U32(ctx, 31, 0x385D48u);
    ctx->pc = 0x385D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D40u;
    // 0x385d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385848u, 0x385D40u, 0x385D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D48u;
label_385d48:
    // 0x385d48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x385d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385d4c:
    // 0x385d4c: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x385d4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_385d50:
    // 0x385d50: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_385d54:
    if (ctx->pc == 0x385D54u) {
        ctx->pc = 0x385D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D50u;
        // 0x385d54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D58u;
        goto label_385d58;
    }
    ctx->pc = 0x385D50u;
    {
        const bool branch_taken_0x385d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D50u;
        // 0x385d54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d50) {
            ctx->pc = 0x385D6Cu;
            goto label_385d6c;
        }
    }
    ctx->pc = 0x385D58u;
label_385d58:
    // 0x385d58: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_385d5c:
    if (ctx->pc == 0x385D5Cu) {
        ctx->pc = 0x385D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D58u;
        // 0x385d5c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D60u;
        goto label_385d60;
    }
    ctx->pc = 0x385D58u;
    {
        const bool branch_taken_0x385d58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x385d58) {
            ctx->pc = 0x385D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385D58u;
            // 0x385d5c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385D70u;
            goto label_385d70;
        }
    }
    ctx->pc = 0x385D60u;
label_385d60:
    // 0x385d60: 0xc0e187c  jal         func_3861F0
label_385d64:
    if (ctx->pc == 0x385D64u) {
        ctx->pc = 0x385D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D60u;
        // 0x385d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D68u;
        goto label_385d68;
    }
    ctx->pc = 0x385D60u;
    SET_GPR_U32(ctx, 31, 0x385D68u);
    ctx->pc = 0x385D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D60u;
    // 0x385d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3861F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3861F0u, 0x385D60u, 0x385D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D68u;
label_385d68:
    // 0x385d68: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x385d68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_385d6c:
    // 0x385d6c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x385d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_385d70:
    // 0x385d70: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_385d74:
    if (ctx->pc == 0x385D74u) {
        ctx->pc = 0x385D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D70u;
        // 0x385d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D78u;
        goto label_385d78;
    }
    ctx->pc = 0x385D70u;
    {
        const bool branch_taken_0x385d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D70u;
        // 0x385d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d70) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385D78u;
label_385d78:
    // 0x385d78: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x385d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_385d7c:
    // 0x385d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385d80:
    // 0x385d80: 0xc0e1b7a  jal         func_386DE8
label_385d84:
    if (ctx->pc == 0x385D84u) {
        ctx->pc = 0x385D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D80u;
        // 0x385d84: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D88u;
        goto label_385d88;
    }
    ctx->pc = 0x385D80u;
    SET_GPR_U32(ctx, 31, 0x385D88u);
    ctx->pc = 0x385D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D80u;
    // 0x385d84: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386DE8u, 0x385D80u, 0x385D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D88u;
label_385d88:
    // 0x385d88: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x385d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_385d8c:
    // 0x385d8c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x385d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_385d90:
    // 0x385d90: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x385d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_385d94:
    // 0x385d94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x385d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_385d98:
    // 0x385d98: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x385d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_385d9c:
    // 0x385d9c: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x385d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_385da0:
    // 0x385da0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x385da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_385da4:
    // 0x385da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x385da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_385da8:
    // 0x385da8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_385dac:
    // 0x385dac: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x385dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_385db0:
    // 0x385db0: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_385db4:
    if (ctx->pc == 0x385DB4u) {
        ctx->pc = 0x385DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DB0u;
        // 0x385db4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DB8u;
        goto label_385db8;
    }
    ctx->pc = 0x385DB0u;
    {
        const bool branch_taken_0x385db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x385DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DB0u;
        // 0x385db4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385db0) {
            ctx->pc = 0x385E10u;
            goto label_385e10;
        }
    }
    ctx->pc = 0x385DB8u;
label_385db8:
    // 0x385db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385dbc:
    // 0x385dbc: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_385dc0:
    if (ctx->pc == 0x385DC0u) {
        ctx->pc = 0x385DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DBCu;
        // 0x385dc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DC4u;
        goto label_385dc4;
    }
    ctx->pc = 0x385DBCu;
    {
        const bool branch_taken_0x385dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DBCu;
        // 0x385dc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385dbc) {
            ctx->pc = 0x385E10u;
            goto label_385e10;
        }
    }
    ctx->pc = 0x385DC4u;
label_385dc4:
    // 0x385dc4: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x385dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_385dc8:
    // 0x385dc8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_385dcc:
    if (ctx->pc == 0x385DCCu) {
        ctx->pc = 0x385DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DC8u;
        // 0x385dcc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DD0u;
        goto label_385dd0;
    }
    ctx->pc = 0x385DC8u;
    {
        const bool branch_taken_0x385dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DC8u;
        // 0x385dcc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385dc8) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385DD0u;
label_385dd0:
    // 0x385dd0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x385dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_385dd4:
    // 0x385dd4: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_385dd8:
    if (ctx->pc == 0x385DD8u) {
        ctx->pc = 0x385DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DD4u;
        // 0x385dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DDCu;
        goto label_385ddc;
    }
    ctx->pc = 0x385DD4u;
    {
        const bool branch_taken_0x385dd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DD4u;
        // 0x385dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385dd4) {
            ctx->pc = 0x385E18u;
            goto label_385e18;
        }
    }
    ctx->pc = 0x385DDCu;
label_385ddc:
    // 0x385ddc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x385ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_385de0:
    // 0x385de0: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x385de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_385de4:
    // 0x385de4: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x385de4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385de8:
    // 0x385de8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x385de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_385dec:
    // 0x385dec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x385decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_385df0:
    // 0x385df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385df4:
    // 0x385df4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385df8:
    // 0x385df8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x385df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_385dfc:
    // 0x385dfc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x385dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_385e00:
    // 0x385e00: 0xe0f809  jalr        $a3
label_385e04:
    if (ctx->pc == 0x385E04u) {
        ctx->pc = 0x385E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E00u;
        // 0x385e04: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E08u;
        goto label_385e08;
    }
    ctx->pc = 0x385E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x385E08u);
        ctx->pc = 0x385E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E00u;
        // 0x385e04: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E00u, 0x385E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385E08u;
label_385e08:
    // 0x385e08: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x385e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_385e0c:
    // 0x385e0c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x385e0cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385e10:
    // 0x385e10: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x385e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_385e14:
    // 0x385e14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x385e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_385e18:
    // 0x385e18: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x385e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_385e1c:
    // 0x385e1c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x385e1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_385e20:
    // 0x385e20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x385e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385e24:
    // 0x385e24: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x385e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_385e28:
    // 0x385e28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x385e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_385e2c:
    // 0x385e2c: 0x3e00008  jr          $ra
label_385e30:
    if (ctx->pc == 0x385E30u) {
        ctx->pc = 0x385E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E2Cu;
        // 0x385e30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E34u;
        goto label_385e34;
    }
    ctx->pc = 0x385E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E2Cu;
        // 0x385e30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385E34u;
label_385e34:
    // 0x385e34: 0x0  nop
    ctx->pc = 0x385e34u;
    // NOP
    ctx->pc = 0x385e38u;
}
