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

// Function: sub_003E1DC0
// Address: 0x3e1dc0 - 0x3e1e18
void sub_003E1DC0_0x3e1dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1DC0_0x3e1dc0");
#endif

    switch (ctx->pc) {
        case 0x3e1df0u: goto label_3e1df0;
        case 0x3e1e04u: goto label_3e1e04;
        default: break;
    }

    ctx->pc = 0x3e1dc0u;

    // 0x3e1dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1dc4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1dcc: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x3e1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x3e1dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1dd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1de0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x3e1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x3e1de4: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x3e1de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x3e1de8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1DE8u;
    SET_GPR_U32(ctx, 31, 0x3E1DF0u);
    ctx->pc = 0x3E1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1DE8u;
    // 0x3e1dec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1DE8u, 0x3E1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1DF0u;
label_3e1df0:
    // 0x3e1df0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1df0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1df4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1DF4u;
    {
        const bool branch_taken_0x3e1df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DF4u;
        // 0x3e1df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1df4) {
            ctx->pc = 0x3E1E08u;
            goto label_3e1e08;
        }
    }
    ctx->pc = 0x3E1DFCu;
    // 0x3e1dfc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1DFCu;
    SET_GPR_U32(ctx, 31, 0x3E1E04u);
    ctx->pc = 0x3E1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1DFCu;
    // 0x3e1e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1DFCu, 0x3E1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E04u;
label_3e1e04:
    // 0x3e1e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1e08:
    // 0x3e1e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1e0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1e10: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E10u;
        // 0x3e1e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1E18u;
}
