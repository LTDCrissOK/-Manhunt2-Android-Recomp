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

// Function: sub_00255450
// Address: 0x255450 - 0x255480
void sub_00255450_0x255450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255450_0x255450");
#endif

    ctx->pc = 0x255450u;

    // 0x255450: 0x90821080  lbu         $v0, 0x1080($a0)
    ctx->pc = 0x255450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x255454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255454u;
    {
        const bool branch_taken_0x255454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255454u;
        // 0x255458: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255454) {
            ctx->pc = 0x255468u;
            goto label_255468;
        }
    }
    ctx->pc = 0x25545Cu;
    // 0x25545c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x25545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x255460: 0x3e00008  jr          $ra
    ctx->pc = 0x255460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255460u;
        // 0x255464: 0xa0821080  sb          $v0, 0x1080($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4224), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255468u;
label_255468:
    // 0x255468: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x255468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x25546c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25546Cu;
    {
        const bool branch_taken_0x25546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25546c) {
            ctx->pc = 0x255470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25546Cu;
            // 0x255470: 0xa0851080  sb          $a1, 0x1080($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4224), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255474u;
            goto label_255474;
        }
    }
    ctx->pc = 0x255474u;
label_255474:
    // 0x255474: 0x3e00008  jr          $ra
    ctx->pc = 0x255474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25547Cu;
    // 0x25547c: 0x0  nop
    ctx->pc = 0x25547cu;
    // NOP
    ctx->pc = 0x255480u;
}
