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

// Function: sub_001189C8
// Address: 0x1189c8 - 0x1189f8
void sub_001189C8_0x1189c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189C8_0x1189c8");
#endif

    switch (ctx->pc) {
        case 0x1189c8u: goto label_1189c8;
        case 0x1189ccu: goto label_1189cc;
        case 0x1189d0u: goto label_1189d0;
        case 0x1189d4u: goto label_1189d4;
        case 0x1189d8u: goto label_1189d8;
        case 0x1189dcu: goto label_1189dc;
        case 0x1189e0u: goto label_1189e0;
        case 0x1189e4u: goto label_1189e4;
        case 0x1189e8u: goto label_1189e8;
        case 0x1189ecu: goto label_1189ec;
        case 0x1189f0u: goto label_1189f0;
        case 0x1189f4u: goto label_1189f4;
        default: break;
    }

    ctx->pc = 0x1189c8u;

label_1189c8:
    // 0x1189c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1189c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1189cc:
    // 0x1189cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1189ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1189d0:
    // 0x1189d0: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1189d4:
    // 0x1189d4: 0x2c83000f  sltiu       $v1, $a0, 0xF
    ctx->pc = 0x1189d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1189d8:
    // 0x1189d8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1189dc:
    if (ctx->pc == 0x1189DCu) {
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1189E0u;
        goto label_1189e0;
    }
    ctx->pc = 0x1189D8u;
    {
        const bool branch_taken_0x1189d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189d8) {
            ctx->pc = 0x118A34u;
            return;
        }
    }
    ctx->pc = 0x1189E0u;
label_1189e0:
    // 0x1189e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1189e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1189e4:
    // 0x1189e4: 0x2442b500  addiu       $v0, $v0, -0x4B00
    ctx->pc = 0x1189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948096));
label_1189e8:
    // 0x1189e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1189e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1189ec:
    // 0x1189ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1189ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1189f0:
    // 0x1189f0: 0x800008  jr          $a0
label_1189f4:
    if (ctx->pc == 0x1189F4u) {
        ctx->pc = 0x1189F8u;
        goto label_fallthrough_0x1189f0;
    }
    ctx->pc = 0x1189F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1189f0:
    ctx->pc = 0x1189F8u;
}
