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

// Function: sub_00249DC0
// Address: 0x249dc0 - 0x249e18
void sub_00249DC0_0x249dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249DC0_0x249dc0");
#endif

    switch (ctx->pc) {
        case 0x249de0u: goto label_249de0;
        case 0x249decu: goto label_249dec;
        case 0x249e04u: goto label_249e04;
        default: break;
    }

    ctx->pc = 0x249dc0u;

    // 0x249dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249dc4: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x249dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x249dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249dcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249dd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249dd4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x249dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x249dd8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x249DD8u;
    SET_GPR_U32(ctx, 31, 0x249DE0u);
    ctx->pc = 0x249DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DD8u;
    // 0x249ddc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x249DD8u, 0x249DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DE0u;
label_249de0:
    // 0x249de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249de4: 0xc08dc16  jal         func_237058
    ctx->pc = 0x249DE4u;
    SET_GPR_U32(ctx, 31, 0x249DECu);
    ctx->pc = 0x249DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DE4u;
    // 0x249de8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x249DE4u, 0x249DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DECu;
label_249dec:
    // 0x249dec: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x249decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x249df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249df8: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x249df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
    // 0x249dfc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x249DFCu;
    SET_GPR_U32(ctx, 31, 0x249E04u);
    ctx->pc = 0x249E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DFCu;
    // 0x249e00: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x249DFCu, 0x249E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E04u;
label_249e04:
    // 0x249e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249e08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x249E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E0Cu;
        // 0x249e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E14u;
    // 0x249e14: 0x0  nop
    ctx->pc = 0x249e14u;
    // NOP
    ctx->pc = 0x249e18u;
}
