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

// Function: sub_0014B4D8
// Address: 0x14b4d8 - 0x14b538
void sub_0014B4D8_0x14b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4D8_0x14b4d8");
#endif

    switch (ctx->pc) {
        case 0x14b508u: goto label_14b508;
        case 0x14b514u: goto label_14b514;
        case 0x14b524u: goto label_14b524;
        default: break;
    }

    ctx->pc = 0x14b4d8u;

    // 0x14b4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b4dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14b4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14b4e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4e8: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x14b4ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14B4ECu;
    {
        const bool branch_taken_0x14b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4ECu;
        // 0x14b4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4ec) {
            ctx->pc = 0x14B528u;
            goto label_14b528;
        }
    }
    ctx->pc = 0x14B4F4u;
    // 0x14b4f4: 0x8e020598  lw          $v0, 0x598($s0)
    ctx->pc = 0x14b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x14b4f8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14B4F8u;
    {
        const bool branch_taken_0x14b4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b4f8) {
            ctx->pc = 0x14B4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B4F8u;
            // 0x14b4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B528u;
            goto label_14b528;
        }
    }
    ctx->pc = 0x14B500u;
    // 0x14b500: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14B500u;
    SET_GPR_U32(ctx, 31, 0x14B508u);
    ctx->pc = 0x14B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B500u;
    // 0x14b504: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14B500u, 0x14B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B508u;
label_14b508:
    // 0x14b508: 0x8e050598  lw          $a1, 0x598($s0)
    ctx->pc = 0x14b508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x14b50c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14B50Cu;
    SET_GPR_U32(ctx, 31, 0x14B514u);
    ctx->pc = 0x14B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B50Cu;
    // 0x14b510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14B50Cu, 0x14B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B514u;
label_14b514:
    // 0x14b514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b51c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14B51Cu;
    SET_GPR_U32(ctx, 31, 0x14B524u);
    ctx->pc = 0x14B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B51Cu;
    // 0x14b520: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14B51Cu, 0x14B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B524u;
label_14b524:
    // 0x14b524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b528:
    // 0x14b528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14b528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b52c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b530: 0x3e00008  jr          $ra
    ctx->pc = 0x14B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B530u;
        // 0x14b534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B538u;
}
