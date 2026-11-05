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

// Function: sub_00123750
// Address: 0x123750 - 0x1237a0
void sub_00123750_0x123750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123750_0x123750");
#endif

    switch (ctx->pc) {
        case 0x123770u: goto label_123770;
        case 0x123784u: goto label_123784;
        default: break;
    }

    ctx->pc = 0x123750u;

    // 0x123750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12375c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12375cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123768: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123768u;
    SET_GPR_U32(ctx, 31, 0x123770u);
    ctx->pc = 0x12376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123768u;
    // 0x12376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123768u, 0x123770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123770u;
label_123770:
    // 0x123770: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123770u;
    {
        const bool branch_taken_0x123770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123770u;
        // 0x123774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123770) {
            ctx->pc = 0x12378Cu;
            goto label_12378c;
        }
    }
    ctx->pc = 0x123778u;
    // 0x123778: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12377c: 0xc042590  jal         func_109640
    ctx->pc = 0x12377Cu;
    SET_GPR_U32(ctx, 31, 0x123784u);
    ctx->pc = 0x123780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12377Cu;
    // 0x123780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109640u, 0x12377Cu, 0x123784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123784u;
label_123784:
    // 0x123784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123784u;
    {
        const bool branch_taken_0x123784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123784u;
        // 0x123788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123784) {
            ctx->pc = 0x123790u;
            goto label_123790;
        }
    }
    ctx->pc = 0x12378Cu;
label_12378c:
    // 0x12378c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12378cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123790:
    // 0x123790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123798: 0x3e00008  jr          $ra
    ctx->pc = 0x123798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123798u;
        // 0x12379c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1237A0u;
}
