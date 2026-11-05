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

// Function: sub_00152480
// Address: 0x152480 - 0x1524a4
void sub_00152480_0x152480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152480_0x152480");
#endif

    switch (ctx->pc) {
        case 0x152480u: goto label_152480;
        case 0x152484u: goto label_152484;
        case 0x152488u: goto label_152488;
        case 0x15248cu: goto label_15248c;
        case 0x152490u: goto label_152490;
        case 0x152494u: goto label_152494;
        case 0x152498u: goto label_152498;
        case 0x15249cu: goto label_15249c;
        case 0x1524a0u: goto label_1524a0;
        default: break;
    }

    ctx->pc = 0x152480u;

label_152480:
    // 0x152480: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x152480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_152484:
    // 0x152484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_152488:
    if (ctx->pc == 0x152488u) {
        ctx->pc = 0x152488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152484u;
        // 0x152488: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15248Cu;
        goto label_15248c;
    }
    ctx->pc = 0x152484u;
    {
        const bool branch_taken_0x152484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152484u;
        // 0x152488: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152484) {
            ctx->pc = 0x1524B4u;
            return;
        }
    }
    ctx->pc = 0x15248Cu;
label_15248c:
    // 0x15248c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15248cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_152490:
    // 0x152490: 0x2442eb90  addiu       $v0, $v0, -0x1470
    ctx->pc = 0x152490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962064));
label_152494:
    // 0x152494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_152498:
    // 0x152498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x152498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15249c:
    // 0x15249c: 0x800008  jr          $a0
label_1524a0:
    if (ctx->pc == 0x1524A0u) {
        ctx->pc = 0x1524A4u;
        goto label_fallthrough_0x15249c;
    }
    ctx->pc = 0x15249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15249Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x15249c:
    ctx->pc = 0x1524A4u;
}
