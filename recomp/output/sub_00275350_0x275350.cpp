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

// Function: sub_00275350
// Address: 0x275350 - 0x275388
void sub_00275350_0x275350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275350_0x275350");
#endif

    switch (ctx->pc) {
        case 0x275364u: goto label_275364;
        case 0x275378u: goto label_275378;
        default: break;
    }

    ctx->pc = 0x275350u;

    // 0x275350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275354: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x275354u;
    {
        const bool branch_taken_0x275354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275354u;
        // 0x275358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275354) {
            ctx->pc = 0x27536Cu;
            goto label_27536c;
        }
    }
    ctx->pc = 0x27535Cu;
    // 0x27535c: 0xc09d4ea  jal         func_2753A8
    ctx->pc = 0x27535Cu;
    SET_GPR_U32(ctx, 31, 0x275364u);
    ctx->pc = 0x2753A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753A8u, 0x27535Cu, 0x275364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275364u;
label_275364:
    // 0x275364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275364u;
    {
        const bool branch_taken_0x275364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275364) {
            ctx->pc = 0x27537Cu;
            goto label_27537c;
        }
    }
    ctx->pc = 0x27536Cu;
label_27536c:
    // 0x27536c: 0x24840230  addiu       $a0, $a0, 0x230
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x275370: 0xc09cb60  jal         func_272D80
    ctx->pc = 0x275370u;
    SET_GPR_U32(ctx, 31, 0x275378u);
    ctx->pc = 0x275374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275370u;
    // 0x275374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272D80u, 0x275370u, 0x275378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275378u;
label_275378:
    // 0x275378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27537c:
    // 0x27537c: 0x3e00008  jr          $ra
    ctx->pc = 0x27537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27537Cu;
        // 0x275380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275384u;
    // 0x275384: 0x0  nop
    ctx->pc = 0x275384u;
    // NOP
    ctx->pc = 0x275388u;
}
