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

// Function: sub_002880F8
// Address: 0x2880f8 - 0x2881a8
void sub_002880F8_0x2880f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002880F8_0x2880f8");
#endif

    ctx->pc = 0x2880f8u;

    // 0x2880f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2880f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2880fc: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x288100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288100u;
    {
        const bool branch_taken_0x288100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288100u;
        // 0x288104: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288100) {
            ctx->pc = 0x288120u;
            goto label_288120;
        }
    }
    ctx->pc = 0x288108u;
    // 0x288108: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28810c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288110: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x288114: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x288114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x288118: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288118u;
    {
        const bool branch_taken_0x288118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288118) {
            ctx->pc = 0x28811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288118u;
            // 0x28811c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288128u;
            goto label_288128;
        }
    }
    ctx->pc = 0x288120u;
label_288120:
    // 0x288120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288120u;
    {
        const bool branch_taken_0x288120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288120u;
        // 0x288124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288120) {
            ctx->pc = 0x28812Cu;
            goto label_28812c;
        }
    }
    ctx->pc = 0x288128u;
label_288128:
    // 0x288128: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x288128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_28812c:
    // 0x28812c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28812Cu;
    {
        const bool branch_taken_0x28812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28812Cu;
        // 0x288130: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28812c) {
            ctx->pc = 0x288194u;
            goto label_288194;
        }
    }
    ctx->pc = 0x288134u;
    // 0x288134: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288134u;
    {
        const bool branch_taken_0x288134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288134u;
        // 0x288138: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288134) {
            ctx->pc = 0x288150u;
            goto label_288150;
        }
    }
    ctx->pc = 0x28813Cu;
    // 0x28813c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288140: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x288144: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x288144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x288148: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288148u;
    {
        const bool branch_taken_0x288148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288148) {
            ctx->pc = 0x28814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288148u;
            // 0x28814c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288158u;
            goto label_288158;
        }
    }
    ctx->pc = 0x288150u;
label_288150:
    // 0x288150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288150u;
    {
        const bool branch_taken_0x288150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288150u;
        // 0x288154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288150) {
            ctx->pc = 0x28815Cu;
            goto label_28815c;
        }
    }
    ctx->pc = 0x288158u;
label_288158:
    // 0x288158: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x288158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_28815c:
    // 0x28815c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28815Cu;
    {
        const bool branch_taken_0x28815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28815Cu;
        // 0x288160: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28815c) {
            ctx->pc = 0x288194u;
            goto label_288194;
        }
    }
    ctx->pc = 0x288164u;
    // 0x288164: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288164u;
    {
        const bool branch_taken_0x288164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288164u;
        // 0x288168: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288164) {
            ctx->pc = 0x288180u;
            goto label_288180;
        }
    }
    ctx->pc = 0x28816Cu;
    // 0x28816c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x28816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x288170: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x288170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x288174: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x288174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x288178: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288178u;
    {
        const bool branch_taken_0x288178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288178) {
            ctx->pc = 0x28817Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288178u;
            // 0x28817c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288188u;
            goto label_288188;
        }
    }
    ctx->pc = 0x288180u;
label_288180:
    // 0x288180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288180u;
    {
        const bool branch_taken_0x288180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288180u;
        // 0x288184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288180) {
            ctx->pc = 0x28818Cu;
            goto label_28818c;
        }
    }
    ctx->pc = 0x288188u;
label_288188:
    // 0x288188: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x288188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_28818c:
    // 0x28818c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28818Cu;
    {
        const bool branch_taken_0x28818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28818c) {
            ctx->pc = 0x28819Cu;
            goto label_28819c;
        }
    }
    ctx->pc = 0x288194u;
label_288194:
    // 0x288194: 0x3e00008  jr          $ra
    ctx->pc = 0x288194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288194u;
        // 0x288198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28819Cu;
label_28819c:
    // 0x28819c: 0x3e00008  jr          $ra
    ctx->pc = 0x28819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2881A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28819Cu;
        // 0x2881a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2881A4u;
    // 0x2881a4: 0x0  nop
    ctx->pc = 0x2881a4u;
    // NOP
    ctx->pc = 0x2881a8u;
}
