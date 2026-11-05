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

// Function: sub_002E45B8
// Address: 0x2e45b8 - 0x2e45dc
void sub_002E45B8_0x2e45b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E45B8_0x2e45b8");
#endif

    switch (ctx->pc) {
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e45bcu: goto label_2e45bc;
        case 0x2e45c0u: goto label_2e45c0;
        case 0x2e45c4u: goto label_2e45c4;
        case 0x2e45c8u: goto label_2e45c8;
        case 0x2e45ccu: goto label_2e45cc;
        case 0x2e45d0u: goto label_2e45d0;
        case 0x2e45d4u: goto label_2e45d4;
        case 0x2e45d8u: goto label_2e45d8;
        default: break;
    }

    ctx->pc = 0x2e45b8u;

label_2e45b8:
    // 0x2e45b8: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2e45b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2e45bc:
    // 0x2e45bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2e45c0:
    if (ctx->pc == 0x2E45C0u) {
        ctx->pc = 0x2E45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45BCu;
        // 0x2e45c0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45C4u;
        goto label_2e45c4;
    }
    ctx->pc = 0x2E45BCu;
    {
        const bool branch_taken_0x2e45bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45BCu;
        // 0x2e45c0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45bc) {
            ctx->pc = 0x2E461Cu;
            return;
        }
    }
    ctx->pc = 0x2E45C4u;
label_2e45c4:
    // 0x2e45c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2e45c8:
    // 0x2e45c8: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x2e45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_2e45cc:
    // 0x2e45cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e45d0:
    // 0x2e45d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e45d4:
    // 0x2e45d4: 0x800008  jr          $a0
label_2e45d8:
    if (ctx->pc == 0x2E45D8u) {
        ctx->pc = 0x2E45DCu;
        goto label_fallthrough_0x2e45d4;
    }
    ctx->pc = 0x2E45D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E45D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2e45d4:
    ctx->pc = 0x2E45DCu;
}
