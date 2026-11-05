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

// Function: sub_002B3C30
// Address: 0x2b3c30 - 0x2b3dc0
void sub_002B3C30_0x2b3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3C30_0x2b3c30");
#endif

    switch (ctx->pc) {
        case 0x2b3c54u: goto label_2b3c54;
        case 0x2b3c78u: goto label_2b3c78;
        case 0x2b3c9cu: goto label_2b3c9c;
        case 0x2b3cc0u: goto label_2b3cc0;
        case 0x2b3cd4u: goto label_2b3cd4;
        case 0x2b3ce8u: goto label_2b3ce8;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d28u: goto label_2b3d28;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d58u: goto label_2b3d58;
        case 0x2b3d74u: goto label_2b3d74;
        case 0x2b3d84u: goto label_2b3d84;
        case 0x2b3d9cu: goto label_2b3d9c;
        default: break;
    }

    ctx->pc = 0x2b3c30u;

    // 0x2b3c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b3c34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3c38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b3c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b3c44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b3c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b3c48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b3c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b3c4c: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x2B3C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C54u);
    ctx->pc = 0x2B3C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C4Cu;
    // 0x2b3c50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x2B3C4Cu, 0x2B3C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C54u;
label_2b3c54:
    // 0x2b3c54: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b3c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c5c: 0x2448f8c0  addiu       $t0, $v0, -0x740
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x2b3c60: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x2b3c60u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x46F8C0u));
    // 0x2b3c64: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x2b3c64u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x46F8C1u));
    // 0x2b3c68: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2b3c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3c6c: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x2b3c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b3c70: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B3C70u;
    SET_GPR_U32(ctx, 31, 0x2B3C78u);
    ctx->pc = 0x2B3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C70u;
    // 0x2b3c74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B3C70u, 0x2B3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C78u;
label_2b3c78:
    // 0x2b3c78: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3c7c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B3C7Cu;
    {
        const bool branch_taken_0x2b3c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C7Cu;
        // 0x2b3c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c7c) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3C84u;
    // 0x2b3c84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b3c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c8c: 0x2451ac90  addiu       $s1, $v0, -0x5370
    ctx->pc = 0x2b3c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x2b3c90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c94: 0xc0acf70  jal         func_2B3DC0
    ctx->pc = 0x2B3C94u;
    SET_GPR_U32(ctx, 31, 0x2B3C9Cu);
    ctx->pc = 0x2B3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C94u;
    // 0x2b3c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3DC0u, 0x2B3C94u, 0x2B3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C9Cu;
label_2b3c9c:
    // 0x2b3c9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ca0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3ca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3CA4u;
    {
        const bool branch_taken_0x2b3ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CA4u;
        // 0x2b3ca8: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ca4) {
            ctx->pc = 0x2B3CC8u;
            goto label_2b3cc8;
        }
    }
    ctx->pc = 0x2B3CACu;
    // 0x2b3cac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3CACu;
    {
        const bool branch_taken_0x2b3cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CACu;
        // 0x2b3cb0: 0x2665ac90  addiu       $a1, $s3, -0x5370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cac) {
            ctx->pc = 0x2B3CCCu;
            goto label_2b3ccc;
        }
    }
    ctx->pc = 0x2B3CB4u;
    // 0x2b3cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cb8: 0xc0aceba  jal         func_2B3AE8
    ctx->pc = 0x2B3CB8u;
    SET_GPR_U32(ctx, 31, 0x2B3CC0u);
    ctx->pc = 0x2B3CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CB8u;
    // 0x2b3cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3AE8u, 0x2B3CB8u, 0x2B3CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CC0u;
label_2b3cc0:
    // 0x2b3cc0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B3CC0u;
    {
        const bool branch_taken_0x2b3cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CC0u;
        // 0x2b3cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cc0) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3CC8u;
label_2b3cc8:
    // 0x2b3cc8: 0x2665ac90  addiu       $a1, $s3, -0x5370
    ctx->pc = 0x2b3cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945936));
label_2b3ccc:
    // 0x2b3ccc: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B3CCCu;
    SET_GPR_U32(ctx, 31, 0x2B3CD4u);
    ctx->pc = 0x2B3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CCCu;
    // 0x2b3cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B3CCCu, 0x2B3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CD4u;
label_2b3cd4:
    // 0x2b3cd4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3cd8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B3CD8u;
    {
        const bool branch_taken_0x2b3cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cd8) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3CE0u;
    // 0x2b3ce0: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B3CE0u;
    SET_GPR_U32(ctx, 31, 0x2B3CE8u);
    ctx->pc = 0x2B3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CE0u;
    // 0x2b3ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3CE0u, 0x2B3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CE8u;
