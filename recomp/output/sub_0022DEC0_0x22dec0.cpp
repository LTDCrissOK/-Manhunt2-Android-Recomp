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

// Function: sub_0022DEC0
// Address: 0x22dec0 - 0x22df18
void sub_0022DEC0_0x22dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DEC0_0x22dec0");
#endif

    ctx->pc = 0x22dec0u;

    // 0x22dec0: 0x8c820418  lw          $v0, 0x418($a0)
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    // 0x22dec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22dec8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DEC8u;
    {
        const bool branch_taken_0x22dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22dec8) {
            ctx->pc = 0x22DECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DEC8u;
            // 0x22decc: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DED8u;
            goto label_22ded8;
        }
    }
    ctx->pc = 0x22DED0u;
    // 0x22ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DED0u;
        // 0x22ded4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DED8u;
label_22ded8:
    // 0x22ded8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22dedc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22DEDCu;
    {
        const bool branch_taken_0x22dedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEDCu;
        // 0x22dee0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dedc) {
            ctx->pc = 0x22DF08u;
            goto label_22df08;
        }
    }
    ctx->pc = 0x22DEE4u;
    // 0x22dee4: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x22dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x22dee8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22deec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DEECu;
    {
        const bool branch_taken_0x22deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEECu;
        // 0x22def0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22deec) {
            ctx->pc = 0x22DF00u;
            goto label_22df00;
        }
    }
    ctx->pc = 0x22DEF4u;
    // 0x22def4: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x22def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x22def8: 0x2842078b  slti        $v0, $v0, 0x78B
    ctx->pc = 0x22def8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1931) ? 1 : 0);
    // 0x22defc: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x22defcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22df00:
    // 0x22df00: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DF00u;
    {
        const bool branch_taken_0x22df00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22df00) {
            ctx->pc = 0x22DF10u;
            goto label_22df10;
        }
    }
    ctx->pc = 0x22DF08u;
label_22df08:
    // 0x22df08: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF08u;
        // 0x22df0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DF10u;
label_22df10:
    // 0x22df10: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF10u;
        // 0x22df14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DF18u;
}
