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

// Function: sub_0017F308
// Address: 0x17f308 - 0x17f348
void sub_0017F308_0x17f308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F308_0x17f308");
#endif

    switch (ctx->pc) {
        case 0x17f324u: goto label_17f324;
        case 0x17f334u: goto label_17f334;
        default: break;
    }

    ctx->pc = 0x17f308u;

    // 0x17f308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f314: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f318: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17f31c: 0xc041eac  jal         func_107AB0
    ctx->pc = 0x17F31Cu;
    SET_GPR_U32(ctx, 31, 0x17F324u);
    ctx->pc = 0x17F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F31Cu;
    // 0x17f320: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107AB0u, 0x17F31Cu, 0x17F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F324u;
label_17f324:
    // 0x17f324: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x17f324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f32c: 0xc05fd46  jal         func_17F518
    ctx->pc = 0x17F32Cu;
    SET_GPR_U32(ctx, 31, 0x17F334u);
    ctx->pc = 0x17F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F32Cu;
    // 0x17f330: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F518u, 0x17F32Cu, 0x17F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F334u;
label_17f334:
    // 0x17f334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f338: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f33c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F33Cu;
        // 0x17f340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F344u;
    // 0x17f344: 0x0  nop
    ctx->pc = 0x17f344u;
    // NOP
    ctx->pc = 0x17f348u;
}
