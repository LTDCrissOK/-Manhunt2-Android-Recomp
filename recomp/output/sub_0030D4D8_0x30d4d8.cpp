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

// Function: sub_0030D4D8
// Address: 0x30d4d8 - 0x30d500
void sub_0030D4D8_0x30d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4D8_0x30d4d8");
#endif

    switch (ctx->pc) {
        case 0x30d4d8u: goto label_30d4d8;
        case 0x30d4dcu: goto label_30d4dc;
        case 0x30d4e0u: goto label_30d4e0;
        case 0x30d4e4u: goto label_30d4e4;
        case 0x30d4e8u: goto label_30d4e8;
        case 0x30d4ecu: goto label_30d4ec;
        case 0x30d4f0u: goto label_30d4f0;
        case 0x30d4f4u: goto label_30d4f4;
        case 0x30d4f8u: goto label_30d4f8;
        case 0x30d4fcu: goto label_30d4fc;
        default: break;
    }

    ctx->pc = 0x30d4d8u;

label_30d4d8:
    // 0x30d4d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_30d4dc:
    // 0x30d4dc: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x30d4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_30d4e0:
    // 0x30d4e0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_30d4e4:
    if (ctx->pc == 0x30D4E4u) {
        ctx->pc = 0x30D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E0u;
        // 0x30d4e4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4E8u;
        goto label_30d4e8;
    }
    ctx->pc = 0x30D4E0u;
    {
        const bool branch_taken_0x30d4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E0u;
        // 0x30d4e4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4e0) {
            ctx->pc = 0x30D58Cu;
            return;
        }
    }
    ctx->pc = 0x30D4E8u;
label_30d4e8:
    // 0x30d4e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d4ec:
    // 0x30d4ec: 0x24422960  addiu       $v0, $v0, 0x2960
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
label_30d4f0:
    // 0x30d4f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30d4f4:
    // 0x30d4f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30d4f8:
    // 0x30d4f8: 0x800008  jr          $a0
label_30d4fc:
    if (ctx->pc == 0x30D4FCu) {
        ctx->pc = 0x30D500u;
        goto label_fallthrough_0x30d4f8;
    }
    ctx->pc = 0x30D4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x30d4f8:
    ctx->pc = 0x30D500u;
}
