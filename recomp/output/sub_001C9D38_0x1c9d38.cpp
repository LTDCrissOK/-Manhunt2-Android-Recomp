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

// Function: sub_001C9D38
// Address: 0x1c9d38 - 0x1c9f60
void sub_001C9D38_0x1c9d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9D38_0x1c9d38");
#endif

    switch (ctx->pc) {
        case 0x1c9d64u: goto label_1c9d64;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9dd8u: goto label_1c9dd8;
        case 0x1c9e04u: goto label_1c9e04;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e44u: goto label_1c9e44;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e80u: goto label_1c9e80;
        case 0x1c9e9cu: goto label_1c9e9c;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9ebcu: goto label_1c9ebc;
        case 0x1c9ed8u: goto label_1c9ed8;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9ef8u: goto label_1c9ef8;
        case 0x1c9f24u: goto label_1c9f24;
        default: break;
    }

    ctx->pc = 0x1c9d38u;

    // 0x1c9d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c9d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c9d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c9d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c9d50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c9d54: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c9d58: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x1c9d58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9d5c: 0xc07267a  jal         func_1C99E8
    ctx->pc = 0x1C9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D64u);
    ctx->pc = 0x1C9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D5Cu;
    // 0x1c9d60: 0x8c520274  lw          $s2, 0x274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99E8u, 0x1C9D5Cu, 0x1C9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D64u;
label_1c9d64:
    // 0x1c9d64: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c9d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c9d68: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c9d6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D6Cu;
    {
        const bool branch_taken_0x1c9d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D6Cu;
        // 0x1c9d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d6c) {
            ctx->pc = 0x1C9D84u;
            goto label_1c9d84;
        }
    }
    ctx->pc = 0x1C9D74u;
    // 0x1c9d74: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1c9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c9d78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D78u;
    {
        const bool branch_taken_0x1c9d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D78u;
        // 0x1c9d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d78) {
            ctx->pc = 0x1C9D84u;
            goto label_1c9d84;
        }
    }
    ctx->pc = 0x1C9D80u;
    // 0x1c9d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9d84:
    // 0x1c9d84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1C9DA8u;
            goto label_1c9da8;
        }
    }
    ctx->pc = 0x1C9D8Cu;
    // 0x1c9d8c: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D94u);
    ctx->pc = 0x1C9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D8Cu;
    // 0x1c9d90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9D8Cu, 0x1C9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D94u;
label_1c9d94:
    // 0x1c9d94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D94u;
    {
        const bool branch_taken_0x1c9d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d94) {
            ctx->pc = 0x1C9D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D94u;
            // 0x1c9d98: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9DACu;
            goto label_1c9dac;
        }
    }
    ctx->pc = 0x1C9D9Cu;
    // 0x1c9d9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9da0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9DA0u;
    {
        const bool branch_taken_0x1c9da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DA0u;
        // 0x1c9da4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9da0) {
            ctx->pc = 0x1C9DE8u;
            goto label_1c9de8;
        }
    }
    ctx->pc = 0x1C9DA8u;
label_1c9da8:
    // 0x1c9da8: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1c9dac:
    // 0x1c9dac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9DACu;
    {
        const bool branch_taken_0x1c9dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DACu;
        // 0x1c9db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dac) {
            ctx->pc = 0x1C9DC4u;
            goto label_1c9dc4;
        }
    }
    ctx->pc = 0x1C9DB4u;
    // 0x1c9db4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c9db8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9DB8u;
    {
        const bool branch_taken_0x1c9db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DB8u;
        // 0x1c9dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9db8) {
            ctx->pc = 0x1C9DC4u;
            goto label_1c9dc4;
        }
    }
    ctx->pc = 0x1C9DC0u;
    // 0x1c9dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9dc4:
    // 0x1c9dc4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9DC4u;
    {
        const bool branch_taken_0x1c9dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9dc4) {
            ctx->pc = 0x1C9DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9DC4u;
            // 0x1c9dc8: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9DF0u;
            goto label_1c9df0;
        }
    }
    ctx->pc = 0x1C9DCCu;
    // 0x1c9dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dd0: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9DD0u;
    SET_GPR_U32(ctx, 31, 0x1C9DD8u);
    ctx->pc = 0x1C9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DD0u;
    // 0x1c9dd4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9DD0u, 0x1C9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DD8u;
