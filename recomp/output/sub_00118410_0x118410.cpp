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

// Function: sub_00118410
// Address: 0x118410 - 0x118440
void sub_00118410_0x118410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118410_0x118410");
#endif

    switch (ctx->pc) {
        case 0x118410u: goto label_118410;
        case 0x118414u: goto label_118414;
        case 0x118418u: goto label_118418;
        case 0x11841cu: goto label_11841c;
        case 0x118420u: goto label_118420;
        case 0x118424u: goto label_118424;
        case 0x118428u: goto label_118428;
        case 0x11842cu: goto label_11842c;
        case 0x118430u: goto label_118430;
        case 0x118434u: goto label_118434;
        case 0x118438u: goto label_118438;
        case 0x11843cu: goto label_11843c;
        default: break;
    }

    ctx->pc = 0x118410u;

label_118410:
    // 0x118410: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118414:
    // 0x118414: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x118414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_118418:
    // 0x118418: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x118418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_11841c:
    // 0x11841c: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x11841cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_118420:
    // 0x118420: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_118424:
    if (ctx->pc == 0x118424u) {
        ctx->pc = 0x118424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118420u;
        // 0x118424: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118428u;
        goto label_118428;
    }
    ctx->pc = 0x118420u;
    {
        const bool branch_taken_0x118420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118420u;
        // 0x118424: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118420) {
            ctx->pc = 0x11846Cu;
            return;
        }
    }
    ctx->pc = 0x118428u;
label_118428:
    // 0x118428: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11842c:
    // 0x11842c: 0x2442b360  addiu       $v0, $v0, -0x4CA0
    ctx->pc = 0x11842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947680));
label_118430:
    // 0x118430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118434:
    // 0x118434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118438:
    // 0x118438: 0x800008  jr          $a0
label_11843c:
    if (ctx->pc == 0x11843Cu) {
        ctx->pc = 0x118440u;
        goto label_fallthrough_0x118438;
    }
    ctx->pc = 0x118438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118438u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118438:
    ctx->pc = 0x118440u;
}
