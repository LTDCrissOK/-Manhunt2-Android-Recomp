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

// Function: sub_003E9D60
// Address: 0x3e9d60 - 0x3e9e98
void sub_003E9D60_0x3e9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9D60_0x3e9d60");
#endif

    switch (ctx->pc) {
        case 0x3e9d60u: goto label_3e9d60;
        case 0x3e9d64u: goto label_3e9d64;
        case 0x3e9d68u: goto label_3e9d68;
        case 0x3e9d6cu: goto label_3e9d6c;
        case 0x3e9d70u: goto label_3e9d70;
        case 0x3e9d74u: goto label_3e9d74;
        case 0x3e9d78u: goto label_3e9d78;
        case 0x3e9d7cu: goto label_3e9d7c;
        case 0x3e9d80u: goto label_3e9d80;
        case 0x3e9d84u: goto label_3e9d84;
        case 0x3e9d88u: goto label_3e9d88;
        case 0x3e9d8cu: goto label_3e9d8c;
        case 0x3e9d90u: goto label_3e9d90;
        case 0x3e9d94u: goto label_3e9d94;
        case 0x3e9d98u: goto label_3e9d98;
        case 0x3e9d9cu: goto label_3e9d9c;
        case 0x3e9da0u: goto label_3e9da0;
        case 0x3e9da4u: goto label_3e9da4;
        case 0x3e9da8u: goto label_3e9da8;
        case 0x3e9dacu: goto label_3e9dac;
        case 0x3e9db0u: goto label_3e9db0;
        case 0x3e9db4u: goto label_3e9db4;
        case 0x3e9db8u: goto label_3e9db8;
        case 0x3e9dbcu: goto label_3e9dbc;
        case 0x3e9dc0u: goto label_3e9dc0;
        case 0x3e9dc4u: goto label_3e9dc4;
        case 0x3e9dc8u: goto label_3e9dc8;
        case 0x3e9dccu: goto label_3e9dcc;
        case 0x3e9dd0u: goto label_3e9dd0;
        case 0x3e9dd4u: goto label_3e9dd4;
        case 0x3e9dd8u: goto label_3e9dd8;
        case 0x3e9ddcu: goto label_3e9ddc;
        case 0x3e9de0u: goto label_3e9de0;
        case 0x3e9de4u: goto label_3e9de4;
        case 0x3e9de8u: goto label_3e9de8;
        case 0x3e9decu: goto label_3e9dec;
        case 0x3e9df0u: goto label_3e9df0;
        case 0x3e9df4u: goto label_3e9df4;
        case 0x3e9df8u: goto label_3e9df8;
        case 0x3e9dfcu: goto label_3e9dfc;
        case 0x3e9e00u: goto label_3e9e00;
        case 0x3e9e04u: goto label_3e9e04;
        case 0x3e9e08u: goto label_3e9e08;
        case 0x3e9e0cu: goto label_3e9e0c;
        case 0x3e9e10u: goto label_3e9e10;
        case 0x3e9e14u: goto label_3e9e14;
        case 0x3e9e18u: goto label_3e9e18;
        case 0x3e9e1cu: goto label_3e9e1c;
        case 0x3e9e20u: goto label_3e9e20;
        case 0x3e9e24u: goto label_3e9e24;
        case 0x3e9e28u: goto label_3e9e28;
        case 0x3e9e2cu: goto label_3e9e2c;
        case 0x3e9e30u: goto label_3e9e30;
        case 0x3e9e34u: goto label_3e9e34;
        case 0x3e9e38u: goto label_3e9e38;
        case 0x3e9e3cu: goto label_3e9e3c;
        case 0x3e9e40u: goto label_3e9e40;
        case 0x3e9e44u: goto label_3e9e44;
        case 0x3e9e48u: goto label_3e9e48;
        case 0x3e9e4cu: goto label_3e9e4c;
        case 0x3e9e50u: goto label_3e9e50;
        case 0x3e9e54u: goto label_3e9e54;
        case 0x3e9e58u: goto label_3e9e58;
        case 0x3e9e5cu: goto label_3e9e5c;
        case 0x3e9e60u: goto label_3e9e60;
        case 0x3e9e64u: goto label_3e9e64;
        case 0x3e9e68u: goto label_3e9e68;
        case 0x3e9e6cu: goto label_3e9e6c;
        case 0x3e9e70u: goto label_3e9e70;
        case 0x3e9e74u: goto label_3e9e74;
        case 0x3e9e78u: goto label_3e9e78;
        case 0x3e9e7cu: goto label_3e9e7c;
        case 0x3e9e80u: goto label_3e9e80;
        case 0x3e9e84u: goto label_3e9e84;
        case 0x3e9e88u: goto label_3e9e88;
        case 0x3e9e8cu: goto label_3e9e8c;
        case 0x3e9e90u: goto label_3e9e90;
        case 0x3e9e94u: goto label_3e9e94;
        default: break;
    }

    ctx->pc = 0x3e9d60u;

