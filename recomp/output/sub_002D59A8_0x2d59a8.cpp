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

// Function: sub_002D59A8
// Address: 0x2d59a8 - 0x2d5a78
void sub_002D59A8_0x2d59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D59A8_0x2d59a8");
#endif

    switch (ctx->pc) {
        case 0x2d59d8u: goto label_2d59d8;
        case 0x2d5a08u: goto label_2d5a08;
        default: break;
    }

    ctx->pc = 0x2d59a8u;

    // 0x2d59a8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2d59a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59ac: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d59acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d59b0: 0x1223818  mult        $a3, $t1, $v0
    ctx->pc = 0x2d59b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d59b4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d59b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59b8: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x2d59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d59bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d59c0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d59c4: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D59C4u;
    {
        const bool branch_taken_0x2d59c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59C4u;
        // 0x2d59c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59c4) {
            ctx->pc = 0x2D5A70u;
            goto label_2d5a70;
        }
    }
    ctx->pc = 0x2D59CCu;
    // 0x2d59cc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2d59ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59d0: 0x240c0118  addiu       $t4, $zero, 0x118
    ctx->pc = 0x2d59d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d59d4: 0x8d480014  lw          $t0, 0x14($t2)
    ctx->pc = 0x2d59d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_2d59d8:
    // 0x2d59d8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d59dc: 0x1682021  addu        $a0, $t3, $t0
    ctx->pc = 0x2d59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2d59e0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2d59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d59e4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d59e8: 0x1466001d  bne         $v1, $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D59E8u;
    {
        const bool branch_taken_0x2d59e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59E8u;
        // 0x2d59ec: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59e8) {
            ctx->pc = 0x2D5A60u;
            goto label_2d5a60;
        }
    }
    ctx->pc = 0x2D59F0u;
    // 0x2d59f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d59f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d59f8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d59f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d59fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D59FCu;
    {
        const bool branch_taken_0x2d59fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59FCu;
        // 0x2d5a00: 0x12c4818  mult        $t1, $t1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59fc) {
            ctx->pc = 0x2D5A44u;
            goto label_2d5a44;
        }
    }
    ctx->pc = 0x2D5A04u;
    // 0x2d5a04: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2d5a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d5a08:
    // 0x2d5a08: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2d5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2d5a0c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2d5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5a10: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2d5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d5a14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d5a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5a18: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2d5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d5a1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5a20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d5a24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d5a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d5a28: 0x8d480014  lw          $t0, 0x14($t2)
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d5a2c: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x2d5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2d5a30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d5a34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5a38: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d5a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5a3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D5A3Cu;
    {
        const bool branch_taken_0x2d5a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A3Cu;
        // 0x2d5a40: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a3c) {
            ctx->pc = 0x2D5A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5a08;
        }
    }
    ctx->pc = 0x2D5A44u;
label_2d5a44:
    // 0x2d5a44: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x2d5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d5a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5a4c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2d5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2d5a50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d5a58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A58u;
        // 0x2d5a5c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A60u;
label_2d5a60:
    // 0x2d5a60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d5a64: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d5a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5a68: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D5A68u;
    {
        const bool branch_taken_0x2d5a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a68) {
            ctx->pc = 0x2D5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A68u;
            // 0x2d5a6c: 0x8d480014  lw          $t0, 0x14($t2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d59d8;
        }
    }
    ctx->pc = 0x2D5A70u;
label_2d5a70:
    // 0x2d5a70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A70u;
        // 0x2d5a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A78u;
}
