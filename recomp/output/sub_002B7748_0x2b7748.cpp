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

// Function: sub_002B7748
// Address: 0x2b7748 - 0x2b77a8
void sub_002B7748_0x2b7748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7748_0x2b7748");
#endif

    switch (ctx->pc) {
        case 0x2b775cu: goto label_2b775c;
        case 0x2b7764u: goto label_2b7764;
        case 0x2b7778u: goto label_2b7778;
        case 0x2b7780u: goto label_2b7780;
        case 0x2b7788u: goto label_2b7788;
        case 0x2b7790u: goto label_2b7790;
        default: break;
    }

    ctx->pc = 0x2b7748u;

    // 0x2b7748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b774c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7750: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b7754: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7754u;
    SET_GPR_U32(ctx, 31, 0x2B775Cu);
    ctx->pc = 0x2B7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7754u;
    // 0x2b7758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7754u, 0x2B775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B775Cu;
label_2b775c:
    // 0x2b775c: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B775Cu;
    SET_GPR_U32(ctx, 31, 0x2B7764u);
    ctx->pc = 0x2B7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B775Cu;
    // 0x2b7760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B775Cu, 0x2B7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7764u;
label_2b7764:
    // 0x2b7764: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b7764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b7768: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7768u;
    {
        const bool branch_taken_0x2b7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7768u;
        // 0x2b776c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7768) {
            ctx->pc = 0x2B7798u;
            goto label_2b7798;
        }
    }
    ctx->pc = 0x2B7770u;
    // 0x2b7770: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7770u;
    SET_GPR_U32(ctx, 31, 0x2B7778u);
    ctx->pc = 0x2B7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7770u;
    // 0x2b7774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7770u, 0x2B7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7778u;
label_2b7778:
    // 0x2b7778: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B7778u;
    SET_GPR_U32(ctx, 31, 0x2B7780u);
    ctx->pc = 0x2B777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7778u;
    // 0x2b777c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B7778u, 0x2B7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7780u;
label_2b7780:
    // 0x2b7780: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7780u;
    SET_GPR_U32(ctx, 31, 0x2B7788u);
    ctx->pc = 0x2B7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7780u;
    // 0x2b7784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7780u, 0x2B7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7788u;
label_2b7788:
    // 0x2b7788: 0xc0ad3fa  jal         func_2B4FE8
    ctx->pc = 0x2B7788u;
    SET_GPR_U32(ctx, 31, 0x2B7790u);
    ctx->pc = 0x2B778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7788u;
    // 0x2b778c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FE8u, 0x2B7788u, 0x2B7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7790u;
label_2b7790:
    // 0x2b7790: 0xae025908  sw          $v0, 0x5908($s0)
    ctx->pc = 0x2b7790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22792), GPR_U32(ctx, 2));
    // 0x2b7794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7798:
    // 0x2b7798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b779c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b779cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b77a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B77A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77A0u;
        // 0x2b77a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B77A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B77A8u;
}
