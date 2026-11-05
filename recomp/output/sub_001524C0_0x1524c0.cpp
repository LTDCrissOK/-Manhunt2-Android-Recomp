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

// Function: sub_001524C0
// Address: 0x1524c0 - 0x1524e4
void sub_001524C0_0x1524c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001524C0_0x1524c0");
#endif

    switch (ctx->pc) {
        case 0x1524c0u: goto label_1524c0;
        case 0x1524c4u: goto label_1524c4;
        case 0x1524c8u: goto label_1524c8;
        case 0x1524ccu: goto label_1524cc;
        case 0x1524d0u: goto label_1524d0;
        case 0x1524d4u: goto label_1524d4;
        case 0x1524d8u: goto label_1524d8;
        case 0x1524dcu: goto label_1524dc;
        case 0x1524e0u: goto label_1524e0;
        default: break;
    }

    ctx->pc = 0x1524c0u;

label_1524c0:
    // 0x1524c0: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x1524c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1524c4:
    // 0x1524c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1524c8:
    if (ctx->pc == 0x1524C8u) {
        ctx->pc = 0x1524C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524C4u;
        // 0x1524c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1524CCu;
        goto label_1524cc;
    }
    ctx->pc = 0x1524C4u;
    {
        const bool branch_taken_0x1524c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524C4u;
        // 0x1524c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524c4) {
            ctx->pc = 0x1524F4u;
            return;
        }
    }
    ctx->pc = 0x1524CCu;
label_1524cc:
    // 0x1524cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1524ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1524d0:
    // 0x1524d0: 0x2442ebc0  addiu       $v0, $v0, -0x1440
    ctx->pc = 0x1524d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962112));
label_1524d4:
    // 0x1524d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1524d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1524d8:
    // 0x1524d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1524dc:
    // 0x1524dc: 0x800008  jr          $a0
label_1524e0:
    if (ctx->pc == 0x1524E0u) {
        ctx->pc = 0x1524E4u;
        goto label_fallthrough_0x1524dc;
    }
    ctx->pc = 0x1524DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1524DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1524dc:
    ctx->pc = 0x1524E4u;
}