label_1c9dd8:
    // 0x1c9dd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9DD8u;
    {
        const bool branch_taken_0x1c9dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD8u;
        // 0x1c9ddc: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dd8) {
            ctx->pc = 0x1C9DECu;
            goto label_1c9dec;
        }
    }
    ctx->pc = 0x1C9DE0u;
    // 0x1c9de0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9de4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c9de8:
    // 0x1c9de8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1c9dec:
    // 0x1c9dec: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1c9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1c9df0:
    // 0x1c9df0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9DF0u;
    {
        const bool branch_taken_0x1c9df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9df0) {
            ctx->pc = 0x1C9DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9DF0u;
            // 0x1c9df4: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E18u;
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9DF8u;
    // 0x1c9df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dfc: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9DFCu;
    SET_GPR_U32(ctx, 31, 0x1C9E04u);
    ctx->pc = 0x1C9E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DFCu;
    // 0x1c9e00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9DFCu, 0x1C9E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E04u;
label_1c9e04:
    // 0x1c9e04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E04u;
    {
        const bool branch_taken_0x1c9e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e04) {
            ctx->pc = 0x1C9E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E04u;
            // 0x1c9e08: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E18u;
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E0Cu;
    // 0x1c9e0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9e10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9E10u;
    {
        const bool branch_taken_0x1c9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E10u;
        // 0x1c9e14: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e10) {
            ctx->pc = 0x1C9E38u;
            goto label_1c9e38;
        }
    }
    ctx->pc = 0x1C9E18u;
label_1c9e18:
    // 0x1c9e18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E18u;
    {
        const bool branch_taken_0x1c9e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E18u;
        // 0x1c9e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e18) {
            ctx->pc = 0x1C9E3Cu;
            goto label_1c9e3c;
        }
    }
    ctx->pc = 0x1C9E20u;
    // 0x1c9e20: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9E20u;
    SET_GPR_U32(ctx, 31, 0x1C9E28u);
    ctx->pc = 0x1C9E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E20u;
    // 0x1c9e24: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9E20u, 0x1C9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E28u;
label_1c9e28:
    // 0x1c9e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E28u;
    {
        const bool branch_taken_0x1c9e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E28u;
        // 0x1c9e2c: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e28) {
            ctx->pc = 0x1C9E3Cu;
            goto label_1c9e3c;
        }
    }
    ctx->pc = 0x1C9E30u;
    // 0x1c9e30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9e34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c9e38:
    // 0x1c9e38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1c9e3c:
    // 0x1c9e3c: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1C9E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E44u);
    ctx->pc = 0x1C9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E3Cu;
    // 0x1c9e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1C9E3Cu, 0x1C9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E44u;
label_1c9e44:
    // 0x1c9e44: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E44u;
    {
        const bool branch_taken_0x1c9e44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E44u;
        // 0x1c9e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e44) {
            ctx->pc = 0x1C9E68u;
            goto label_1c9e68;
        }
    }
    ctx->pc = 0x1C9E4Cu;
    // 0x1c9e4c: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E54u);
    ctx->pc = 0x1C9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E4Cu;
    // 0x1c9e50: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9E4Cu, 0x1C9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E54u;
label_1c9e54:
    // 0x1c9e54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E54u;
    {
        const bool branch_taken_0x1c9e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e54) {
            ctx->pc = 0x1C9E68u;
            goto label_1c9e68;
        }
    }
    ctx->pc = 0x1C9E5Cu;
    // 0x1c9e5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9e60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C9E60u;
    {
        const bool branch_taken_0x1c9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E60u;
        // 0x1c9e64: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e60) {
            ctx->pc = 0x1C9E90u;
            goto label_1c9e90;
        }
    }
    ctx->pc = 0x1C9E68u;
label_1c9e68:
    // 0x1c9e68: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1C9E68u;
    SET_GPR_U32(ctx, 31, 0x1C9E70u);
    ctx->pc = 0x1C9E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E68u;
    // 0x1c9e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1C9E68u, 0x1C9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E70u;
label_1c9e70:
    // 0x1c9e70: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E70u;
    {
        const bool branch_taken_0x1c9e70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E70u;
        // 0x1c9e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e70) {
            ctx->pc = 0x1C9E94u;
            goto label_1c9e94;
        }
    }
    ctx->pc = 0x1C9E78u;
    // 0x1c9e78: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9E78u;
    SET_GPR_U32(ctx, 31, 0x1C9E80u);
    ctx->pc = 0x1C9E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E78u;
    // 0x1c9e7c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9E78u, 0x1C9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E80u;
label_1c9e80:
    // 0x1c9e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E80u;
    {
        const bool branch_taken_0x1c9e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E80u;
        // 0x1c9e84: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e80) {
            ctx->pc = 0x1C9E94u;
            goto label_1c9e94;
        }
    }
    ctx->pc = 0x1C9E88u;
    // 0x1c9e88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9e8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c9e90:
    // 0x1c9e90: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1c9e94:
    // 0x1c9e94: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1C9E94u;
    SET_GPR_U32(ctx, 31, 0x1C9E9Cu);
    ctx->pc = 0x1C9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E94u;
    // 0x1c9e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1C9E94u, 0x1C9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E9Cu;
