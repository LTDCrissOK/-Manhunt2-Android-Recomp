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

// Function: sub_00312630
// Address: 0x312630 - 0x312668
void sub_00312630_0x312630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312630_0x312630");
#endif

    switch (ctx->pc) {
        case 0x312658u: goto label_312658;
        default: break;
    }

    ctx->pc = 0x312630u;

    // 0x312630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312634: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312638: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x312638u;
    {
        const bool branch_taken_0x312638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312638u;
        // 0x31263c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312638) {
            ctx->pc = 0x312658u;
            goto label_312658;
        }
    }
    ctx->pc = 0x312640u;
    // 0x312640: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312640u;
    {
        const bool branch_taken_0x312640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312640u;
        // 0x312644: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312640) {
            ctx->pc = 0x312658u;
            goto label_312658;
        }
    }
    ctx->pc = 0x312648u;
    // 0x312648: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x312648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x31264c: 0x24842170  addiu       $a0, $a0, 0x2170
    ctx->pc = 0x31264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    // 0x312650: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x312650u;
    SET_GPR_U32(ctx, 31, 0x312658u);
    ctx->pc = 0x312654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312650u;
    // 0x312654: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x312650u, 0x312658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312658u;
label_312658:
    // 0x312658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31265c: 0x3e00008  jr          $ra
    ctx->pc = 0x31265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31265Cu;
        // 0x312660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312664u;
    // 0x312664: 0x0  nop
    ctx->pc = 0x312664u;
    // NOP
    ctx->pc = 0x312668u;
}
