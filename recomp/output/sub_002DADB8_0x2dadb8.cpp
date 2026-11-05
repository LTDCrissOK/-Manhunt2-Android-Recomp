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

// Function: sub_002DADB8
// Address: 0x2dadb8 - 0x2dae08
void sub_002DADB8_0x2dadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DADB8_0x2dadb8");
#endif

    switch (ctx->pc) {
        case 0x2dade0u: goto label_2dade0;
        case 0x2dadf4u: goto label_2dadf4;
        default: break;
    }

    ctx->pc = 0x2dadb8u;

    // 0x2dadb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dadb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dadbc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2dadc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dadc4: 0x24423e28  addiu       $v0, $v0, 0x3E28
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15912));
    // 0x2dadc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dadc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dadcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dadccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dadd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dadd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadd8: 0xc0b6b82  jal         func_2DAE08
    ctx->pc = 0x2DADD8u;
    SET_GPR_U32(ctx, 31, 0x2DADE0u);
    ctx->pc = 0x2DADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADD8u;
    // 0x2daddc: 0xae2263f8  sw          $v0, 0x63F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 25592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE08u, 0x2DADD8u, 0x2DADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADE0u;
label_2dade0:
    // 0x2dade0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2dade4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DADE4u;
    {
        const bool branch_taken_0x2dade4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADE4u;
        // 0x2dade8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dade4) {
            ctx->pc = 0x2DADF8u;
            goto label_2dadf8;
        }
    }
    ctx->pc = 0x2DADECu;
    // 0x2dadec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2DADECu;
    SET_GPR_U32(ctx, 31, 0x2DADF4u);
    ctx->pc = 0x2DADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADECu;
    // 0x2dadf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2DADECu, 0x2DADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADF4u;
label_2dadf4:
    // 0x2dadf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dadf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dadf8:
    // 0x2dadf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dadf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dadfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dadfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dae00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE00u;
        // 0x2dae04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAE08u;
}
