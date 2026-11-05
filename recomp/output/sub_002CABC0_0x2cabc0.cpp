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

// Function: sub_002CABC0
// Address: 0x2cabc0 - 0x2cac20
void sub_002CABC0_0x2cabc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CABC0_0x2cabc0");
#endif

    switch (ctx->pc) {
        case 0x2cabd4u: goto label_2cabd4;
        case 0x2cac00u: goto label_2cac00;
        default: break;
    }

    ctx->pc = 0x2cabc0u;

    // 0x2cabc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cabc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cabc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cabc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cabc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cabc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cabcc: 0xc0b2b22  jal         func_2CAC88
    ctx->pc = 0x2CABCCu;
    SET_GPR_U32(ctx, 31, 0x2CABD4u);
    ctx->pc = 0x2CABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABCCu;
    // 0x2cabd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC88u, 0x2CABCCu, 0x2CABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABD4u;
label_2cabd4:
    // 0x2cabd4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2cabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cabd8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CABD8u;
    {
        const bool branch_taken_0x2cabd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABD8u;
        // 0x2cabdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabd8) {
            ctx->pc = 0x2CABECu;
            goto label_2cabec;
        }
    }
    ctx->pc = 0x2CABE0u;
    // 0x2cabe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cabe4: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CABE4u;
    {
        const bool branch_taken_0x2cabe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cabe4) {
            ctx->pc = 0x2CABE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABE4u;
            // 0x2cabe8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC08u;
            goto label_2cac08;
        }
    }
    ctx->pc = 0x2CABECu;
label_2cabec:
    // 0x2cabec: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x2cabecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x2cabf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CABF0u;
    {
        const bool branch_taken_0x2cabf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABF0u;
        // 0x2cabf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabf0) {
            ctx->pc = 0x2CAC10u;
            goto label_2cac10;
        }
    }
    ctx->pc = 0x2CABF8u;
    // 0x2cabf8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2CABF8u;
    SET_GPR_U32(ctx, 31, 0x2CAC00u);
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2CABF8u, 0x2CAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC00u;
label_2cac00:
    // 0x2cac00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAC00u;
    {
        const bool branch_taken_0x2cac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC00u;
        // 0x2cac04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac00) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAC08u;
label_2cac08:
    // 0x2cac08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2cac08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac0c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2cac10:
    // 0x2cac10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cac10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cac14:
    // 0x2cac14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cac18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC18u;
        // 0x2cac1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAC20u;
}
