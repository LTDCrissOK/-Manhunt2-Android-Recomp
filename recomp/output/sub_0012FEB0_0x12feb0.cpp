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

// Function: sub_0012FEB0
// Address: 0x12feb0 - 0x12ff10
void sub_0012FEB0_0x12feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FEB0_0x12feb0");
#endif

    switch (ctx->pc) {
        case 0x12fed0u: goto label_12fed0;
        case 0x12fed8u: goto label_12fed8;
        case 0x12fefcu: goto label_12fefc;
        default: break;
    }

    ctx->pc = 0x12feb0u;

    // 0x12feb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12feb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12feb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12febc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fec0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12fec4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12fec8: 0xc047866  jal         func_11E198
    ctx->pc = 0x12FEC8u;
    SET_GPR_U32(ctx, 31, 0x12FED0u);
    ctx->pc = 0x12FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEC8u;
    // 0x12fecc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12FEC8u, 0x12FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FED0u;
label_12fed0:
    // 0x12fed0: 0xc04bfc4  jal         func_12FF10
    ctx->pc = 0x12FED0u;
    SET_GPR_U32(ctx, 31, 0x12FED8u);
    ctx->pc = 0x12FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FED0u;
    // 0x12fed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF10u, 0x12FED0u, 0x12FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FED8u;
label_12fed8:
    // 0x12fed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FED8u;
    {
        const bool branch_taken_0x12fed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FED8u;
        // 0x12fedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fed8) {
            ctx->pc = 0x12FEECu;
            goto label_12feec;
        }
    }
    ctx->pc = 0x12FEE0u;
    // 0x12fee0: 0x24050194  addiu       $a1, $zero, 0x194
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x12fee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12FEE4u;
    {
        const bool branch_taken_0x12fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEE4u;
        // 0x12fee8: 0x24060194  addiu       $a2, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fee4) {
            ctx->pc = 0x12FEF4u;
            goto label_12fef4;
        }
    }
    ctx->pc = 0x12FEECu;
label_12feec:
    // 0x12feec: 0x24050195  addiu       $a1, $zero, 0x195
    ctx->pc = 0x12feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x12fef0: 0x24060195  addiu       $a2, $zero, 0x195
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_12fef4:
    // 0x12fef4: 0xc04bf24  jal         func_12FC90
    ctx->pc = 0x12FEF4u;
    SET_GPR_U32(ctx, 31, 0x12FEFCu);
    ctx->pc = 0x12FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEF4u;
    // 0x12fef8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC90u, 0x12FEF4u, 0x12FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEFCu;
label_12fefc:
    // 0x12fefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ff00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12ff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ff04: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF04u;
        // 0x12ff08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FF0Cu;
    // 0x12ff0c: 0x0  nop
    ctx->pc = 0x12ff0cu;
    // NOP
    ctx->pc = 0x12ff10u;
}
