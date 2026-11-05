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

// Function: sub_001237F0
// Address: 0x1237f0 - 0x123840
void sub_001237F0_0x1237f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001237F0_0x1237f0");
#endif

    switch (ctx->pc) {
        case 0x123810u: goto label_123810;
        case 0x123824u: goto label_123824;
        default: break;
    }

    ctx->pc = 0x1237f0u;

    // 0x1237f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1237f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1237f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1237f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1237f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1237f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1237fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1237fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123808: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123808u;
    SET_GPR_U32(ctx, 31, 0x123810u);
    ctx->pc = 0x12380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123808u;
    // 0x12380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123808u, 0x123810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123810u;
label_123810:
    // 0x123810: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123810u;
    {
        const bool branch_taken_0x123810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123810u;
        // 0x123814: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123810) {
            ctx->pc = 0x12382Cu;
            goto label_12382c;
        }
    }
    ctx->pc = 0x123818u;
    // 0x123818: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12381c: 0xc042b7c  jal         func_10ADF0
    ctx->pc = 0x12381Cu;
    SET_GPR_U32(ctx, 31, 0x123824u);
    ctx->pc = 0x123820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12381Cu;
    // 0x123820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ADF0u, 0x12381Cu, 0x123824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123824u;
label_123824:
    // 0x123824: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123824u;
    {
        const bool branch_taken_0x123824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123824u;
        // 0x123828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123824) {
            ctx->pc = 0x123830u;
            goto label_123830;
        }
    }
    ctx->pc = 0x12382Cu;
label_12382c:
    // 0x12382c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123830:
    // 0x123830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123838: 0x3e00008  jr          $ra
    ctx->pc = 0x123838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123838u;
        // 0x12383c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123840u;
}
