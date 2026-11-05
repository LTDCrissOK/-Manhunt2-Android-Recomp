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

// Function: sub_00118310
// Address: 0x118310 - 0x118340
void sub_00118310_0x118310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118310_0x118310");
#endif

    switch (ctx->pc) {
        case 0x118310u: goto label_118310;
        case 0x118314u: goto label_118314;
        case 0x118318u: goto label_118318;
        case 0x11831cu: goto label_11831c;
        case 0x118320u: goto label_118320;
        case 0x118324u: goto label_118324;
        case 0x118328u: goto label_118328;
        case 0x11832cu: goto label_11832c;
        case 0x118330u: goto label_118330;
        case 0x118334u: goto label_118334;
        case 0x118338u: goto label_118338;
        case 0x11833cu: goto label_11833c;
        default: break;
    }

    ctx->pc = 0x118310u;

label_118310:
    // 0x118310: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118314:
    // 0x118314: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_118318:
    // 0x118318: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x118318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_11831c:
    // 0x11831c: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x11831cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_118320:
    // 0x118320: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_118324:
    if (ctx->pc == 0x118324u) {
        ctx->pc = 0x118324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118320u;
        // 0x118324: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118328u;
        goto label_118328;
    }
    ctx->pc = 0x118320u;
    {
        const bool branch_taken_0x118320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118320u;
        // 0x118324: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118320) {
            ctx->pc = 0x118384u;
            return;
        }
    }
    ctx->pc = 0x118328u;
label_118328:
    // 0x118328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11832c:
    // 0x11832c: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x11832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
label_118330:
    // 0x118330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118334:
    // 0x118334: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118338:
    // 0x118338: 0x800008  jr          $a0
label_11833c:
    if (ctx->pc == 0x11833Cu) {
        ctx->pc = 0x118340u;
        goto label_fallthrough_0x118338;
    }
    ctx->pc = 0x118338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118338u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118338:
    ctx->pc = 0x118340u;
}
