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

// Function: sub_001661F0
// Address: 0x1661f0 - 0x166214
void sub_001661F0_0x1661f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001661F0_0x1661f0");
#endif

    switch (ctx->pc) {
        case 0x1661f0u: goto label_1661f0;
        case 0x1661f4u: goto label_1661f4;
        case 0x1661f8u: goto label_1661f8;
        case 0x1661fcu: goto label_1661fc;
        case 0x166200u: goto label_166200;
        case 0x166204u: goto label_166204;
        case 0x166208u: goto label_166208;
        case 0x16620cu: goto label_16620c;
        case 0x166210u: goto label_166210;
        default: break;
    }

    ctx->pc = 0x1661f0u;

label_1661f0:
    // 0x1661f0: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1661f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1661f4:
    // 0x1661f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1661f8:
    if (ctx->pc == 0x1661F8u) {
        ctx->pc = 0x1661F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661F4u;
        // 0x1661f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661FCu;
        goto label_1661fc;
    }
    ctx->pc = 0x1661F4u;
    {
        const bool branch_taken_0x1661f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661F4u;
        // 0x1661f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661f4) {
            ctx->pc = 0x16623Cu;
            return;
        }
    }
    ctx->pc = 0x1661FCu;
label_1661fc:
    // 0x1661fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_166200:
    // 0x166200: 0x2442efa0  addiu       $v0, $v0, -0x1060
    ctx->pc = 0x166200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963104));
label_166204:
    // 0x166204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166208:
    // 0x166208: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16620c:
    // 0x16620c: 0x800008  jr          $a0
label_166210:
    if (ctx->pc == 0x166210u) {
        ctx->pc = 0x166214u;
        goto label_fallthrough_0x16620c;
    }
    ctx->pc = 0x16620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16620Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16620c:
    ctx->pc = 0x166214u;
}
