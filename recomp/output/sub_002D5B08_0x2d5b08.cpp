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

// Function: sub_002D5B08
// Address: 0x2d5b08 - 0x2d5bd8
void sub_002D5B08_0x2d5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5B08_0x2d5b08");
#endif

    switch (ctx->pc) {
        case 0x2d5b38u: goto label_2d5b38;
        case 0x2d5b68u: goto label_2d5b68;
        default: break;
    }

    ctx->pc = 0x2d5b08u;

    // 0x2d5b08: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2d5b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b0c: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5b10: 0x1223818  mult        $a3, $t1, $v0
    ctx->pc = 0x2d5b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d5b14: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d5b14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b18: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x2d5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d5b1c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d5b20: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d5b24: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D5B24u;
    {
        const bool branch_taken_0x2d5b24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B24u;
        // 0x2d5b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b24) {
            ctx->pc = 0x2D5BD0u;
            goto label_2d5bd0;
        }
    }
    ctx->pc = 0x2D5B2Cu;
    // 0x2d5b2c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2d5b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b30: 0x240c0118  addiu       $t4, $zero, 0x118
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5b34: 0x8d480014  lw          $t0, 0x14($t2)
    ctx->pc = 0x2d5b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_2d5b38:
    // 0x2d5b38: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2d5b38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5b3c: 0x1682021  addu        $a0, $t3, $t0
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2d5b40: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d5b44: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2d5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2d5b48: 0x1466001d  bne         $v1, $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B48u;
        // 0x2d5b4c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5BC0u;
            goto label_2d5bc0;
        }
    }
    ctx->pc = 0x2D5B50u;
    // 0x2d5b50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d5b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5b58: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d5b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5b5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D5B5Cu;
    {
        const bool branch_taken_0x2d5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B5Cu;
        // 0x2d5b60: 0x12c4818  mult        $t1, $t1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b5c) {
            ctx->pc = 0x2D5BA4u;
            goto label_2d5ba4;
        }
    }
    ctx->pc = 0x2D5B64u;
    // 0x2d5b64: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d5b68:
    // 0x2d5b68: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2d5b6c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5b70: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x2d5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x2d5b74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d5b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5b78: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d5b7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5b80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d5b84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d5b88: 0x8d480014  lw          $t0, 0x14($t2)
    ctx->pc = 0x2d5b88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d5b8c: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x2d5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2d5b90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2d5b94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5b98: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d5b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5b9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D5B9Cu;
    {
        const bool branch_taken_0x2d5b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B9Cu;
        // 0x2d5ba0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b9c) {
            ctx->pc = 0x2D5B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5b68;
        }
    }
    ctx->pc = 0x2D5BA4u;
label_2d5ba4:
    // 0x2d5ba4: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x2d5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2d5ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5bac: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2d5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2d5bb0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2d5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d5bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d5bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BB8u;
        // 0x2d5bbc: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5BC0u;
label_2d5bc0:
    // 0x2d5bc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d5bc4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d5bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5bc8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D5BC8u;
    {
        const bool branch_taken_0x2d5bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5bc8) {
            ctx->pc = 0x2D5BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5BC8u;
            // 0x2d5bcc: 0x8d480014  lw          $t0, 0x14($t2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5b38;
        }
    }
    ctx->pc = 0x2D5BD0u;
label_2d5bd0:
    // 0x2d5bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BD0u;
        // 0x2d5bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5BD8u;
}
