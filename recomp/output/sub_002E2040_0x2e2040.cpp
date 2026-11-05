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

// Function: sub_002E2040
// Address: 0x2e2040 - 0x2e2130
void sub_002E2040_0x2e2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2040_0x2e2040");
#endif

    switch (ctx->pc) {
        case 0x2e2070u: goto label_2e2070;
        case 0x2e207cu: goto label_2e207c;
        case 0x2e20a0u: goto label_2e20a0;
        case 0x2e20c8u: goto label_2e20c8;
        case 0x2e20d4u: goto label_2e20d4;
        case 0x2e20f0u: goto label_2e20f0;
        default: break;
    }

    ctx->pc = 0x2e2040u;

    // 0x2e2040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2044: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e204c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e204cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2054: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2e2054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e2058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e2058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e205c: 0x24110031  addiu       $s1, $zero, 0x31
    ctx->pc = 0x2e205cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e2060: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e2064: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2e2064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2068: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e206c: 0x0  nop
    ctx->pc = 0x2e206cu;
    // NOP
label_2e2070:
    // 0x2e2070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2074: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2074u;
    SET_GPR_U32(ctx, 31, 0x2E207Cu);
    ctx->pc = 0x2E2078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2074u;
    // 0x2e2078: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2074u, 0x2E207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E207Cu;
label_2e207c:
    // 0x2e207c: 0x0  nop
    ctx->pc = 0x2e207cu;
    // NOP
    // 0x2e2080: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2080u;
    {
        const bool branch_taken_0x2e2080 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2080u;
        // 0x2e2084: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2080) {
            ctx->pc = 0x2E2070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E2088u;
    // 0x2e2088: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2e2088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e208c: 0x26540970  addiu       $s4, $s2, 0x970
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2416));
    // 0x2e2090: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e2090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e2094: 0x26440980  addiu       $a0, $s2, 0x980
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2432));
    // 0x2e2098: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e209c: 0x26420960  addiu       $v0, $s2, 0x960
    ctx->pc = 0x2e209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2400));
label_2e20a0:
    // 0x2e20a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e20a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e20a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e20a8: 0x0  nop
    ctx->pc = 0x2e20a8u;
    // NOP
    // 0x2e20ac: 0x0  nop
    ctx->pc = 0x2e20acu;
    // NOP
    // 0x2e20b0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E20B0u;
    {
        const bool branch_taken_0x2e20b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20B0u;
        // 0x2e20b4: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20b0) {
            ctx->pc = 0x2E20A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e20a0;
        }
    }
    ctx->pc = 0x2E20B8u;
    // 0x2e20b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e20b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20bc: 0x24110031  addiu       $s1, $zero, 0x31
    ctx->pc = 0x2e20bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e20c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2e20c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e20c4: 0x0  nop
    ctx->pc = 0x2e20c4u;
    // NOP
label_2e20c8:
    // 0x2e20c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E20CCu;
    SET_GPR_U32(ctx, 31, 0x2E20D4u);
    ctx->pc = 0x2E20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20CCu;
    // 0x2e20d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E20CCu, 0x2E20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20D4u;
label_2e20d4:
    // 0x2e20d4: 0x0  nop
    ctx->pc = 0x2e20d4u;
    // NOP
    // 0x2e20d8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E20D8u;
    {
        const bool branch_taken_0x2e20d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20D8u;
        // 0x2e20dc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20d8) {
            ctx->pc = 0x2E20C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e20c8;
        }
    }
    ctx->pc = 0x2E20E0u;
    // 0x2e20e0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2e20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e20e4: 0x26830640  addiu       $v1, $s4, 0x640
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1600));
    // 0x2e20e8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2e20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2e20ec: 0x0  nop
    ctx->pc = 0x2e20ecu;
    // NOP
label_2e20f0:
    // 0x2e20f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e20f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e20f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e20f8: 0x0  nop
    ctx->pc = 0x2e20f8u;
    // NOP
    // 0x2e20fc: 0x0  nop
    ctx->pc = 0x2e20fcu;
    // NOP
    // 0x2e2100: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2100u;
    {
        const bool branch_taken_0x2e2100 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2100u;
        // 0x2e2104: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2100) {
            ctx->pc = 0x2E20F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e20f0;
        }
    }
    ctx->pc = 0x2E2108u;
    // 0x2e2108: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e2108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e210c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e210cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e2118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e211c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e211cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2120: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2124: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2124u;
        // 0x2e2128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E212Cu;
    // 0x2e212c: 0x0  nop
    ctx->pc = 0x2e212cu;
    // NOP
    ctx->pc = 0x2e2130u;
}
