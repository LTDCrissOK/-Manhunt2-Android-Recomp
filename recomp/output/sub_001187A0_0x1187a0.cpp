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

// Function: sub_001187A0
// Address: 0x1187a0 - 0x1187d0
void sub_001187A0_0x1187a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001187A0_0x1187a0");
#endif

    switch (ctx->pc) {
        case 0x1187a0u: goto label_1187a0;
        case 0x1187a4u: goto label_1187a4;
        case 0x1187a8u: goto label_1187a8;
        case 0x1187acu: goto label_1187ac;
        case 0x1187b0u: goto label_1187b0;
        case 0x1187b4u: goto label_1187b4;
        case 0x1187b8u: goto label_1187b8;
        case 0x1187bcu: goto label_1187bc;
        case 0x1187c0u: goto label_1187c0;
        case 0x1187c4u: goto label_1187c4;
        case 0x1187c8u: goto label_1187c8;
        case 0x1187ccu: goto label_1187cc;
        default: break;
    }

    ctx->pc = 0x1187a0u;

label_1187a0:
    // 0x1187a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1187a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1187a4:
    // 0x1187a4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1187a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1187a8:
    // 0x1187a8: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1187ac:
    // 0x1187ac: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1187b0:
    // 0x1187b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1187b4:
    if (ctx->pc == 0x1187B4u) {
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B0u;
        // 0x1187b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1187B8u;
        goto label_1187b8;
    }
    ctx->pc = 0x1187B0u;
    {
        const bool branch_taken_0x1187b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B0u;
        // 0x1187b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b0) {
            ctx->pc = 0x1187F0u;
            return;
        }
    }
    ctx->pc = 0x1187B8u;
label_1187b8:
    // 0x1187b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1187b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1187bc:
    // 0x1187bc: 0x2442b440  addiu       $v0, $v0, -0x4BC0
    ctx->pc = 0x1187bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
label_1187c0:
    // 0x1187c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1187c4:
    // 0x1187c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1187c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1187c8:
    // 0x1187c8: 0x800008  jr          $a0
label_1187cc:
    if (ctx->pc == 0x1187CCu) {
        ctx->pc = 0x1187D0u;
        goto label_fallthrough_0x1187c8;
    }
    ctx->pc = 0x1187C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1187c8:
    ctx->pc = 0x1187D0u;
}
