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

// Function: sub_00335770
// Address: 0x335770 - 0x3357b8
void sub_00335770_0x335770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335770_0x335770");
#endif

    switch (ctx->pc) {
        case 0x3357a0u: goto label_3357a0;
        default: break;
    }

    ctx->pc = 0x335770u;

    // 0x335770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335774: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x335774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33577c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x335780: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x335784: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x335784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x335788: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x335788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x33578c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335790: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335790u;
    {
        const bool branch_taken_0x335790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x335794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335790u;
        // 0x335794: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335790) {
            ctx->pc = 0x3357A8u;
            goto label_3357a8;
        }
    }
    ctx->pc = 0x335798u;
    // 0x335798: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x335798u;
    SET_GPR_U32(ctx, 31, 0x3357A0u);
    ctx->pc = 0x33579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335798u;
    // 0x33579c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x335798u, 0x3357A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357A0u;
label_3357a0:
    // 0x3357a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3357A0u;
    {
        const bool branch_taken_0x3357a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3357A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357A0u;
        // 0x3357a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357a0) {
            ctx->pc = 0x3357B0u;
            goto label_3357b0;
        }
    }
    ctx->pc = 0x3357A8u;
label_3357a8:
    // 0x3357a8: 0xacc50028  sw          $a1, 0x28($a2)
    ctx->pc = 0x3357a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 5));
    // 0x3357ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3357acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3357b0:
    // 0x3357b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3357B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3357B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357B0u;
        // 0x3357b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3357B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3357B8u;
}
