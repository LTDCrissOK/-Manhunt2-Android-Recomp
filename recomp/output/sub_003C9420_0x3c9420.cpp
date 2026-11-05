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

// Function: sub_003C9420
// Address: 0x3c9420 - 0x3c9480
void sub_003C9420_0x3c9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9420_0x3c9420");
#endif

    switch (ctx->pc) {
        case 0x3c9444u: goto label_3c9444;
        default: break;
    }

    ctx->pc = 0x3c9420u;

    // 0x3c9420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c9424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c9428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c942c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c942cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9430: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c9430u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c9434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9438: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c9438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c943c: 0xc0f281c  jal         func_3CA070
    ctx->pc = 0x3C943Cu;
    SET_GPR_U32(ctx, 31, 0x3C9444u);
    ctx->pc = 0x3C9440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C943Cu;
    // 0x3c9440: 0xae201130  sw          $zero, 0x1130($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA070u, 0x3C943Cu, 0x3C9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9444u;
label_3c9444:
    // 0x3c9444: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c9444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9448: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c9448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c944c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c9450: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9450u;
    {
        const bool branch_taken_0x3c9450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c9450) {
            ctx->pc = 0x3C9454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9450u;
            // 0x3c9454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9468u;
            goto label_3c9468;
        }
    }
    ctx->pc = 0x3C9458u;
    // 0x3c9458: 0x8e221130  lw          $v0, 0x1130($s1)
    ctx->pc = 0x3c9458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4400)));
    // 0x3c945c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C945Cu;
    {
        const bool branch_taken_0x3c945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c945c) {
            ctx->pc = 0x3C9460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C945Cu;
            // 0x3c9460: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9464u;
            goto label_3c9464;
        }
    }
    ctx->pc = 0x3C9464u;
label_3c9464:
    // 0x3c9464: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c9464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9468:
    // 0x3c9468: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c9468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c946c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c946cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9474: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9474u;
        // 0x3c9478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C947Cu;
    // 0x3c947c: 0x0  nop
    ctx->pc = 0x3c947cu;
    // NOP
    ctx->pc = 0x3c9480u;
}
