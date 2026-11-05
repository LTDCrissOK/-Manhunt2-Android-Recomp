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

// Function: sub_00187DD0
// Address: 0x187dd0 - 0x187e18
void sub_00187DD0_0x187dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187DD0_0x187dd0");
#endif

    switch (ctx->pc) {
        case 0x187df4u: goto label_187df4;
        case 0x187e00u: goto label_187e00;
        default: break;
    }

    ctx->pc = 0x187dd0u;

    // 0x187dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187de0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x187de4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x187DE4u;
    {
        const bool branch_taken_0x187de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187de4) {
            ctx->pc = 0x187DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187DE4u;
            // 0x187de8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E0Cu;
            goto label_187e0c;
        }
    }
    ctx->pc = 0x187DECu;
    // 0x187dec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x187DECu;
    SET_GPR_U32(ctx, 31, 0x187DF4u);
    ctx->pc = 0x187DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DECu;
    // 0x187df0: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187DECu, 0x187DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DF4u;
label_187df4:
    // 0x187df4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187df8: 0xc067c66  jal         func_19F198
    ctx->pc = 0x187DF8u;
    SET_GPR_U32(ctx, 31, 0x187E00u);
    ctx->pc = 0x187DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DF8u;
    // 0x187dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F198u, 0x187DF8u, 0x187E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E00u;
label_187e00:
    // 0x187e00: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x187e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x187e04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x187e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187e0c:
    // 0x187e0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187e10: 0x3e00008  jr          $ra
    ctx->pc = 0x187E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E10u;
        // 0x187e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187E18u;
}