label_3e9d60:
    // 0x3e9d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9d64:
    // 0x3e9d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e9d68:
    // 0x3e9d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e9d6c:
    // 0x3e9d6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d70:
    // 0x3e9d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e9d74:
    // 0x3e9d74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e9d78:
    // 0x3e9d78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9d7c:
    // 0x3e9d7c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3e9d80:
    if (ctx->pc == 0x3E9D80u) {
        ctx->pc = 0x3E9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D7Cu;
        // 0x3e9d80: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D84u;
        goto label_3e9d84;
    }
    ctx->pc = 0x3E9D7Cu;
    {
        const bool branch_taken_0x3e9d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D7Cu;
        // 0x3e9d80: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d7c) {
            ctx->pc = 0x3E9DFCu;
            goto label_3e9dfc;
        }
    }
    ctx->pc = 0x3E9D84u;
label_3e9d84:
    // 0x3e9d84: 0x0  nop
    ctx->pc = 0x3e9d84u;
    // NOP
label_3e9d88:
    // 0x3e9d88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9d8c:
    // 0x3e9d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9d90:
    // 0x3e9d90: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9d94:
    if (ctx->pc == 0x3E9D94u) {
        ctx->pc = 0x3E9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D90u;
        // 0x3e9d94: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D98u;
        goto label_3e9d98;
    }
    ctx->pc = 0x3E9D90u;
    {
        const bool branch_taken_0x3e9d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9d90) {
            ctx->pc = 0x3E9D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9D90u;
            // 0x3e9d94: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9DECu;
            goto label_3e9dec;
        }
    }
    ctx->pc = 0x3E9D98u;
label_3e9d98:
    // 0x3e9d98: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9d9c:
    // 0x3e9d9c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9da0:
    // 0x3e9da0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9da4:
    // 0x3e9da4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9da8:
    if (ctx->pc == 0x3E9DA8u) {
        ctx->pc = 0x3E9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DA4u;
        // 0x3e9da8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DACu;
        goto label_3e9dac;
    }
    ctx->pc = 0x3E9DA4u;
    {
        const bool branch_taken_0x3e9da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9da4) {
            ctx->pc = 0x3E9DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9DA4u;
            // 0x3e9da8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9DD8u;
            goto label_3e9dd8;
        }
    }
    ctx->pc = 0x3E9DACu;
label_3e9dac:
    // 0x3e9dac: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9db0:
    // 0x3e9db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9db4:
    // 0x3e9db4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9db8:
    // 0x3e9db8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9dbc:
    // 0x3e9dbc: 0x40f809  jalr        $v0
label_3e9dc0:
    if (ctx->pc == 0x3E9DC0u) {
        ctx->pc = 0x3E9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DBCu;
        // 0x3e9dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DC4u;
        goto label_3e9dc4;
    }
    ctx->pc = 0x3E9DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9DC4u);
        ctx->pc = 0x3E9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DBCu;
        // 0x3e9dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9DBCu, 0x3E9DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9DC4u;
