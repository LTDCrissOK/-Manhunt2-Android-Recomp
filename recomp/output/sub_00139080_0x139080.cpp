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

// Function: sub_00139080
// Address: 0x139080 - 0x1390a8
void sub_00139080_0x139080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139080_0x139080");
#endif

    switch (ctx->pc) {
        case 0x139080u: goto label_139080;
        case 0x139084u: goto label_139084;
        case 0x139088u: goto label_139088;
        case 0x13908cu: goto label_13908c;
        case 0x139090u: goto label_139090;
        case 0x139094u: goto label_139094;
        case 0x139098u: goto label_139098;
        case 0x13909cu: goto label_13909c;
        case 0x1390a0u: goto label_1390a0;
        case 0x1390a4u: goto label_1390a4;
        default: break;
    }

    ctx->pc = 0x139080u;

label_139080:
    // 0x139080: 0x8c8304d8  lw          $v1, 0x4D8($a0)
    ctx->pc = 0x139080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1240)));
label_139084:
    // 0x139084: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x139084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_139088:
    // 0x139088: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_13908c:
    if (ctx->pc == 0x13908Cu) {
        ctx->pc = 0x13908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139088u;
        // 0x13908c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139090u;
        goto label_139090;
    }
    ctx->pc = 0x139088u;
    {
        const bool branch_taken_0x139088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139088u;
        // 0x13908c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139088) {
            ctx->pc = 0x139138u;
            return;
        }
    }
    ctx->pc = 0x139090u;
label_139090:
    // 0x139090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x139090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_139094:
    // 0x139094: 0x2442e5e0  addiu       $v0, $v0, -0x1A20
    ctx->pc = 0x139094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960608));
label_139098:
    // 0x139098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13909c:
    // 0x13909c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1390a0:
    // 0x1390a0: 0x800008  jr          $a0
label_1390a4:
    if (ctx->pc == 0x1390A4u) {
        ctx->pc = 0x1390A8u;
        goto label_fallthrough_0x1390a0;
    }
    ctx->pc = 0x1390A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1390A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1390a0:
    ctx->pc = 0x1390A8u;
}
