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

// Function: sub_001BA440
// Address: 0x1ba440 - 0x1ba4a0
void sub_001BA440_0x1ba440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA440_0x1ba440");
#endif

    ctx->pc = 0x1ba440u;

    // 0x1ba440: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ba440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba444: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ba448: 0x8ce403f4  lw          $a0, 0x3F4($a3)
    ctx->pc = 0x1ba448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1012)));
    // 0x1ba44c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ba44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ba450: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA450u;
    {
        const bool branch_taken_0x1ba450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba450) {
            ctx->pc = 0x1BA498u;
            goto label_1ba498;
        }
    }
    ctx->pc = 0x1BA458u;
    // 0x1ba458: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ba45c: 0x8ce303f8  lw          $v1, 0x3F8($a3)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1016)));
    // 0x1ba460: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ba460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ba464: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA464u;
    {
        const bool branch_taken_0x1ba464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba464) {
            ctx->pc = 0x1BA498u;
            goto label_1ba498;
        }
    }
    ctx->pc = 0x1BA46Cu;
    // 0x1ba46c: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x1ba470: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA470u;
    {
        const bool branch_taken_0x1ba470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA470u;
        // 0x1ba474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba470) {
            ctx->pc = 0x1BA498u;
            goto label_1ba498;
        }
    }
    ctx->pc = 0x1BA478u;
    // 0x1ba478: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ba478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ba47c: 0x8ce403f8  lw          $a0, 0x3F8($a3)
    ctx->pc = 0x1ba47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1016)));
    // 0x1ba480: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1ba480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1ba484: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ba488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ba48c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba490: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA490u;
        // 0x1ba494: 0xace303ec  sw          $v1, 0x3EC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA498u;
label_1ba498:
    // 0x1ba498: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA498u;
        // 0x1ba49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA4A0u;
}
