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

// Function: sub_00313768
// Address: 0x313768 - 0x313798
void sub_00313768_0x313768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313768_0x313768");
#endif

    switch (ctx->pc) {
        case 0x313788u: goto label_313788;
        default: break;
    }

    ctx->pc = 0x313768u;

    // 0x313768: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31376c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31376cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313770: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x313770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x313774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313778: 0x8c45bcf4  lw          $a1, -0x430C($v0)
    ctx->pc = 0x313778u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCF4u));
    // 0x31377c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313780: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x313780u;
    SET_GPR_U32(ctx, 31, 0x313788u);
    ctx->pc = 0x313784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313780u;
    // 0x313784: 0xa0c3bd00  sb          $v1, -0x4300($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294950144), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x313780u, 0x313788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313788u;
label_313788:
    // 0x313788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31378c: 0x3e00008  jr          $ra
    ctx->pc = 0x31378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31378Cu;
        // 0x313790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31378Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313794u;
    // 0x313794: 0x0  nop
    ctx->pc = 0x313794u;
    // NOP
    ctx->pc = 0x313798u;
}
