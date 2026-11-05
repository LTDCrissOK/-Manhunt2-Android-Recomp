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

// Function: sub_001E7D40
// Address: 0x1e7d40 - 0x1e7e88
void sub_001E7D40_0x1e7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D40_0x1e7d40");
#endif

    switch (ctx->pc) {
        case 0x1e7d78u: goto label_1e7d78;
        case 0x1e7d94u: goto label_1e7d94;
        case 0x1e7db8u: goto label_1e7db8;
        case 0x1e7df8u: goto label_1e7df8;
        case 0x1e7e10u: goto label_1e7e10;
        case 0x1e7e40u: goto label_1e7e40;
        case 0x1e7e5cu: goto label_1e7e5c;
        default: break;
    }

    ctx->pc = 0x1e7d40u;

    // 0x1e7d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7d44: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e7d48: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e7d4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e7d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d50: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e7d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e7d54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e7d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d58: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e7d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e7d5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e7d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e7d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e7d64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e7d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d68: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e7d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e7d6c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e7d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e7d70: 0xc079de6  jal         func_1E7798
    ctx->pc = 0x1E7D70u;
    SET_GPR_U32(ctx, 31, 0x1E7D78u);
    ctx->pc = 0x1E7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D70u;
    // 0x1e7d74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7798u, 0x1E7D70u, 0x1E7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D78u;
label_1e7d78:
    // 0x1e7d78: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e7d7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7d80: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e7d8c: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E7D94u);
    ctx->pc = 0x1E7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D8Cu;
    // 0x1e7d90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E7D8Cu, 0x1E7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D94u;
label_1e7d94:
    // 0x1e7d94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e7d9c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7D9Cu;
    {
        const bool branch_taken_0x1e7d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D9Cu;
        // 0x1e7da0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d9c) {
            ctx->pc = 0x1E7DA8u;
            goto label_1e7da8;
        }
    }
    ctx->pc = 0x1E7DA4u;
    // 0x1e7da4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e7da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7da8:
    // 0x1e7da8: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E7DA8u;
    {
        const bool branch_taken_0x1e7da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DA8u;
        // 0x1e7dac: 0x3c110800  lui         $s1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7da8) {
            ctx->pc = 0x1E7E38u;
            goto label_1e7e38;
        }
    }
    ctx->pc = 0x1E7DB0u;
    // 0x1e7db0: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1e7db0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1e7db4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1e7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1e7db8:
    // 0x1e7db8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7dbc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1e7dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1e7dc0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7DC0u;
    {
        const bool branch_taken_0x1e7dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DC0u;
        // 0x1e7dc4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dc0) {
            ctx->pc = 0x1E7E14u;
            goto label_1e7e14;
        }
    }
    ctx->pc = 0x1E7DC8u;
    // 0x1e7dc8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1e7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1e7dcc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1e7dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1e7dd0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7DD0u;
    {
        const bool branch_taken_0x1e7dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DD0u;
        // 0x1e7dd4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd0) {
            ctx->pc = 0x1E7E18u;
            goto label_1e7e18;
        }
    }
    ctx->pc = 0x1E7DD8u;
    // 0x1e7dd8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1e7ddc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1e7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e7de0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1e7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e7de4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E7DE4u;
    {
        const bool branch_taken_0x1e7de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DE4u;
        // 0x1e7de8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7de4) {
            ctx->pc = 0x1E7E18u;
            goto label_1e7e18;
        }
    }
    ctx->pc = 0x1E7DECu;
    // 0x1e7dec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7df0: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E7DF0u;
    SET_GPR_U32(ctx, 31, 0x1E7DF8u);
    ctx->pc = 0x1E7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DF0u;
    // 0x1e7df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E7DF0u, 0x1E7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DF8u;
label_1e7df8:
    // 0x1e7df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7DF8u;
    {
        const bool branch_taken_0x1e7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DF8u;
        // 0x1e7dfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7df8) {
            ctx->pc = 0x1E7E10u;
            goto label_1e7e10;
        }
    }
    ctx->pc = 0x1E7E00u;
    // 0x1e7e00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e08: 0xc07a022  jal         func_1E8088
    ctx->pc = 0x1E7E08u;
    SET_GPR_U32(ctx, 31, 0x1E7E10u);
    ctx->pc = 0x1E7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E08u;
    // 0x1e7e0c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8088u, 0x1E7E08u, 0x1E7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E10u;
label_1e7e10:
    // 0x1e7e10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e7e14:
    // 0x1e7e14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7e18:
    // 0x1e7e18: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7E18u;
    {
        const bool branch_taken_0x1e7e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E18u;
        // 0x1e7e1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e18) {
            ctx->pc = 0x1E7E30u;
            goto label_1e7e30;
        }
    }
    ctx->pc = 0x1E7E20u;
    // 0x1e7e20: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e7e24: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7E24u;
    {
        const bool branch_taken_0x1e7e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E24u;
        // 0x1e7e28: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e24) {
            ctx->pc = 0x1E7E30u;
            goto label_1e7e30;
        }
    }
    ctx->pc = 0x1E7E2Cu;
    // 0x1e7e2c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1e7e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e7e30:
    // 0x1e7e30: 0x5600ffe1  bnel        $s0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E7E30u;
    {
        const bool branch_taken_0x1e7e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e30) {
            ctx->pc = 0x1E7E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7E30u;
            // 0x1e7e34: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7db8;
        }
    }
    ctx->pc = 0x1E7E38u;
label_1e7e38:
    // 0x1e7e38: 0xc079e08  jal         func_1E7820
    ctx->pc = 0x1E7E38u;
    SET_GPR_U32(ctx, 31, 0x1E7E40u);
    ctx->pc = 0x1E7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7820u, 0x1E7E38u, 0x1E7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E40u;
label_1e7e40:
    // 0x1e7e40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e7e44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e48: 0x8c4391f0  lw          $v1, -0x6E10($v0)
    ctx->pc = 0x1e7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e7e4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7E4Cu;
    {
        const bool branch_taken_0x1e7e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E4Cu;
        // 0x1e7e50: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e4c) {
            ctx->pc = 0x1E7E5Cu;
            goto label_1e7e5c;
        }
    }
    ctx->pc = 0x1E7E54u;
    // 0x1e7e54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E7E54u;
    SET_GPR_U32(ctx, 31, 0x1E7E5Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E7E54u, 0x1E7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E5Cu;
label_1e7e5c:
    // 0x1e7e5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e60: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e7e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e7e64: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e7e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7e68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7e6c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e7e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e7e70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e7e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7e74: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e7e74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e7e78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e7e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E7Cu;
        // 0x1e7e80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E84u;
    // 0x1e7e84: 0x0  nop
    ctx->pc = 0x1e7e84u;
    // NOP
    ctx->pc = 0x1e7e88u;
}
