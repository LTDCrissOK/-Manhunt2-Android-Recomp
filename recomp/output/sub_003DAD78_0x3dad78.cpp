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

// Function: sub_003DAD78
// Address: 0x3dad78 - 0x3dada8
void sub_003DAD78_0x3dad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAD78_0x3dad78");
#endif

    switch (ctx->pc) {
        case 0x3dad90u: goto label_3dad90;
        case 0x3dad98u: goto label_3dad98;
        default: break;
    }

    ctx->pc = 0x3dad78u;

    // 0x3dad78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dad7c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3dad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x3dad80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dad84: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x3dad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x3dad88: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3DAD88u;
    SET_GPR_U32(ctx, 31, 0x3DAD90u);
    ctx->pc = 0x3DAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD88u;
    // 0x3dad8c: 0x24848760  addiu       $a0, $a0, -0x78A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3DAD88u, 0x3DAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD90u;
label_3dad90:
    // 0x3dad90: 0xc0455d0  jal         func_115740
    ctx->pc = 0x3DAD90u;
    SET_GPR_U32(ctx, 31, 0x3DAD98u);
    ctx->pc = 0x3DAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD90u;
    // 0x3dad94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115740u, 0x3DAD90u, 0x3DAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD98u;
label_3dad98:
    // 0x3dad98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD9Cu;
        // 0x3dada0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DADA4u;
    // 0x3dada4: 0x0  nop
    ctx->pc = 0x3dada4u;
    // NOP
    ctx->pc = 0x3dada8u;
}
