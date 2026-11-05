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

// Function: sub_00157158
// Address: 0x157158 - 0x1571b0
void sub_00157158_0x157158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157158_0x157158");
#endif

    switch (ctx->pc) {
        case 0x15717cu: goto label_15717c;
        case 0x157184u: goto label_157184;
        case 0x15718cu: goto label_15718c;
        case 0x157194u: goto label_157194;
        case 0x15719cu: goto label_15719c;
        default: break;
    }

    ctx->pc = 0x157158u;

    // 0x157158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15715c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157160: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x157160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x157164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157168: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x157168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15716c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15716Cu;
    {
        const bool branch_taken_0x15716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15716c) {
            ctx->pc = 0x157170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15716Cu;
            // 0x157170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1571A0u;
            goto label_1571a0;
        }
    }
    ctx->pc = 0x157174u;
    // 0x157174: 0xc055cc0  jal         func_157300
    ctx->pc = 0x157174u;
    SET_GPR_U32(ctx, 31, 0x15717Cu);
    ctx->pc = 0x157300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157300u, 0x157174u, 0x15717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15717Cu;
label_15717c:
    // 0x15717c: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x15717Cu;
    SET_GPR_U32(ctx, 31, 0x157184u);
    ctx->pc = 0x157180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15717Cu;
    // 0x157180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x15717Cu, 0x157184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157184u;
label_157184:
    // 0x157184: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x157184u;
    SET_GPR_U32(ctx, 31, 0x15718Cu);
    ctx->pc = 0x157188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157184u;
    // 0x157188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x157184u, 0x15718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15718Cu;
label_15718c:
    // 0x15718c: 0xc055cec  jal         func_1573B0
    ctx->pc = 0x15718Cu;
    SET_GPR_U32(ctx, 31, 0x157194u);
    ctx->pc = 0x157190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15718Cu;
    // 0x157190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573B0u, 0x15718Cu, 0x157194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157194u;
label_157194:
    // 0x157194: 0xc055d5e  jal         func_157578
    ctx->pc = 0x157194u;
    SET_GPR_U32(ctx, 31, 0x15719Cu);
    ctx->pc = 0x157198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157194u;
    // 0x157198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157578u, 0x157194u, 0x15719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15719Cu;
label_15719c:
    // 0x15719c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15719cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1571a0:
    // 0x1571a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1571a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1571a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1571A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1571A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571A4u;
        // 0x1571a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1571ACu;
    // 0x1571ac: 0x0  nop
    ctx->pc = 0x1571acu;
    // NOP
    ctx->pc = 0x1571b0u;
}
