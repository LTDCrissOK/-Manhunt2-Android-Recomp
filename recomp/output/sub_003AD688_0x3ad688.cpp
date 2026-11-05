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

// Function: sub_003AD688
// Address: 0x3ad688 - 0x3ad710
void sub_003AD688_0x3ad688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD688_0x3ad688");
#endif

    ctx->pc = 0x3ad688u;

    // 0x3ad688: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ad688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad68c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ad68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ad690: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3ad690u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ad694: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD694u;
    {
        const bool branch_taken_0x3ad694 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD694u;
        // 0x3ad698: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad694) {
            ctx->pc = 0x3AD6B0u;
            goto label_3ad6b0;
        }
    }
    ctx->pc = 0x3AD69Cu;
    // 0x3ad69c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ad69cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ad6a0: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x3ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x3ad6a4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AD6A4u;
    {
        const bool branch_taken_0x3ad6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A4u;
        // 0x3ad6a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6a4) {
            ctx->pc = 0x3AD708u;
            goto label_3ad708;
        }
    }
    ctx->pc = 0x3AD6ACu;
    // 0x3ad6ac: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x3ad6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_3ad6b0:
    // 0x3ad6b0: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD6B0u;
    {
        const bool branch_taken_0x3ad6b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ad6b0) {
            ctx->pc = 0x3AD6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD6B0u;
            // 0x3ad6b4: 0x90a60010  lbu         $a2, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD6CCu;
            goto label_3ad6cc;
        }
    }
    ctx->pc = 0x3AD6B8u;
    // 0x3ad6b8: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ad6b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ad6bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ad6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ad6c0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AD6C0u;
    {
        const bool branch_taken_0x3ad6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6C0u;
        // 0x3ad6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6c0) {
            ctx->pc = 0x3AD708u;
            goto label_3ad708;
        }
    }
    ctx->pc = 0x3AD6C8u;
    // 0x3ad6c8: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x3ad6c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3ad6cc:
    // 0x3ad6cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ad6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ad6d0: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD6D0u;
    {
        const bool branch_taken_0x3ad6d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6D0u;
        // 0x3ad6d4: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6d0) {
            ctx->pc = 0x3AD6ECu;
            goto label_3ad6ec;
        }
    }
    ctx->pc = 0x3AD6D8u;
    // 0x3ad6d8: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x3ad6d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x3ad6dc: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x3ad6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x3ad6e0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AD6E0u;
    {
        const bool branch_taken_0x3ad6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6E0u;
        // 0x3ad6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6e0) {
            ctx->pc = 0x3AD708u;
            goto label_3ad708;
        }
    }
    ctx->pc = 0x3AD6E8u;
    // 0x3ad6e8: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x3ad6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_3ad6ec:
    // 0x3ad6ec: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD6ECu;
    {
        const bool branch_taken_0x3ad6ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6ECu;
        // 0x3ad6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6ec) {
            ctx->pc = 0x3AD708u;
            goto label_3ad708;
        }
    }
    ctx->pc = 0x3AD6F4u;
    // 0x3ad6f4: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x3ad6f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x3ad6f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ad6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ad6fc: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD6FCu;
    {
        const bool branch_taken_0x3ad6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6FCu;
        // 0x3ad700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6fc) {
            ctx->pc = 0x3AD708u;
            goto label_3ad708;
        }
    }
    ctx->pc = 0x3AD704u;
    // 0x3ad704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad708:
    // 0x3ad708: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD710u;
}
