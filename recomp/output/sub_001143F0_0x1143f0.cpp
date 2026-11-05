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

// Function: sub_001143F0
// Address: 0x1143f0 - 0x114414
void sub_001143F0_0x1143f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001143F0_0x1143f0");
#endif

    switch (ctx->pc) {
        case 0x1143f0u: goto label_1143f0;
        case 0x1143f4u: goto label_1143f4;
        case 0x1143f8u: goto label_1143f8;
        case 0x1143fcu: goto label_1143fc;
        case 0x114400u: goto label_114400;
        case 0x114404u: goto label_114404;
        case 0x114408u: goto label_114408;
        case 0x11440cu: goto label_11440c;
        case 0x114410u: goto label_114410;
        default: break;
    }

    ctx->pc = 0x1143f0u;

label_1143f0:
    // 0x1143f0: 0x2ca20021  sltiu       $v0, $a1, 0x21
    ctx->pc = 0x1143f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_1143f4:
    // 0x1143f4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_1143f8:
    if (ctx->pc == 0x1143F8u) {
        ctx->pc = 0x1143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143F4u;
        // 0x1143f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143FCu;
        goto label_1143fc;
    }
    ctx->pc = 0x1143F4u;
    {
        const bool branch_taken_0x1143f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143F4u;
        // 0x1143f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143f4) {
            ctx->pc = 0x114524u;
            return;
        }
    }
    ctx->pc = 0x1143FCu;
label_1143fc:
    // 0x1143fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1143fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_114400:
    // 0x114400: 0x2442ab70  addiu       $v0, $v0, -0x5490
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
label_114404:
    // 0x114404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_114408:
    // 0x114408: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11440c:
    // 0x11440c: 0x800008  jr          $a0
label_114410:
    if (ctx->pc == 0x114410u) {
        ctx->pc = 0x114414u;
        goto label_fallthrough_0x11440c;
    }
    ctx->pc = 0x11440Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11440Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x11440c:
    ctx->pc = 0x114414u;
}
