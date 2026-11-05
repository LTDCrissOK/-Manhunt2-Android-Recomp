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

// Function: sub_0016C420
// Address: 0x16c420 - 0x16c488
void sub_0016C420_0x16c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C420_0x16c420");
#endif

    switch (ctx->pc) {
        case 0x16c444u: goto label_16c444;
        case 0x16c44cu: goto label_16c44c;
        case 0x16c45cu: goto label_16c45c;
        case 0x16c46cu: goto label_16c46c;
        default: break;
    }

    ctx->pc = 0x16c420u;

    // 0x16c420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c434: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16c434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c438: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c43c: 0xc05b1b4  jal         func_16C6D0
    ctx->pc = 0x16C43Cu;
    SET_GPR_U32(ctx, 31, 0x16C444u);
    ctx->pc = 0x16C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C43Cu;
    // 0x16c440: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C6D0u, 0x16C43Cu, 0x16C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C444u;
label_16c444:
    // 0x16c444: 0xc04f8a2  jal         func_13E288
    ctx->pc = 0x16C444u;
    SET_GPR_U32(ctx, 31, 0x16C44Cu);
    ctx->pc = 0x16C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C444u;
    // 0x16c448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E288u, 0x16C444u, 0x16C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C44Cu;
label_16c44c:
    // 0x16c44c: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x16c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x16c450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c454: 0xc05b3d6  jal         func_16CF58
    ctx->pc = 0x16C454u;
    SET_GPR_U32(ctx, 31, 0x16C45Cu);
    ctx->pc = 0x16C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C454u;
    // 0x16c458: 0xae120058  sw          $s2, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF58u, 0x16C454u, 0x16C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C45Cu;
label_16c45c:
    // 0x16c45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c464: 0xc04f8c0  jal         func_13E300
    ctx->pc = 0x16C464u;
    SET_GPR_U32(ctx, 31, 0x16C46Cu);
    ctx->pc = 0x16C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C464u;
    // 0x16c468: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E300u, 0x16C464u, 0x16C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C46Cu;
label_16c46c:
    // 0x16c46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c478: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C47Cu;
        // 0x16c480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C484u;
    // 0x16c484: 0x0  nop
    ctx->pc = 0x16c484u;
    // NOP
    ctx->pc = 0x16c488u;
}