label_1c9e9c:
    // 0x1c9e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ea0: 0xc0d9108  jal         func_364420
    ctx->pc = 0x1C9EA0u;
    SET_GPR_U32(ctx, 31, 0x1C9EA8u);
    ctx->pc = 0x1C9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EA0u;
    // 0x1c9ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x1C9EA0u, 0x1C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EA8u;
label_1c9ea8:
    // 0x1c9ea8: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1c9ea8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9eac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9EACu;
    {
        const bool branch_taken_0x1c9eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EACu;
        // 0x1c9eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eac) {
            ctx->pc = 0x1C9ED0u;
            goto label_1c9ed0;
        }
    }
    ctx->pc = 0x1C9EB4u;
    // 0x1c9eb4: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9EB4u;
    SET_GPR_U32(ctx, 31, 0x1C9EBCu);
    ctx->pc = 0x1C9EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EB4u;
    // 0x1c9eb8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9EB4u, 0x1C9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EBCu;
label_1c9ebc:
    // 0x1c9ebc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9EBCu;
    {
        const bool branch_taken_0x1c9ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ebc) {
            ctx->pc = 0x1C9ED0u;
            goto label_1c9ed0;
        }
    }
    ctx->pc = 0x1C9EC4u;
    // 0x1c9ec4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9ec8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C9EC8u;
    {
        const bool branch_taken_0x1c9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EC8u;
        // 0x1c9ecc: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ec8) {
            ctx->pc = 0x1C9F08u;
            goto label_1c9f08;
        }
    }
    ctx->pc = 0x1C9ED0u;
label_1c9ed0:
    // 0x1c9ed0: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1C9ED0u;
    SET_GPR_U32(ctx, 31, 0x1C9ED8u);
    ctx->pc = 0x1C9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ED0u;
    // 0x1c9ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1C9ED0u, 0x1C9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ED8u;
label_1c9ed8:
    // 0x1c9ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9edc: 0xc0d9108  jal         func_364420
    ctx->pc = 0x1C9EDCu;
    SET_GPR_U32(ctx, 31, 0x1C9EE4u);
    ctx->pc = 0x1C9EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EDCu;
    // 0x1c9ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x1C9EDCu, 0x1C9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EE4u;
label_1c9ee4:
    // 0x1c9ee4: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1c9ee4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9ee8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9EE8u;
    {
        const bool branch_taken_0x1c9ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EE8u;
        // 0x1c9eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ee8) {
            ctx->pc = 0x1C9F0Cu;
            goto label_1c9f0c;
        }
    }
    ctx->pc = 0x1C9EF0u;
    // 0x1c9ef0: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1C9EF0u;
    SET_GPR_U32(ctx, 31, 0x1C9EF8u);
    ctx->pc = 0x1C9EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EF0u;
    // 0x1c9ef4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1C9EF0u, 0x1C9EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EF8u;
label_1c9ef8:
    // 0x1c9ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9EF8u;
    {
        const bool branch_taken_0x1c9ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EF8u;
        // 0x1c9efc: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ef8) {
            ctx->pc = 0x1C9F0Cu;
            goto label_1c9f0c;
        }
    }
    ctx->pc = 0x1C9F00u;
    // 0x1c9f00: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c9f08:
    // 0x1c9f08: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1c9f0c:
    // 0x1c9f0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9f10: 0x56620001  bnel        $s3, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9F10u;
    {
        const bool branch_taken_0x1c9f10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9f10) {
            ctx->pc = 0x1C9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F10u;
            // 0x1c9f14: 0xae33000c  sw          $s3, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9F18u;
            goto label_1c9f18;
        }
    }
    ctx->pc = 0x1C9F18u;
label_1c9f18:
    // 0x1c9f18: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1c9f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9f1c: 0xc0727d8  jal         func_1C9F60
    ctx->pc = 0x1C9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F24u);
    ctx->pc = 0x1C9F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F1Cu;
    // 0x1c9f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F60u, 0x1C9F1Cu, 0x1C9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F24u;
label_1c9f24:
    // 0x1c9f24: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c9f28: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9F28u;
    {
        const bool branch_taken_0x1c9f28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F28u;
        // 0x1c9f2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f28) {
            ctx->pc = 0x1C9F3Cu;
            goto label_1c9f3c;
        }
    }
    ctx->pc = 0x1C9F30u;
    // 0x1c9f30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9f34: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9F34u;
    {
        const bool branch_taken_0x1c9f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F34u;
        // 0x1c9f38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f34) {
            ctx->pc = 0x1C9F44u;
            goto label_1c9f44;
        }
    }
    ctx->pc = 0x1C9F3Cu;
label_1c9f3c:
    // 0x1c9f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9f44:
    // 0x1c9f44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c9f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c9f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9f54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F58u;
        // 0x1c9f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9F60u;
}
