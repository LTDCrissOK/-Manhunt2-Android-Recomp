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

// Function: sub_001188F8
// Address: 0x1188f8 - 0x118928
void sub_001188F8_0x1188f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001188F8_0x1188f8");
#endif

    switch (ctx->pc) {
        case 0x1188f8u: goto label_1188f8;
        case 0x1188fcu: goto label_1188fc;
        case 0x118900u: goto label_118900;
        case 0x118904u: goto label_118904;
        case 0x118908u: goto label_118908;
        case 0x11890cu: goto label_11890c;
        case 0x118910u: goto label_118910;
        case 0x118914u: goto label_118914;
        case 0x118918u: goto label_118918;
        case 0x11891cu: goto label_11891c;
        case 0x118920u: goto label_118920;
        case 0x118924u: goto label_118924;
        default: break;
    }

    ctx->pc = 0x1188f8u;

label_1188f8:
    // 0x1188f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1188f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1188fc:
    // 0x1188fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1188fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118900:
    // 0x118900: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x118900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_118904:
    // 0x118904: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x118904u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_118908:
    // 0x118908: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_11890c:
    if (ctx->pc == 0x11890Cu) {
        ctx->pc = 0x11890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118908u;
        // 0x11890c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118910u;
        goto label_118910;
    }
    ctx->pc = 0x118908u;
    {
        const bool branch_taken_0x118908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118908u;
        // 0x11890c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118908) {
            ctx->pc = 0x11894Cu;
            return;
        }
    }
    ctx->pc = 0x118910u;
label_118910:
    // 0x118910: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118914:
    // 0x118914: 0x2442b4a0  addiu       $v0, $v0, -0x4B60
    ctx->pc = 0x118914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948000));
label_118918:
    // 0x118918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11891c:
    // 0x11891c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118920:
    // 0x118920: 0x800008  jr          $a0
label_118924:
    if (ctx->pc == 0x118924u) {
        ctx->pc = 0x118928u;
        goto label_fallthrough_0x118920;
    }
    ctx->pc = 0x118920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118920u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118920:
    ctx->pc = 0x118928u;
}
