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

// Function: sub_00118478
// Address: 0x118478 - 0x1184a8
void sub_00118478_0x118478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118478_0x118478");
#endif

    switch (ctx->pc) {
        case 0x118478u: goto label_118478;
        case 0x11847cu: goto label_11847c;
        case 0x118480u: goto label_118480;
        case 0x118484u: goto label_118484;
        case 0x118488u: goto label_118488;
        case 0x11848cu: goto label_11848c;
        case 0x118490u: goto label_118490;
        case 0x118494u: goto label_118494;
        case 0x118498u: goto label_118498;
        case 0x11849cu: goto label_11849c;
        case 0x1184a0u: goto label_1184a0;
        case 0x1184a4u: goto label_1184a4;
        default: break;
    }

    ctx->pc = 0x118478u;

label_118478:
    // 0x118478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11847c:
    // 0x11847c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118480:
    // 0x118480: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x118480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_118484:
    // 0x118484: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x118484u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_118488:
    // 0x118488: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_11848c:
    if (ctx->pc == 0x11848Cu) {
        ctx->pc = 0x11848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118488u;
        // 0x11848c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118490u;
        goto label_118490;
    }
    ctx->pc = 0x118488u;
    {
        const bool branch_taken_0x118488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118488u;
        // 0x11848c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118488) {
            ctx->pc = 0x1184D8u;
            return;
        }
    }
    ctx->pc = 0x118490u;
label_118490:
    // 0x118490: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118494:
    // 0x118494: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x118494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
label_118498:
    // 0x118498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11849c:
    // 0x11849c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1184a0:
    // 0x1184a0: 0x800008  jr          $a0
label_1184a4:
    if (ctx->pc == 0x1184A4u) {
        ctx->pc = 0x1184A8u;
        goto label_fallthrough_0x1184a0;
    }
    ctx->pc = 0x1184A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1184A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1184a0:
    ctx->pc = 0x1184A8u;
}
