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

// Function: sub_002A1DC0
// Address: 0x2a1dc0 - 0x2a1e28
void sub_002A1DC0_0x2a1dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1DC0_0x2a1dc0");
#endif

    switch (ctx->pc) {
        case 0x2a1e08u: goto label_2a1e08;
        default: break;
    }

    ctx->pc = 0x2a1dc0u;

    // 0x2a1dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1dc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a1dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1dd0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a1dd4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2a1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a1dd8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1DD8u;
    {
        const bool branch_taken_0x2a1dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DD8u;
        // 0x2a1ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dd8) {
            ctx->pc = 0x2A1DF0u;
            goto label_2a1df0;
        }
    }
    ctx->pc = 0x2A1DE0u;
    // 0x2a1de0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2a1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a1de4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a1de8: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1DE8u;
    {
        const bool branch_taken_0x2a1de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1de8) {
            ctx->pc = 0x2A1DF4u;
            goto label_2a1df4;
        }
    }
    ctx->pc = 0x2A1DF0u;
label_2a1df0:
    // 0x2a1df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1df4:
    // 0x2a1df4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1DF4u;
    {
        const bool branch_taken_0x2a1df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1df4) {
            ctx->pc = 0x2A1DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1DF4u;
            // 0x2a1df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E1Cu;
            goto label_2a1e1c;
        }
    }
    ctx->pc = 0x2A1DFCu;
    // 0x2a1dfc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2a1dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a1e00: 0xc0a878e  jal         func_2A1E38
    ctx->pc = 0x2A1E00u;
    SET_GPR_U32(ctx, 31, 0x2A1E08u);
    ctx->pc = 0x2A1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E00u;
    // 0x2a1e04: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E38u, 0x2A1E00u, 0x2A1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E08u;
label_2a1e08:
    // 0x2a1e08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a1e0c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2a1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a1e10: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2a1e14: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2a1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2a1e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1e1c:
    // 0x2a1e1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a1e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E20u;
        // 0x2a1e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1E28u;
}