label_3e9dc4:
    // 0x3e9dc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9dc8:
    // 0x3e9dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9dcc:
    // 0x3e9dcc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9dd0:
    if (ctx->pc == 0x3E9DD0u) {
        ctx->pc = 0x3E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DCCu;
        // 0x3e9dd0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DD4u;
        goto label_3e9dd4;
    }
    ctx->pc = 0x3E9DCCu;
    {
        const bool branch_taken_0x3e9dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DCCu;
        // 0x3e9dd0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9dcc) {
            ctx->pc = 0x3E9DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9db0;
        }
    }
    ctx->pc = 0x3E9DD4u;
label_3e9dd4:
    // 0x3e9dd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9dd8:
    // 0x3e9dd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9ddc:
    // 0x3e9ddc: 0xc0f528a  jal         func_3D4A28
label_3e9de0:
    if (ctx->pc == 0x3E9DE0u) {
        ctx->pc = 0x3E9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DDCu;
        // 0x3e9de0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DE4u;
        goto label_3e9de4;
    }
    ctx->pc = 0x3E9DDCu;
    SET_GPR_U32(ctx, 31, 0x3E9DE4u);
    ctx->pc = 0x3E9DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DDCu;
    // 0x3e9de0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9DDCu, 0x3E9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DE4u;
label_3e9de4:
    // 0x3e9de4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9de8:
    // 0x3e9de8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9dec:
    // 0x3e9dec: 0xc0f5222  jal         func_3D4888
label_3e9df0:
    if (ctx->pc == 0x3E9DF0u) {
        ctx->pc = 0x3E9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DECu;
        // 0x3e9df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DF4u;
        goto label_3e9df4;
    }
    ctx->pc = 0x3E9DECu;
    SET_GPR_U32(ctx, 31, 0x3E9DF4u);
    ctx->pc = 0x3E9DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DECu;
    // 0x3e9df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9DECu, 0x3E9DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DF4u;
label_3e9df4:
    // 0x3e9df4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9df8:
    if (ctx->pc == 0x3E9DF8u) {
        ctx->pc = 0x3E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DF4u;
        // 0x3e9df8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9DFCu;
        goto label_3e9dfc;
    }
    ctx->pc = 0x3E9DF4u;
    {
        const bool branch_taken_0x3e9df4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9DF4u;
        // 0x3e9df8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9df4) {
            ctx->pc = 0x3E9D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9d88;
        }
    }
    ctx->pc = 0x3E9DFCu;
label_3e9dfc:
    // 0x3e9dfc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9e00:
    // 0x3e9e00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e9e04:
    if (ctx->pc == 0x3E9E04u) {
        ctx->pc = 0x3E9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E00u;
        // 0x3e9e04: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E08u;
        goto label_3e9e08;
    }
    ctx->pc = 0x3E9E00u;
    {
        const bool branch_taken_0x3e9e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E00u;
        // 0x3e9e04: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e00) {
            ctx->pc = 0x3E9E7Cu;
            goto label_3e9e7c;
        }
    }
    ctx->pc = 0x3E9E08u;
label_3e9e08:
    // 0x3e9e08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9e0c:
    // 0x3e9e0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9e10:
    // 0x3e9e10: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9e14:
    if (ctx->pc == 0x3E9E14u) {
        ctx->pc = 0x3E9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E10u;
        // 0x3e9e14: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E18u;
        goto label_3e9e18;
    }
    ctx->pc = 0x3E9E10u;
    {
        const bool branch_taken_0x3e9e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e10) {
            ctx->pc = 0x3E9E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9E10u;
            // 0x3e9e14: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9E6Cu;
            goto label_3e9e6c;
        }
    }
    ctx->pc = 0x3E9E18u;
label_3e9e18:
    // 0x3e9e18: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9e1c:
    // 0x3e9e1c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9e20:
    // 0x3e9e20: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9e24:
    // 0x3e9e24: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9e28:
    if (ctx->pc == 0x3E9E28u) {
        ctx->pc = 0x3E9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E24u;
        // 0x3e9e28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E2Cu;
        goto label_3e9e2c;
    }
    ctx->pc = 0x3E9E24u;
    {
        const bool branch_taken_0x3e9e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9e24) {
            ctx->pc = 0x3E9E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9E24u;
            // 0x3e9e28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9E58u;
            goto label_3e9e58;
        }
    }
    ctx->pc = 0x3E9E2Cu;
