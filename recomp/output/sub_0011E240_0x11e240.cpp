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

// Function: sub_0011E240
// Address: 0x11e240 - 0x11e270
void sub_0011E240_0x11e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E240_0x11e240");
#endif

    switch (ctx->pc) {
        case 0x11e260u: goto label_11e260;
        default: break;
    }

    ctx->pc = 0x11e240u;

    // 0x11e240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e244: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11e244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e24c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11e250: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x11e250u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e254: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e258: 0xc0aaf3c  jal         func_2ABCF0
    ctx->pc = 0x11E258u;
    SET_GPR_U32(ctx, 31, 0x11E260u);
    ctx->pc = 0x11E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E258u;
    // 0x11e25c: 0x8c840390  lw          $a0, 0x390($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x11E258u, 0x11E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E260u;
label_11e260:
    // 0x11e260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e264: 0x3e00008  jr          $ra
    ctx->pc = 0x11E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E264u;
        // 0x11e268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E26Cu;
    // 0x11e26c: 0x0  nop
    ctx->pc = 0x11e26cu;
    // NOP
    ctx->pc = 0x11e270u;
}
