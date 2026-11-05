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

// Function: sub_001180C0
// Address: 0x1180c0 - 0x1180f4
void sub_001180C0_0x1180c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001180C0_0x1180c0");
#endif

    switch (ctx->pc) {
        case 0x1180c0u: goto label_1180c0;
        case 0x1180c4u: goto label_1180c4;
        case 0x1180c8u: goto label_1180c8;
        case 0x1180ccu: goto label_1180cc;
        case 0x1180d0u: goto label_1180d0;
        case 0x1180d4u: goto label_1180d4;
        case 0x1180d8u: goto label_1180d8;
        case 0x1180dcu: goto label_1180dc;
        case 0x1180e0u: goto label_1180e0;
        case 0x1180e4u: goto label_1180e4;
        case 0x1180e8u: goto label_1180e8;
        case 0x1180ecu: goto label_1180ec;
        case 0x1180f0u: goto label_1180f0;
        default: break;
    }

    ctx->pc = 0x1180c0u;

label_1180c0:
    // 0x1180c0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_1180c4:
    if (ctx->pc == 0x1180C4u) {
        ctx->pc = 0x1180C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180C0u;
        // 0x1180c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1180C8u;
        goto label_1180c8;
    }
    ctx->pc = 0x1180C0u;
    {
        const bool branch_taken_0x1180c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180C0u;
        // 0x1180c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180c0) {
            ctx->pc = 0x118108u;
            return;
        }
    }
    ctx->pc = 0x1180C8u;
label_1180c8:
    // 0x1180c8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1180cc:
    // 0x1180cc: 0x2444fffa  addiu       $a0, $v0, -0x6
    ctx->pc = 0x1180ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1180d0:
    // 0x1180d0: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x1180d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1180d4:
    // 0x1180d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1180d8:
    if (ctx->pc == 0x1180D8u) {
        ctx->pc = 0x1180D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180D4u;
        // 0x1180d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1180DCu;
        goto label_1180dc;
    }
    ctx->pc = 0x1180D4u;
    {
        const bool branch_taken_0x1180d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180D4u;
        // 0x1180d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180d4) {
            ctx->pc = 0x118108u;
            return;
        }
    }
    ctx->pc = 0x1180DCu;
label_1180dc:
    // 0x1180dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1180e0:
    // 0x1180e0: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1180e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
label_1180e4:
    // 0x1180e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1180e8:
    // 0x1180e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1180e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1180ec:
    // 0x1180ec: 0x800008  jr          $a0
label_1180f0:
    if (ctx->pc == 0x1180F0u) {
        ctx->pc = 0x1180F4u;
        goto label_fallthrough_0x1180ec;
    }
    ctx->pc = 0x1180ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1180ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1180ec:
    ctx->pc = 0x1180F4u;
}
