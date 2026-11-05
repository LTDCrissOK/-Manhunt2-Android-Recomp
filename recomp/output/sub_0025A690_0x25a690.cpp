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

// Function: sub_0025A690
// Address: 0x25a690 - 0x25a6d0
void sub_0025A690_0x25a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A690_0x25a690");
#endif

    ctx->pc = 0x25a690u;

    // 0x25a690: 0x2ce20005  sltiu       $v0, $a3, 0x5
    ctx->pc = 0x25a690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25a694: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25A694u;
    {
        const bool branch_taken_0x25a694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A694u;
        // 0x25a698: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a694) {
            ctx->pc = 0x25A6CCu;
            goto label_25a6cc;
        }
    }
    ctx->pc = 0x25A69Cu;
    // 0x25a69c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25a6a0: 0x24425660  addiu       $v0, $v0, 0x5660
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22112));
    // 0x25a6a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a6a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a6ac: 0x800008  jr          $a0
    ctx->pc = 0x25A6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A6B4u: goto label_25a6b4;
            case 0x25A6BCu: goto label_25a6bc;
            case 0x25A6C4u: goto label_25a6c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A6B4u;
label_25a6b4:
    // 0x25a6b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A6B4u;
    {
        const bool branch_taken_0x25a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6B4u;
        // 0x25a6b8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6b4) {
            ctx->pc = 0x25A6D0u;
            return;
        }
    }
    ctx->pc = 0x25A6BCu;
label_25a6bc:
    // 0x25a6bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6BCu;
    {
        const bool branch_taken_0x25a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6BCu;
        // 0x25a6c0: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6bc) {
            ctx->pc = 0x25A6D0u;
            return;
        }
    }
    ctx->pc = 0x25A6C4u;
label_25a6c4:
    // 0x25a6c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A6C4u;
    {
        const bool branch_taken_0x25a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6C4u;
        // 0x25a6c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c4) {
            ctx->pc = 0x25A6D0u;
            return;
        }
    }
    ctx->pc = 0x25A6CCu;
label_25a6cc:
    // 0x25a6cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x25a6d0u;
}
