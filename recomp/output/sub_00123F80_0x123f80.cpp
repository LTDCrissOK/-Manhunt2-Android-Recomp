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

// Function: sub_00123F80
// Address: 0x123f80 - 0x123fe0
void sub_00123F80_0x123f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123F80_0x123f80");
#endif

    switch (ctx->pc) {
        case 0x123fa8u: goto label_123fa8;
        case 0x123fbcu: goto label_123fbc;
        default: break;
    }

    ctx->pc = 0x123f80u;

    // 0x123f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123f9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fa0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123FA0u;
    SET_GPR_U32(ctx, 31, 0x123FA8u);
    ctx->pc = 0x123FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FA0u;
    // 0x123fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123FA0u, 0x123FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FA8u;
label_123fa8:
    // 0x123fa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123FA8u;
    {
        const bool branch_taken_0x123fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FA8u;
        // 0x123fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fa8) {
            ctx->pc = 0x123FC4u;
            goto label_123fc4;
        }
    }
    ctx->pc = 0x123FB0u;
    // 0x123fb0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123fb4: 0xc042bec  jal         func_10AFB0
    ctx->pc = 0x123FB4u;
    SET_GPR_U32(ctx, 31, 0x123FBCu);
    ctx->pc = 0x123FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FB4u;
    // 0x123fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AFB0u, 0x123FB4u, 0x123FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FBCu;
label_123fbc:
    // 0x123fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123FBCu;
    {
        const bool branch_taken_0x123fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FBCu;
        // 0x123fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fbc) {
            ctx->pc = 0x123FC8u;
            goto label_123fc8;
        }
    }
    ctx->pc = 0x123FC4u;
label_123fc4:
    // 0x123fc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123fc8:
    // 0x123fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123fd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x123FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FD8u;
        // 0x123fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123FE0u;
}
