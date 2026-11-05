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

// Function: sub_00313798
// Address: 0x313798 - 0x3137d0
void sub_00313798_0x313798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313798_0x313798");
#endif

    switch (ctx->pc) {
        case 0x3137c4u: goto label_3137c4;
        default: break;
    }

    ctx->pc = 0x313798u;

    // 0x313798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31379c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31379cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3137a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3137a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3137a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3137a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3137a8: 0x8c45bcf4  lw          $a1, -0x430C($v0)
    ctx->pc = 0x3137a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCF4u));
    // 0x3137ac: 0xa060bd00  sb          $zero, -0x4300($v1)
    ctx->pc = 0x3137acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBD00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBD00u, _value); } while (0);
    // 0x3137b0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3137b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3137b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3137B4u;
    {
        const bool branch_taken_0x3137b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3137B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B4u;
        // 0x3137b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137b4) {
            ctx->pc = 0x3137C8u;
            goto label_3137c8;
        }
    }
    ctx->pc = 0x3137BCu;
    // 0x3137bc: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x3137BCu;
    SET_GPR_U32(ctx, 31, 0x3137C4u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x3137BCu, 0x3137C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137C4u;
label_3137c4:
    // 0x3137c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3137c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3137c8:
    // 0x3137c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3137C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137C8u;
        // 0x3137cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3137C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3137D0u;
}
