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

// Function: sub_00211248
// Address: 0x211248 - 0x211278
void sub_00211248_0x211248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211248_0x211248");
#endif

    switch (ctx->pc) {
        case 0x211268u: goto label_211268;
        default: break;
    }

    ctx->pc = 0x211248u;

    // 0x211248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21124c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21124cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211258: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x21125c: 0xac8301a0  sw          $v1, 0x1A0($a0)
    ctx->pc = 0x21125cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
    // 0x211260: 0xc0c8852  jal         func_322148
    ctx->pc = 0x211260u;
    SET_GPR_U32(ctx, 31, 0x211268u);
    ctx->pc = 0x211264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211260u;
    // 0x211264: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322148u, 0x211260u, 0x211268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211268u;
label_211268:
    // 0x211268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21126c: 0x3e00008  jr          $ra
    ctx->pc = 0x21126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21126Cu;
        // 0x211270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211274u;
    // 0x211274: 0x0  nop
    ctx->pc = 0x211274u;
    // NOP
    ctx->pc = 0x211278u;
}
