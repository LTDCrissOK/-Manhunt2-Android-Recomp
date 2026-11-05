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

// Function: sub_002BB8A8
// Address: 0x2bb8a8 - 0x2bb8d8
void sub_002BB8A8_0x2bb8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB8A8_0x2bb8a8");
#endif

    switch (ctx->pc) {
        case 0x2bb8ccu: goto label_2bb8cc;
        default: break;
    }

    ctx->pc = 0x2bb8a8u;

    // 0x2bb8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb8ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bb8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bb8b0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB8B0u;
    {
        const bool branch_taken_0x2bb8b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8B0u;
        // 0x2bb8b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8b0) {
            ctx->pc = 0x2BB8CCu;
            goto label_2bb8cc;
        }
    }
    ctx->pc = 0x2BB8B8u;
    // 0x2bb8b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB8B8u;
    {
        const bool branch_taken_0x2bb8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8B8u;
        // 0x2bb8bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8b8) {
            ctx->pc = 0x2BB8D0u;
            goto label_2bb8d0;
        }
    }
    ctx->pc = 0x2BB8C0u;
    // 0x2bb8c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb8c4: 0xc0aedfc  jal         func_2BB7F0
    ctx->pc = 0x2BB8C4u;
    SET_GPR_U32(ctx, 31, 0x2BB8CCu);
    ctx->pc = 0x2BB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8C4u;
    // 0x2bb8c8: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB7F0u, 0x2BB8C4u, 0x2BB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8CCu;
label_2bb8cc:
    // 0x2bb8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb8d0:
    // 0x2bb8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8D0u;
        // 0x2bb8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB8D8u;
}
