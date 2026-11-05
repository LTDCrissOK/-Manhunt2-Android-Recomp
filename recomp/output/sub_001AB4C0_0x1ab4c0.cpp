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

// Function: sub_001AB4C0
// Address: 0x1ab4c0 - 0x1ab508
void sub_001AB4C0_0x1ab4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB4C0_0x1ab4c0");
#endif

    switch (ctx->pc) {
        case 0x1ab4dcu: goto label_1ab4dc;
        default: break;
    }

    ctx->pc = 0x1ab4c0u;

    // 0x1ab4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab4d4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB4D4u;
    SET_GPR_U32(ctx, 31, 0x1AB4DCu);
    ctx->pc = 0x1AB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4D4u;
    // 0x1ab4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB4D4u, 0x1AB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4DCu;
label_1ab4dc:
    // 0x1ab4dc: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab4e0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1ab4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ab4e4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB4E4u;
    {
        const bool branch_taken_0x1ab4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab4e4) {
            ctx->pc = 0x1AB4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB4E4u;
            // 0x1ab4e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4F8u;
            goto label_1ab4f8;
        }
    }
    ctx->pc = 0x1AB4ECu;
    // 0x1ab4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab4f0: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1ab4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1ab4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab4f8:
    // 0x1ab4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4FCu;
        // 0x1ab500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB504u;
    // 0x1ab504: 0x0  nop
    ctx->pc = 0x1ab504u;
    // NOP
    ctx->pc = 0x1ab508u;
}
