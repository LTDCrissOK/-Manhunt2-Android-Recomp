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

// Function: sub_0021CDB8
// Address: 0x21cdb8 - 0x21ce00
void sub_0021CDB8_0x21cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CDB8_0x21cdb8");
#endif

    switch (ctx->pc) {
        case 0x21cddcu: goto label_21cddc;
        case 0x21cdecu: goto label_21cdec;
        default: break;
    }

    ctx->pc = 0x21cdb8u;

    // 0x21cdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cdc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdc8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x21cdcc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CDCCu;
    {
        const bool branch_taken_0x21cdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdcc) {
            ctx->pc = 0x21CDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CDCCu;
            // 0x21cdd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CDF4u;
            goto label_21cdf4;
        }
    }
    ctx->pc = 0x21CDD4u;
    // 0x21cdd4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21CDD4u;
    SET_GPR_U32(ctx, 31, 0x21CDDCu);
    ctx->pc = 0x21CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDD4u;
    // 0x21cdd8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21CDD4u, 0x21CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDDCu;
label_21cddc:
    // 0x21cddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cde4: 0xc0d59bc  jal         func_3566F0
    ctx->pc = 0x21CDE4u;
    SET_GPR_U32(ctx, 31, 0x21CDECu);
    ctx->pc = 0x21CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDE4u;
    // 0x21cde8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3566F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3566F0u, 0x21CDE4u, 0x21CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDECu;
label_21cdec:
    // 0x21cdec: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x21cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x21cdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21cdf4:
    // 0x21cdf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDF8u;
        // 0x21cdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CE00u;
}
