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

// Function: sub_00118EF4
// Address: 0x118ef4 - 0x118f18
void sub_00118EF4_0x118ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118EF4_0x118ef4");
#endif

    switch (ctx->pc) {
        case 0x118f00u: goto label_118f00;
        default: break;
    }

    ctx->pc = 0x118ef4u;

    // 0x118ef4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x118ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x118ef8: 0xc0463c6  jal         func_118F18
    ctx->pc = 0x118EF8u;
    SET_GPR_U32(ctx, 31, 0x118F00u);
    ctx->pc = 0x118EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EF8u;
    // 0x118efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F18u, 0x118EF8u, 0x118F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F00u;
label_118f00:
    // 0x118f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x118F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F0Cu;
        // 0x118f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F14u;
    // 0x118f14: 0x0  nop
    ctx->pc = 0x118f14u;
    // NOP
    ctx->pc = 0x118f18u;
}
