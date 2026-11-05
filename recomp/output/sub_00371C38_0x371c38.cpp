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

// Function: sub_00371C38
// Address: 0x371c38 - 0x371c90
void sub_00371C38_0x371c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371C38_0x371c38");
#endif

    ctx->pc = 0x371c38u;

    // 0x371c38: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x371c38u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x371c3c: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x371c40: 0xdc8b0020  ld          $t3, 0x20($a0)
    ctx->pc = 0x371c40u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x371c44: 0x2408004f  addiu       $t0, $zero, 0x4F
    ctx->pc = 0x371c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x371c48: 0xdc8a0030  ld          $t2, 0x30($a0)
    ctx->pc = 0x371c48u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x371c4c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x371c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x371c50: 0xdc890040  ld          $t1, 0x40($a0)
    ctx->pc = 0x371c50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x371c54: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x371c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371c58: 0xdc820080  ld          $v0, 0x80($a0)
    ctx->pc = 0x371c58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x371c5c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x371c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x371c60: 0xfc8700a8  sd          $a3, 0xA8($a0)
    ctx->pc = 0x371c60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 7));
    // 0x371c64: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x371c64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x371c68: 0xfc8800b8  sd          $t0, 0xB8($a0)
    ctx->pc = 0x371c68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 184), GPR_U64(ctx, 8));
    // 0x371c6c: 0xfc8600c8  sd          $a2, 0xC8($a0)
    ctx->pc = 0x371c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 6));
    // 0x371c70: 0xfc8500d8  sd          $a1, 0xD8($a0)
    ctx->pc = 0x371c70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 5));
    // 0x371c74: 0xfc8300e8  sd          $v1, 0xE8($a0)
    ctx->pc = 0x371c74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 232), GPR_U64(ctx, 3));
    // 0x371c78: 0xfc8c00a0  sd          $t4, 0xA0($a0)
    ctx->pc = 0x371c78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 12));
    // 0x371c7c: 0xfc8b00b0  sd          $t3, 0xB0($a0)
    ctx->pc = 0x371c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 176), GPR_U64(ctx, 11));
    // 0x371c80: 0xfc8a00c0  sd          $t2, 0xC0($a0)
    ctx->pc = 0x371c80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 10));
    // 0x371c84: 0x3e00008  jr          $ra
    ctx->pc = 0x371C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C84u;
        // 0x371c88: 0xfc8900d0  sd          $t1, 0xD0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C8Cu;
    // 0x371c8c: 0x0  nop
    ctx->pc = 0x371c8cu;
    // NOP
    ctx->pc = 0x371c90u;
}
