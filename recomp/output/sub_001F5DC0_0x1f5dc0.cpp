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

// Function: sub_001F5DC0
// Address: 0x1f5dc0 - 0x1f5de8
void sub_001F5DC0_0x1f5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5DC0_0x1f5dc0");
#endif

    switch (ctx->pc) {
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        default: break;
    }

    ctx->pc = 0x1f5dc0u;

label_1f5dc0:
    // 0x1f5dc0: 0x24a3ffd8  addiu       $v1, $a1, -0x28
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
label_1f5dc4:
    // 0x1f5dc4: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1f5dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
label_1f5dc8:
    // 0x1f5dc8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1f5dcc:
    if (ctx->pc == 0x1F5DCCu) {
        ctx->pc = 0x1F5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DC8u;
        // 0x1f5dcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DD0u;
        goto label_1f5dd0;
    }
    ctx->pc = 0x1F5DC8u;
    {
        const bool branch_taken_0x1f5dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DC8u;
        // 0x1f5dcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5dc8) {
            ctx->pc = 0x1F5E84u;
            return;
        }
    }
    ctx->pc = 0x1F5DD0u;
label_1f5dd0:
    // 0x1f5dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5dd4:
    // 0x1f5dd4: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x1f5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
label_1f5dd8:
    // 0x1f5dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5ddc:
    // 0x1f5ddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5de0:
    // 0x1f5de0: 0x800008  jr          $a0
label_1f5de4:
    if (ctx->pc == 0x1F5DE4u) {
        ctx->pc = 0x1F5DE8u;
        goto label_fallthrough_0x1f5de0;
    }
    ctx->pc = 0x1F5DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1f5de0:
    ctx->pc = 0x1F5DE8u;
}