label_3e9e2c:
    // 0x3e9e2c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9e30:
    // 0x3e9e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9e34:
    // 0x3e9e34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9e38:
    // 0x3e9e38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9e3c:
    // 0x3e9e3c: 0x40f809  jalr        $v0
label_3e9e40:
    if (ctx->pc == 0x3E9E40u) {
        ctx->pc = 0x3E9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E3Cu;
        // 0x3e9e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E44u;
        goto label_3e9e44;
    }
    ctx->pc = 0x3E9E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9E44u);
        ctx->pc = 0x3E9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E3Cu;
        // 0x3e9e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9E3Cu, 0x3E9E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9E44u;
label_3e9e44:
    // 0x3e9e44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9e48:
    // 0x3e9e48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9e4c:
    // 0x3e9e4c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9e50:
    if (ctx->pc == 0x3E9E50u) {
        ctx->pc = 0x3E9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E4Cu;
        // 0x3e9e50: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E54u;
        goto label_3e9e54;
    }
    ctx->pc = 0x3E9E4Cu;
    {
        const bool branch_taken_0x3e9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E4Cu;
        // 0x3e9e50: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e4c) {
            ctx->pc = 0x3E9E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9e30;
        }
    }
    ctx->pc = 0x3E9E54u;
label_3e9e54:
    // 0x3e9e54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9e58:
    // 0x3e9e58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9e5c:
    // 0x3e9e5c: 0xc0f528a  jal         func_3D4A28
label_3e9e60:
    if (ctx->pc == 0x3E9E60u) {
        ctx->pc = 0x3E9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E5Cu;
        // 0x3e9e60: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E64u;
        goto label_3e9e64;
    }
    ctx->pc = 0x3E9E5Cu;
    SET_GPR_U32(ctx, 31, 0x3E9E64u);
    ctx->pc = 0x3E9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E5Cu;
    // 0x3e9e60: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9E5Cu, 0x3E9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E64u;
label_3e9e64:
    // 0x3e9e64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9e68:
    // 0x3e9e68: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9e6c:
    // 0x3e9e6c: 0xc0f5222  jal         func_3D4888
label_3e9e70:
    if (ctx->pc == 0x3E9E70u) {
        ctx->pc = 0x3E9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E6Cu;
        // 0x3e9e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E74u;
        goto label_3e9e74;
    }
    ctx->pc = 0x3E9E6Cu;
    SET_GPR_U32(ctx, 31, 0x3E9E74u);
    ctx->pc = 0x3E9E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E6Cu;
    // 0x3e9e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9E6Cu, 0x3E9E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E74u;
label_3e9e74:
    // 0x3e9e74: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9e78:
    if (ctx->pc == 0x3E9E78u) {
        ctx->pc = 0x3E9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E74u;
        // 0x3e9e78: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E7Cu;
        goto label_3e9e7c;
    }
    ctx->pc = 0x3E9E74u;
    {
        const bool branch_taken_0x3e9e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E74u;
        // 0x3e9e78: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e74) {
            ctx->pc = 0x3E9E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9e08;
        }
    }
    ctx->pc = 0x3E9E7Cu;
label_3e9e7c:
    // 0x3e9e7c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9e80:
    // 0x3e9e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9e84:
    // 0x3e9e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e9e88:
    // 0x3e9e88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e9e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9e8c:
    // 0x3e9e8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e9e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e9e90:
    // 0x3e9e90: 0x3e00008  jr          $ra
label_3e9e94:
    if (ctx->pc == 0x3E9E94u) {
        ctx->pc = 0x3E9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E90u;
        // 0x3e9e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9E98u;
        goto label_fallthrough_0x3e9e90;
    }
    ctx->pc = 0x3E9E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E90u;
        // 0x3e9e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9e90:
    ctx->pc = 0x3E9E98u;
}
