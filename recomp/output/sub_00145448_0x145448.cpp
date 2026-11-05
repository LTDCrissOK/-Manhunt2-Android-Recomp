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

// Function: sub_00145448
// Address: 0x145448 - 0x145490
void sub_00145448_0x145448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145448_0x145448");
#endif

    switch (ctx->pc) {
        case 0x145480u: goto label_145480;
        default: break;
    }

    ctx->pc = 0x145448u;

    // 0x145448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14544c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14544cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145454: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x145454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145458: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14545c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145460: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x145460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x145464: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x145464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x145468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14546c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145478: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x145478u;
    SET_GPR_U32(ctx, 31, 0x145480u);
    ctx->pc = 0x14547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145478u;
    // 0x14547c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x145478u, 0x145480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145480u;
label_145480:
    // 0x145480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145484: 0x3e00008  jr          $ra
    ctx->pc = 0x145484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145484u;
        // 0x145488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14548Cu;
    // 0x14548c: 0x0  nop
    ctx->pc = 0x14548cu;
    // NOP
    ctx->pc = 0x145490u;
}
