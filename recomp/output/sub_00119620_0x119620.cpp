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

// Function: sub_00119620
// Address: 0x119620 - 0x119658
void sub_00119620_0x119620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119620_0x119620");
#endif

    switch (ctx->pc) {
        case 0x119634u: goto label_119634;
        case 0x119644u: goto label_119644;
        default: break;
    }

    ctx->pc = 0x119620u;

    // 0x119620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x119628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11962c: 0xc046b20  jal         func_11AC80
    ctx->pc = 0x11962Cu;
    SET_GPR_U32(ctx, 31, 0x119634u);
    ctx->pc = 0x119630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11962Cu;
    // 0x119630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC80u, 0x11962Cu, 0x119634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119634u;
label_119634:
    // 0x119634: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x119634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11963c: 0xc046596  jal         func_119658
    ctx->pc = 0x11963Cu;
    SET_GPR_U32(ctx, 31, 0x119644u);
    ctx->pc = 0x119640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11963Cu;
    // 0x119640: 0xae021240  sw          $v0, 0x1240($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119658u, 0x11963Cu, 0x119644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119644u;
label_119644:
    // 0x119644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11964c: 0x3e00008  jr          $ra
    ctx->pc = 0x11964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11964Cu;
        // 0x119650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119654u;
    // 0x119654: 0x0  nop
    ctx->pc = 0x119654u;
    // NOP
    ctx->pc = 0x119658u;
}
