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

// Function: sub_002ABF84
// Address: 0x2abf84 - 0x2abfb0
void sub_002ABF84_0x2abf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF84_0x2abf84");
#endif

    switch (ctx->pc) {
        case 0x2abf8cu: goto label_2abf8c;
        default: break;
    }

    ctx->pc = 0x2abf84u;

label_2abf84:
    // 0x2abf84: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF84u;
        // 0x2abf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF8Cu;
label_2abf8c:
    // 0x2abf8c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2abf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2abf90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ABF90u;
    {
        const bool branch_taken_0x2abf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF90u;
        // 0x2abf94: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf90) {
            ctx->pc = 0x2ABFE0u;
            return;
        }
    }
    ctx->pc = 0x2ABF98u;
    // 0x2abf98: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2abf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2abf9c: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x2abf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x2abfa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abfa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2abfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abfa8: 0x800008  jr          $a0
    ctx->pc = 0x2ABFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ABF84u: goto label_2abf84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABFA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ABFB0u;
}
