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

// Function: sub_00181140
// Address: 0x181140 - 0x181168
void sub_00181140_0x181140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181140_0x181140");
#endif

    switch (ctx->pc) {
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        default: break;
    }

    ctx->pc = 0x181140u;

label_181140:
    // 0x181140: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x181140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_181144:
    // 0x181144: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_181148:
    if (ctx->pc == 0x181148u) {
        ctx->pc = 0x181148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181144u;
        // 0x181148: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18114Cu;
        goto label_18114c;
    }
    ctx->pc = 0x181144u;
    {
        const bool branch_taken_0x181144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181144u;
        // 0x181148: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181144) {
            ctx->pc = 0x181254u;
            return;
        }
    }
    ctx->pc = 0x18114Cu;
label_18114c:
    // 0x18114c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_181150:
    // 0x181150: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_181154:
    // 0x181154: 0x2442f790  addiu       $v0, $v0, -0x870
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965136));
label_181158:
    // 0x181158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18115c:
    // 0x18115c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_181160:
    // 0x181160: 0x800008  jr          $a0
label_181164:
    if (ctx->pc == 0x181164u) {
        ctx->pc = 0x181168u;
        goto label_fallthrough_0x181160;
    }
    ctx->pc = 0x181160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x181160:
    ctx->pc = 0x181168u;
}
