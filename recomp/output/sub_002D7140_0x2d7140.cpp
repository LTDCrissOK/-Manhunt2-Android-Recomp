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

// Function: sub_002D7140
// Address: 0x2d7140 - 0x2d71a0
void sub_002D7140_0x2d7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7140_0x2d7140");
#endif

    switch (ctx->pc) {
        case 0x2d7164u: goto label_2d7164;
        case 0x2d7180u: goto label_2d7180;
        case 0x2d718cu: goto label_2d718c;
        default: break;
    }

    ctx->pc = 0x2d7140u;

    // 0x2d7140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7144: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d7144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d7148: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d714c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2d714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2d7150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7154: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d7158: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d7158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d715c: 0xc0d99dc  jal         func_366770
    ctx->pc = 0x2D715Cu;
    SET_GPR_U32(ctx, 31, 0x2D7164u);
    ctx->pc = 0x2D7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D715Cu;
    // 0x2d7160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366770u, 0x2D715Cu, 0x2D7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7164u;
label_2d7164:
    // 0x2d7164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7168: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7168u;
    {
        const bool branch_taken_0x2d7168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7168u;
        // 0x2d716c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7168) {
            ctx->pc = 0x2D718Cu;
            goto label_2d718c;
        }
    }
    ctx->pc = 0x2D7170u;
    // 0x2d7170: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7178: 0xc0d99d4  jal         func_366750
    ctx->pc = 0x2D7178u;
    SET_GPR_U32(ctx, 31, 0x2D7180u);
    ctx->pc = 0x2D717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7178u;
    // 0x2d717c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366750u, 0x2D7178u, 0x2D7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7180u;
label_2d7180:
    // 0x2d7180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7184: 0xc0d99e4  jal         func_366790
    ctx->pc = 0x2D7184u;
    SET_GPR_U32(ctx, 31, 0x2D718Cu);
    ctx->pc = 0x2D7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7184u;
    // 0x2d7188: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366790u, 0x2D7184u, 0x2D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D718Cu;
label_2d718c:
    // 0x2d718c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d718cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7194: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d7194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7198: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7198u;
        // 0x2d719c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D71A0u;
}
