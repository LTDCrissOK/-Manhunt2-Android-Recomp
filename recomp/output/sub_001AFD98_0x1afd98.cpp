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

// Function: sub_001AFD98
// Address: 0x1afd98 - 0x1afe38
void sub_001AFD98_0x1afd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFD98_0x1afd98");
#endif

    switch (ctx->pc) {
        case 0x1afde8u: goto label_1afde8;
        case 0x1afdf4u: goto label_1afdf4;
        default: break;
    }

    ctx->pc = 0x1afd98u;

    // 0x1afd98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afd9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1afda0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1afda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1afda4: 0x24448658  addiu       $a0, $v0, -0x79A8
    ctx->pc = 0x1afda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x1afda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afdac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1afdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afdb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1afdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1afdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afdb8: 0x8c900288  lw          $s0, 0x288($a0)
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F88E0u));
    // 0x1afdbc: 0x8c8202e8  lw          $v0, 0x2E8($a0)
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8940u));
    // 0x1afdc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1afdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1afdc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFDC4u;
    {
        const bool branch_taken_0x1afdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDC4u;
        // 0x1afdc8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdc4) {
            ctx->pc = 0x1AFE14u;
            goto label_1afe14;
        }
    }
    ctx->pc = 0x1AFDCCu;
    // 0x1afdcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1afdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1afdd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1afdd4: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1afdd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1afdd8: 0x24427190  addiu       $v0, $v0, 0x7190
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    // 0x1afddc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1afddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afde0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1afde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1afde4: 0x0  nop
    ctx->pc = 0x1afde4u;
    // NOP
label_1afde8:
    // 0x1afde8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1afde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1afdec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1AFDECu;
    SET_GPR_U32(ctx, 31, 0x1AFDF4u);
    ctx->pc = 0x1AFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDECu;
    // 0x1afdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1AFDECu, 0x1AFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDF4u;
label_1afdf4:
    // 0x1afdf4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFDF4u;
    {
        const bool branch_taken_0x1afdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afdf4) {
            ctx->pc = 0x1AFDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFDF4u;
            // 0x1afdf8: 0x8e6202e8  lw          $v0, 0x2E8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFE04u;
            goto label_1afe04;
        }
    }
    ctx->pc = 0x1AFDFCu;
    // 0x1afdfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFDFCu;
    {
        const bool branch_taken_0x1afdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDFCu;
        // 0x1afe00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdfc) {
            ctx->pc = 0x1AFE18u;
            goto label_1afe18;
        }
    }
    ctx->pc = 0x1AFE04u;
label_1afe04:
    // 0x1afe04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1afe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1afe08: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1afe08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1afe0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFE0Cu;
    {
        const bool branch_taken_0x1afe0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE0Cu;
        // 0x1afe10: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe0c) {
            ctx->pc = 0x1AFDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afde8;
        }
    }
    ctx->pc = 0x1AFE14u;
label_1afe14:
    // 0x1afe14: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1afe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1afe18:
    // 0x1afe18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afe18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afe1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afe20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afe24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afe24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afe28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE2Cu;
        // 0x1afe30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFE34u;
    // 0x1afe34: 0x0  nop
    ctx->pc = 0x1afe34u;
    // NOP
    ctx->pc = 0x1afe38u;
}
