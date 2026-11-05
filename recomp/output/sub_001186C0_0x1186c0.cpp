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

// Function: sub_001186C0
// Address: 0x1186c0 - 0x1186f0
void sub_001186C0_0x1186c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186C0_0x1186c0");
#endif

    switch (ctx->pc) {
        case 0x1186c0u: goto label_1186c0;
        case 0x1186c4u: goto label_1186c4;
        case 0x1186c8u: goto label_1186c8;
        case 0x1186ccu: goto label_1186cc;
        case 0x1186d0u: goto label_1186d0;
        case 0x1186d4u: goto label_1186d4;
        case 0x1186d8u: goto label_1186d8;
        case 0x1186dcu: goto label_1186dc;
        case 0x1186e0u: goto label_1186e0;
        case 0x1186e4u: goto label_1186e4;
        case 0x1186e8u: goto label_1186e8;
        case 0x1186ecu: goto label_1186ec;
        default: break;
    }

    ctx->pc = 0x1186c0u;

label_1186c0:
    // 0x1186c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1186c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1186c4:
    // 0x1186c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1186c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1186c8:
    // 0x1186c8: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1186cc:
    // 0x1186cc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1186ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1186d0:
    // 0x1186d0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1186d4:
    if (ctx->pc == 0x1186D4u) {
        ctx->pc = 0x1186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186D0u;
        // 0x1186d4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1186D8u;
        goto label_1186d8;
    }
    ctx->pc = 0x1186D0u;
    {
        const bool branch_taken_0x1186d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186D0u;
        // 0x1186d4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186d0) {
            ctx->pc = 0x118738u;
            return;
        }
    }
    ctx->pc = 0x1186D8u;
label_1186d8:
    // 0x1186d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1186dc:
    // 0x1186dc: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
label_1186e0:
    // 0x1186e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1186e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1186e4:
    // 0x1186e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1186e8:
    // 0x1186e8: 0x800008  jr          $a0
label_1186ec:
    if (ctx->pc == 0x1186ECu) {
        ctx->pc = 0x1186F0u;
        goto label_fallthrough_0x1186e8;
    }
    ctx->pc = 0x1186E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1186E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1186e8:
    ctx->pc = 0x1186F0u;
}
