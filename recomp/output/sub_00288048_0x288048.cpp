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

// Function: sub_00288048
// Address: 0x288048 - 0x2880f8
void sub_00288048_0x288048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288048_0x288048");
#endif

    ctx->pc = 0x288048u;

    // 0x288048: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28804c: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x28804cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x288050: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288050u;
    {
        const bool branch_taken_0x288050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288050u;
        // 0x288054: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288050) {
            ctx->pc = 0x288070u;
            goto label_288070;
        }
    }
    ctx->pc = 0x288058u;
    // 0x288058: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28805c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288060: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x288064: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x288064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x288068: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288068u;
    {
        const bool branch_taken_0x288068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288068) {
            ctx->pc = 0x28806Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288068u;
            // 0x28806c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288078u;
            goto label_288078;
        }
    }
    ctx->pc = 0x288070u;
label_288070:
    // 0x288070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288070u;
    {
        const bool branch_taken_0x288070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288070u;
        // 0x288074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288070) {
            ctx->pc = 0x28807Cu;
            goto label_28807c;
        }
    }
    ctx->pc = 0x288078u;
label_288078:
    // 0x288078: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x288078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_28807c:
    // 0x28807c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28807Cu;
    {
        const bool branch_taken_0x28807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28807Cu;
        // 0x288080: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28807c) {
            ctx->pc = 0x2880E4u;
            goto label_2880e4;
        }
    }
    ctx->pc = 0x288084u;
    // 0x288084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288084u;
    {
        const bool branch_taken_0x288084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288084u;
        // 0x288088: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288084) {
            ctx->pc = 0x2880A0u;
            goto label_2880a0;
        }
    }
    ctx->pc = 0x28808Cu;
    // 0x28808c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288090: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x288094: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x288094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x288098: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288098u;
    {
        const bool branch_taken_0x288098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288098) {
            ctx->pc = 0x28809Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288098u;
            // 0x28809c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2880A8u;
            goto label_2880a8;
        }
    }
    ctx->pc = 0x2880A0u;
label_2880a0:
    // 0x2880a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2880A0u;
    {
        const bool branch_taken_0x2880a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880A0u;
        // 0x2880a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880a0) {
            ctx->pc = 0x2880ACu;
            goto label_2880ac;
        }
    }
    ctx->pc = 0x2880A8u;
label_2880a8:
    // 0x2880a8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2880a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2880ac:
    // 0x2880ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2880ACu;
    {
        const bool branch_taken_0x2880ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2880B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880ACu;
        // 0x2880b0: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880ac) {
            ctx->pc = 0x2880E4u;
            goto label_2880e4;
        }
    }
    ctx->pc = 0x2880B4u;
    // 0x2880b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2880B4u;
    {
        const bool branch_taken_0x2880b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880B4u;
        // 0x2880b8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880b4) {
            ctx->pc = 0x2880D0u;
            goto label_2880d0;
        }
    }
    ctx->pc = 0x2880BCu;
    // 0x2880bc: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2880bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2880c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2880c4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2880c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2880c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2880C8u;
    {
        const bool branch_taken_0x2880c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2880c8) {
            ctx->pc = 0x2880CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2880C8u;
            // 0x2880cc: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2880D8u;
            goto label_2880d8;
        }
    }
    ctx->pc = 0x2880D0u;
label_2880d0:
    // 0x2880d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2880D0u;
    {
        const bool branch_taken_0x2880d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880D0u;
        // 0x2880d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880d0) {
            ctx->pc = 0x2880DCu;
            goto label_2880dc;
        }
    }
    ctx->pc = 0x2880D8u;
label_2880d8:
    // 0x2880d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2880d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2880dc:
    // 0x2880dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2880DCu;
    {
        const bool branch_taken_0x2880dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2880dc) {
            ctx->pc = 0x2880ECu;
            goto label_2880ec;
        }
    }
    ctx->pc = 0x2880E4u;
label_2880e4:
    // 0x2880e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2880E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2880E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880E4u;
        // 0x2880e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2880E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2880ECu;
label_2880ec:
    // 0x2880ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2880ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880ECu;
        // 0x2880f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2880ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2880F4u;
    // 0x2880f4: 0x0  nop
    ctx->pc = 0x2880f4u;
    // NOP
    ctx->pc = 0x2880f8u;
}
