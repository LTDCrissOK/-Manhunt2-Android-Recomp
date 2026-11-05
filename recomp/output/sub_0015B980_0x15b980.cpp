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

// Function: sub_0015B980
// Address: 0x15b980 - 0x15b9e0
void sub_0015B980_0x15b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B980_0x15b980");
#endif

    switch (ctx->pc) {
        case 0x15b9a0u: goto label_15b9a0;
        default: break;
    }

    ctx->pc = 0x15b980u;

    // 0x15b980: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x15b980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b984: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15b984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15b988: 0x91020a20  lbu         $v0, 0xA20($t0)
    ctx->pc = 0x15b988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2592)));
    // 0x15b98c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15B98Cu;
    {
        const bool branch_taken_0x15b98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b98c) {
            ctx->pc = 0x15B9D4u;
            goto label_15b9d4;
        }
    }
    ctx->pc = 0x15B994u;
    // 0x15b994: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15b994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b998: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15b99c: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x15b99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15b9a0:
    // 0x15b9a0: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b9a4: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x15b9a8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B9A8u;
    {
        const bool branch_taken_0x15b9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9a8) {
            ctx->pc = 0x15B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B9A8u;
            // 0x15b9ac: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B9C4u;
            goto label_15b9c4;
        }
    }
    ctx->pc = 0x15B9B0u;
    // 0x15b9b0: 0x9043034c  lbu         $v1, 0x34C($v0)
    ctx->pc = 0x15b9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x15b9b4: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B9B4u;
    {
        const bool branch_taken_0x15b9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x15B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9B4u;
        // 0x15b9b8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9b4) {
            ctx->pc = 0x15B9C4u;
            goto label_15b9c4;
        }
    }
    ctx->pc = 0x15B9BCu;
    // 0x15b9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9BCu;
        // 0x15b9c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B9C4u;
label_15b9c4:
    // 0x15b9c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15b9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b9c8: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x15b9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x15b9cc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15B9CCu;
    {
        const bool branch_taken_0x15b9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9cc) {
            ctx->pc = 0x15B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b9a0;
        }
    }
    ctx->pc = 0x15B9D4u;
label_15b9d4:
    // 0x15b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9D4u;
        // 0x15b9d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B9DCu;
    // 0x15b9dc: 0x0  nop
    ctx->pc = 0x15b9dcu;
    // NOP
    ctx->pc = 0x15b9e0u;
}
