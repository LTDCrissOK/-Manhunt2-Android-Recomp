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

// Function: sub_002A3558
// Address: 0x2a3558 - 0x2a3584
void sub_002A3558_0x2a3558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3558_0x2a3558");
#endif

    switch (ctx->pc) {
        case 0x2a3558u: goto label_2a3558;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3564u: goto label_2a3564;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a356cu: goto label_2a356c;
        case 0x2a3570u: goto label_2a3570;
        case 0x2a3574u: goto label_2a3574;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a357cu: goto label_2a357c;
        case 0x2a3580u: goto label_2a3580;
        default: break;
    }

    ctx->pc = 0x2a3558u;

label_2a3558:
    // 0x2a3558: 0x24a3fffa  addiu       $v1, $a1, -0x6
    ctx->pc = 0x2a3558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
label_2a355c:
    // 0x2a355c: 0x2c620089  sltiu       $v0, $v1, 0x89
    ctx->pc = 0x2a355cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)137) ? 1 : 0);
label_2a3560:
    // 0x2a3560: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_2a3564:
    if (ctx->pc == 0x2A3564u) {
        ctx->pc = 0x2A3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3560u;
        // 0x2a3564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3568u;
        goto label_2a3568;
    }
    ctx->pc = 0x2A3560u;
    {
        const bool branch_taken_0x2a3560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3560u;
        // 0x2a3564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3560) {
            ctx->pc = 0x2A378Cu;
            return;
        }
    }
    ctx->pc = 0x2A3568u;
label_2a3568:
    // 0x2a3568: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2a356c:
    // 0x2a356c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a3570:
    // 0x2a3570: 0x2442d2c0  addiu       $v0, $v0, -0x2D40
    ctx->pc = 0x2a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
label_2a3574:
    // 0x2a3574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a3578:
    // 0x2a3578: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a357c:
    // 0x2a357c: 0x800008  jr          $a0
label_2a3580:
    if (ctx->pc == 0x2A3580u) {
        ctx->pc = 0x2A3584u;
        goto label_fallthrough_0x2a357c;
    }
    ctx->pc = 0x2A357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A357Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2a357c:
    ctx->pc = 0x2A3584u;
}
