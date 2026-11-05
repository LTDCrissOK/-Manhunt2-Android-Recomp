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

// Function: sub_0025A9E8
// Address: 0x25a9e8 - 0x25aa14
void sub_0025A9E8_0x25a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A9E8_0x25a9e8");
#endif

    switch (ctx->pc) {
        case 0x25a9e8u: goto label_25a9e8;
        case 0x25a9ecu: goto label_25a9ec;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25a9fcu: goto label_25a9fc;
        case 0x25aa00u: goto label_25aa00;
        case 0x25aa04u: goto label_25aa04;
        case 0x25aa08u: goto label_25aa08;
        case 0x25aa0cu: goto label_25aa0c;
        case 0x25aa10u: goto label_25aa10;
        default: break;
    }

    ctx->pc = 0x25a9e8u;

label_25a9e8:
    // 0x25a9e8: 0x24c3ff9b  addiu       $v1, $a2, -0x65
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967195));
label_25a9ec:
    // 0x25a9ec: 0x2c620033  sltiu       $v0, $v1, 0x33
    ctx->pc = 0x25a9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_25a9f0:
    // 0x25a9f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25a9f4:
    if (ctx->pc == 0x25A9F4u) {
        ctx->pc = 0x25A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9F0u;
        // 0x25a9f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9F8u;
        goto label_25a9f8;
    }
    ctx->pc = 0x25A9F0u;
    {
        const bool branch_taken_0x25a9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9F0u;
        // 0x25a9f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9f0) {
            ctx->pc = 0x25AA28u;
            return;
        }
    }
    ctx->pc = 0x25A9F8u;
label_25a9f8:
    // 0x25a9f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_25a9fc:
    // 0x25a9fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25aa00:
    // 0x25aa00: 0x24425680  addiu       $v0, $v0, 0x5680
    ctx->pc = 0x25aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22144));
label_25aa04:
    // 0x25aa04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25aa08:
    // 0x25aa08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25aa0c:
    // 0x25aa0c: 0x800008  jr          $a0
label_25aa10:
    if (ctx->pc == 0x25AA10u) {
        ctx->pc = 0x25AA14u;
        goto label_fallthrough_0x25aa0c;
    }
    ctx->pc = 0x25AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x25aa0c:
    ctx->pc = 0x25AA14u;
}
