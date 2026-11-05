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

// Function: sub_00395428
// Address: 0x395428 - 0x395468
void sub_00395428_0x395428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395428_0x395428");
#endif

    switch (ctx->pc) {
        case 0x395444u: goto label_395444;
        default: break;
    }

    ctx->pc = 0x395428u;

    // 0x395428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39542c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x39542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x395430: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x395430u;
    {
        const bool branch_taken_0x395430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395430u;
        // 0x395434: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395430) {
            ctx->pc = 0x395458u;
            goto label_395458;
        }
    }
    ctx->pc = 0x395438u;
    // 0x395438: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39543c: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39543Cu;
    SET_GPR_U32(ctx, 31, 0x395444u);
    ctx->pc = 0x395440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39543Cu;
    // 0x395440: 0x2484aa18  addiu       $a0, $a0, -0x55E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39543Cu, 0x395444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395444u;
label_395444:
    // 0x395444: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x395444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x395448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39544c: 0x3e00008  jr          $ra
    ctx->pc = 0x39544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39544Cu;
        // 0x395450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395454u;
    // 0x395454: 0x0  nop
    ctx->pc = 0x395454u;
    // NOP
label_395458:
    // 0x395458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39545c: 0x80e5472  j           func_3951C8
    ctx->pc = 0x39545Cu;
    ctx->pc = 0x395460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39545Cu;
    // 0x395460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951C8u, 0x39545Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x395464u;
    // 0x395464: 0x0  nop
    ctx->pc = 0x395464u;
    // NOP
    ctx->pc = 0x395468u;
}
