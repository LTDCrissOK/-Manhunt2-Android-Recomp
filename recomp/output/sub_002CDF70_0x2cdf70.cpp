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

// Function: sub_002CDF70
// Address: 0x2cdf70 - 0x2cdfe8
void sub_002CDF70_0x2cdf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDF70_0x2cdf70");
#endif

    switch (ctx->pc) {
        case 0x2cdf94u: goto label_2cdf94;
        case 0x2cdfacu: goto label_2cdfac;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfd4u: goto label_2cdfd4;
        default: break;
    }

    ctx->pc = 0x2cdf70u;

    // 0x2cdf70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cdf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cdf74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cdf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cdf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cdf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cdf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cdf80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cdf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2cdf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2cdf88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2cdf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2cdf8c: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x2CDF8Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF94u);
    ctx->pc = 0x2CDF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF8Cu;
    // 0x2cdf90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x2CDF8Cu, 0x2CDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF94u;
label_2cdf94:
    // 0x2cdf94: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CDF94u;
    {
        const bool branch_taken_0x2cdf94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF94u;
        // 0x2cdf98: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf94) {
            ctx->pc = 0x2CDFD4u;
            goto label_2cdfd4;
        }
    }
    ctx->pc = 0x2CDF9Cu;
    // 0x2cdf9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cdfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfa4: 0xc0f3974  jal         func_3CE5D0
    ctx->pc = 0x2CDFA4u;
    SET_GPR_U32(ctx, 31, 0x2CDFACu);
    ctx->pc = 0x2CDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFA4u;
    // 0x2cdfa8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x2CDFA4u, 0x2CDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFACu;
label_2cdfac:
    // 0x2cdfac: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDFACu;
    {
        const bool branch_taken_0x2cdfac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFACu;
        // 0x2cdfb0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfac) {
            ctx->pc = 0x2CDFCCu;
            goto label_2cdfcc;
        }
    }
    ctx->pc = 0x2CDFB4u;
    // 0x2cdfb4: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2cdfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2cdfb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cdfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfbc: 0xc0f3974  jal         func_3CE5D0
    ctx->pc = 0x2CDFBCu;
    SET_GPR_U32(ctx, 31, 0x2CDFC4u);
    ctx->pc = 0x2CDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFBCu;
    // 0x2cdfc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x2CDFBCu, 0x2CDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFC4u;
label_2cdfc4:
    // 0x2cdfc4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDFC4u;
    {
        const bool branch_taken_0x2cdfc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFC4u;
        // 0x2cdfc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfc4) {
            ctx->pc = 0x2CDFD8u;
            goto label_2cdfd8;
        }
    }
    ctx->pc = 0x2CDFCCu;
label_2cdfcc:
    // 0x2cdfcc: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x2CDFCCu;
    SET_GPR_U32(ctx, 31, 0x2CDFD4u);
    ctx->pc = 0x2CDFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFCCu;
    // 0x2cdfd0: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x2CDFCCu, 0x2CDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFD4u;
label_2cdfd4:
    // 0x2cdfd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfd8:
    // 0x2cdfd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cdfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdfdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cdfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cdfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFE0u;
        // 0x2cdfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDFE8u;
}
