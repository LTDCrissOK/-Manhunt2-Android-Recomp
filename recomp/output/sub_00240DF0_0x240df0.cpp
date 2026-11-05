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

// Function: sub_00240DF0
// Address: 0x240df0 - 0x240e48
void sub_00240DF0_0x240df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240DF0_0x240df0");
#endif

    switch (ctx->pc) {
        case 0x240e08u: goto label_240e08;
        case 0x240e28u: goto label_240e28;
        case 0x240e38u: goto label_240e38;
        default: break;
    }

    ctx->pc = 0x240df0u;

    // 0x240df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240dfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240e00: 0xc08dc16  jal         func_237058
    ctx->pc = 0x240E00u;
    SET_GPR_U32(ctx, 31, 0x240E08u);
    ctx->pc = 0x240E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E00u;
    // 0x240e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x240E00u, 0x240E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E08u;
label_240e08:
    // 0x240e08: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x240e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e10: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x240e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x240e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e18: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x240e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x240e1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x240e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x240e20: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x240E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E20u;
    // 0x240e24: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240E20u, 0x240E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E28u;
label_240e28:
    // 0x240e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e2c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x240e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x240e30: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240E30u;
    SET_GPR_U32(ctx, 31, 0x240E38u);
    ctx->pc = 0x240E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E30u;
    // 0x240e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240E30u, 0x240E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E38u;
label_240e38:
    // 0x240e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240e40: 0x3e00008  jr          $ra
    ctx->pc = 0x240E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E40u;
        // 0x240e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E48u;
}
