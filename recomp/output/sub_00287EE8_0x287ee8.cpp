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

// Function: sub_00287EE8
// Address: 0x287ee8 - 0x287f98
void sub_00287EE8_0x287ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287EE8_0x287ee8");
#endif

    ctx->pc = 0x287ee8u;

    // 0x287ee8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287eec: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x287eecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287ef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287EF0u;
    {
        const bool branch_taken_0x287ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EF0u;
        // 0x287ef4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ef0) {
            ctx->pc = 0x287F10u;
            goto label_287f10;
        }
    }
    ctx->pc = 0x287EF8u;
    // 0x287ef8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x287efc: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287f00: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287f04: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x287f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x287f08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F08u;
    {
        const bool branch_taken_0x287f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f08) {
            ctx->pc = 0x287F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F08u;
            // 0x287f0c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F18u;
            goto label_287f18;
        }
    }
    ctx->pc = 0x287F10u;
label_287f10:
    // 0x287f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287F10u;
    {
        const bool branch_taken_0x287f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F10u;
        // 0x287f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f10) {
            ctx->pc = 0x287F1Cu;
            goto label_287f1c;
        }
    }
    ctx->pc = 0x287F18u;
label_287f18:
    // 0x287f18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x287f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_287f1c:
    // 0x287f1c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x287F1Cu;
    {
        const bool branch_taken_0x287f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F1Cu;
        // 0x287f20: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f1c) {
            ctx->pc = 0x287F84u;
            goto label_287f84;
        }
    }
    ctx->pc = 0x287F24u;
    // 0x287f24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287F24u;
    {
        const bool branch_taken_0x287f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F24u;
        // 0x287f28: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f24) {
            ctx->pc = 0x287F40u;
            goto label_287f40;
        }
    }
    ctx->pc = 0x287F2Cu;
    // 0x287f2c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287f30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287f34: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x287f38: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F38u;
    {
        const bool branch_taken_0x287f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f38) {
            ctx->pc = 0x287F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F38u;
            // 0x287f3c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F48u;
            goto label_287f48;
        }
    }
    ctx->pc = 0x287F40u;
label_287f40:
    // 0x287f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287F40u;
    {
        const bool branch_taken_0x287f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F40u;
        // 0x287f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f40) {
            ctx->pc = 0x287F4Cu;
            goto label_287f4c;
        }
    }
    ctx->pc = 0x287F48u;
label_287f48:
    // 0x287f48: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x287f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_287f4c:
    // 0x287f4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x287F4Cu;
    {
        const bool branch_taken_0x287f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F4Cu;
        // 0x287f50: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f4c) {
            ctx->pc = 0x287F84u;
            goto label_287f84;
        }
    }
    ctx->pc = 0x287F54u;
    // 0x287f54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287F54u;
    {
        const bool branch_taken_0x287f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F54u;
        // 0x287f58: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f54) {
            ctx->pc = 0x287F70u;
            goto label_287f70;
        }
    }
    ctx->pc = 0x287F5Cu;
    // 0x287f5c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287f60: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287f64: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x287f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x287f68: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F68u;
    {
        const bool branch_taken_0x287f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f68) {
            ctx->pc = 0x287F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F68u;
            // 0x287f6c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F78u;
            goto label_287f78;
        }
    }
    ctx->pc = 0x287F70u;
label_287f70:
    // 0x287f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287F70u;
    {
        const bool branch_taken_0x287f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F70u;
        // 0x287f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f70) {
            ctx->pc = 0x287F7Cu;
            goto label_287f7c;
        }
    }
    ctx->pc = 0x287F78u;
label_287f78:
    // 0x287f78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x287f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_287f7c:
    // 0x287f7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F7Cu;
    {
        const bool branch_taken_0x287f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f7c) {
            ctx->pc = 0x287F8Cu;
            goto label_287f8c;
        }
    }
    ctx->pc = 0x287F84u;
label_287f84:
    // 0x287f84: 0x3e00008  jr          $ra
    ctx->pc = 0x287F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F84u;
        // 0x287f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287F8Cu;
label_287f8c:
    // 0x287f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x287F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F8Cu;
        // 0x287f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287F94u;
    // 0x287f94: 0x0  nop
    ctx->pc = 0x287f94u;
    // NOP
    ctx->pc = 0x287f98u;
}
