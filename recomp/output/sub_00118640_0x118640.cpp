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

// Function: sub_00118640
// Address: 0x118640 - 0x118670
void sub_00118640_0x118640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118640_0x118640");
#endif

    switch (ctx->pc) {
        case 0x118640u: goto label_118640;
        case 0x118644u: goto label_118644;
        case 0x118648u: goto label_118648;
        case 0x11864cu: goto label_11864c;
        case 0x118650u: goto label_118650;
        case 0x118654u: goto label_118654;
        case 0x118658u: goto label_118658;
        case 0x11865cu: goto label_11865c;
        case 0x118660u: goto label_118660;
        case 0x118664u: goto label_118664;
        case 0x118668u: goto label_118668;
        case 0x11866cu: goto label_11866c;
        default: break;
    }

    ctx->pc = 0x118640u;

label_118640:
    // 0x118640: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118644:
    // 0x118644: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x118644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_118648:
    // 0x118648: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_11864c:
    // 0x11864c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x11864cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_118650:
    // 0x118650: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_118654:
    if (ctx->pc == 0x118654u) {
        ctx->pc = 0x118654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118650u;
        // 0x118654: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118658u;
        goto label_118658;
    }
    ctx->pc = 0x118650u;
    {
        const bool branch_taken_0x118650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118650u;
        // 0x118654: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118650) {
            ctx->pc = 0x1186B4u;
            return;
        }
    }
    ctx->pc = 0x118658u;
label_118658:
    // 0x118658: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11865c:
    // 0x11865c: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x11865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
label_118660:
    // 0x118660: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118664:
    // 0x118664: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118668:
    // 0x118668: 0x800008  jr          $a0
label_11866c:
    if (ctx->pc == 0x11866Cu) {
        ctx->pc = 0x118670u;
        goto label_fallthrough_0x118668;
    }
    ctx->pc = 0x118668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118668u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118668:
    ctx->pc = 0x118670u;
}
