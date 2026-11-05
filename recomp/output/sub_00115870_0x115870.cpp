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

// Function: sub_00115870
// Address: 0x115870 - 0x1158a8
void sub_00115870_0x115870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115870_0x115870");
#endif

    ctx->pc = 0x115870u;

    // 0x115870: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x115874: 0x54a40004  bnel        $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115874u;
    {
        const bool branch_taken_0x115874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x115874) {
            ctx->pc = 0x115878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115874u;
            // 0x115878: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115888u;
            goto label_115888;
        }
    }
    ctx->pc = 0x11587Cu;
    // 0x11587c: 0x3882000e  xori        $v0, $a0, 0xE
    ctx->pc = 0x11587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)14);
    // 0x115880: 0x3e00008  jr          $ra
    ctx->pc = 0x115880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115880u;
        // 0x115884: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115888u;
label_115888:
    // 0x115888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115888u;
    {
        const bool branch_taken_0x115888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115888u;
        // 0x11588c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115888) {
            ctx->pc = 0x115898u;
            goto label_115898;
        }
    }
    ctx->pc = 0x115890u;
    // 0x115890: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x115894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115890u;
        // 0x115894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115890) {
            ctx->pc = 0x11589Cu;
            goto label_11589c;
        }
    }
    ctx->pc = 0x115898u;
label_115898:
    // 0x115898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11589c:
    // 0x11589c: 0x3e00008  jr          $ra
    ctx->pc = 0x11589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1158A4u;
    // 0x1158a4: 0x0  nop
    ctx->pc = 0x1158a4u;
    // NOP
    ctx->pc = 0x1158a8u;
}