label_2b3ce8:
    // 0x2b3ce8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3cec: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B3CECu;
    {
        const bool branch_taken_0x2b3cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3cec) {
            ctx->pc = 0x2B3CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3CECu;
            // 0x2b3cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3CF4u;
    // 0x2b3cf4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b3cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cfc: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3CFCu;
    SET_GPR_U32(ctx, 31, 0x2B3D04u);
    ctx->pc = 0x2B3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CFCu;
    // 0x2b3d00: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3CFCu, 0x2B3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D04u;
label_2b3d04:
    // 0x2b3d04: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3d08: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x2b3d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2b3d0c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B3D0Cu;
    {
        const bool branch_taken_0x2b3d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D0Cu;
        // 0x2b3d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d0c) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3D14u;
    // 0x2b3d14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b3d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d1c: 0x2451ac30  addiu       $s1, $v0, -0x53D0
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
    // 0x2b3d20: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3D20u;
    SET_GPR_U32(ctx, 31, 0x2B3D28u);
    ctx->pc = 0x2B3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D20u;
    // 0x2b3d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3D20u, 0x2B3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D28u;
label_2b3d28:
    // 0x2b3d28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3d2c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B3D2Cu;
    {
        const bool branch_taken_0x2b3d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D2Cu;
        // 0x2b3d30: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d2c) {
            ctx->pc = 0x2B3D84u;
            goto label_2b3d84;
        }
    }
    ctx->pc = 0x2B3D34u;
    // 0x2b3d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d38: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3D38u;
    SET_GPR_U32(ctx, 31, 0x2B3D40u);
    ctx->pc = 0x2B3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D38u;
    // 0x2b3d3c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3D38u, 0x2B3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D40u;
label_2b3d40:
    // 0x2b3d40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3d44: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B3D44u;
    {
        const bool branch_taken_0x2b3d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D44u;
        // 0x2b3d48: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d44) {
            ctx->pc = 0x2B3D84u;
            goto label_2b3d84;
        }
    }
    ctx->pc = 0x2B3D4Cu;
    // 0x2b3d4c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2b3d50: 0xc0acfd2  jal         func_2B3F48
    ctx->pc = 0x2B3D50u;
    SET_GPR_U32(ctx, 31, 0x2B3D58u);
    ctx->pc = 0x2B3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D50u;
    // 0x2b3d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F48u, 0x2B3D50u, 0x2B3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D58u;
label_2b3d58:
    // 0x2b3d58: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3d5c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3D5Cu;
    {
        const bool branch_taken_0x2b3d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D5Cu;
        // 0x2b3d60: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d5c) {
            ctx->pc = 0x2B3D84u;
            goto label_2b3d84;
        }
    }
    ctx->pc = 0x2B3D64u;
    // 0x2b3d64: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3D64u;
    {
        const bool branch_taken_0x2b3d64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D64u;
        // 0x2b3d68: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d64) {
            ctx->pc = 0x2B3D8Cu;
            goto label_2b3d8c;
        }
    }
    ctx->pc = 0x2B3D6Cu;
    // 0x2b3d6c: 0xc0ad038  jal         func_2B40E0
    ctx->pc = 0x2B3D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D74u);
    ctx->pc = 0x2B3D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D6Cu;
    // 0x2b3d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B40E0u, 0x2B3D6Cu, 0x2B3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D74u;
label_2b3d74:
    // 0x2b3d74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D74u;
    {
        const bool branch_taken_0x2b3d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D74u;
        // 0x2b3d78: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d74) {
            ctx->pc = 0x2B3D8Cu;
            goto label_2b3d8c;
        }
    }
    ctx->pc = 0x2B3D7Cu;
    // 0x2b3d7c: 0xc0acf9c  jal         func_2B3E70
    ctx->pc = 0x2B3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D84u);
    ctx->pc = 0x2B3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D7Cu;
    // 0x2b3d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3E70u, 0x2B3D7Cu, 0x2B3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D84u;
label_2b3d84:
    // 0x2b3d84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3D84u;
    {
        const bool branch_taken_0x2b3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D84u;
        // 0x2b3d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d84) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3D8Cu;
label_2b3d8c:
    // 0x2b3d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d90: 0x24a5ac91  addiu       $a1, $a1, -0x536F
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945937));
    // 0x2b3d94: 0xc0ad250  jal         func_2B4940
    ctx->pc = 0x2B3D94u;
    SET_GPR_U32(ctx, 31, 0x2B3D9Cu);
    ctx->pc = 0x2B3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D94u;
    // 0x2b3d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4940u, 0x2B3D94u, 0x2B3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D9Cu;
label_2b3d9c:
    // 0x2b3d9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b3d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b3da0:
    // 0x2b3da0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3da4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b3da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3da8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3dac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b3dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b3db0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b3db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB4u;
        // 0x2b3db8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3DBCu;
    // 0x2b3dbc: 0x0  nop
    ctx->pc = 0x2b3dbcu;
    // NOP
    ctx->pc = 0x2b3dc0u;
}
