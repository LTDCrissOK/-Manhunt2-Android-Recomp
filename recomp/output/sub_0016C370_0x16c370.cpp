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

// Function: sub_0016C370
// Address: 0x16c370 - 0x16c3b8
void sub_0016C370_0x16c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C370_0x16c370");
#endif

    switch (ctx->pc) {
        case 0x16c384u: goto label_16c384;
        case 0x16c3a4u: goto label_16c3a4;
        default: break;
    }

    ctx->pc = 0x16c370u;

    // 0x16c370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c37c: 0xc04f794  jal         func_13DE50
    ctx->pc = 0x16C37Cu;
    SET_GPR_U32(ctx, 31, 0x16C384u);
    ctx->pc = 0x16C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C37Cu;
    // 0x16c380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE50u, 0x16C37Cu, 0x16C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C384u;
label_16c384:
    // 0x16c384: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16c384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16c388: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x16c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x16c38c: 0x24630e10  addiu       $v1, $v1, 0xE10
    ctx->pc = 0x16c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x16c390: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x16c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x16c394: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x16c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x16c398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c39c: 0xc05b1b4  jal         func_16C6D0
    ctx->pc = 0x16C39Cu;
    SET_GPR_U32(ctx, 31, 0x16C3A4u);
    ctx->pc = 0x16C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C39Cu;
    // 0x16c3a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C6D0u, 0x16C39Cu, 0x16C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3A4u;
label_16c3a4:
    // 0x16c3a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3B0u;
        // 0x16c3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C3B8u;
}
