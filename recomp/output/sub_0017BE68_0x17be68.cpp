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

// Function: sub_0017BE68
// Address: 0x17be68 - 0x17bea8
void sub_0017BE68_0x17be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BE68_0x17be68");
#endif

    switch (ctx->pc) {
        case 0x17be84u: goto label_17be84;
        default: break;
    }

    ctx->pc = 0x17be68u;

    // 0x17be68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17be70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17be70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17be78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be7c: 0xc05f03e  jal         func_17C0F8
    ctx->pc = 0x17BE7Cu;
    SET_GPR_U32(ctx, 31, 0x17BE84u);
    ctx->pc = 0x17BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE7Cu;
    // 0x17be80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C0F8u, 0x17BE7Cu, 0x17BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE84u;
label_17be84:
    // 0x17be84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be88: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x17be88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x17be8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17be90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17be90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17be94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17be98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE9Cu;
        // 0x17bea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BEA4u;
    // 0x17bea4: 0x0  nop
    ctx->pc = 0x17bea4u;
    // NOP
    ctx->pc = 0x17bea8u;
}
