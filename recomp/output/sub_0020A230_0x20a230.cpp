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

// Function: sub_0020A230
// Address: 0x20a230 - 0x20a260
void sub_0020A230_0x20a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A230_0x20a230");
#endif

    switch (ctx->pc) {
        case 0x20a250u: goto label_20a250;
        default: break;
    }

    ctx->pc = 0x20a230u;

    // 0x20a230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a234: 0x24054003  addiu       $a1, $zero, 0x4003
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16387));
    // 0x20a238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a23c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a240: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a244: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a248: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A248u;
    SET_GPR_U32(ctx, 31, 0x20A250u);
    ctx->pc = 0x20A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A248u;
    // 0x20a24c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A248u, 0x20A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A250u;
label_20a250:
    // 0x20a250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a254: 0x3e00008  jr          $ra
    ctx->pc = 0x20A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A254u;
        // 0x20a258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A25Cu;
    // 0x20a25c: 0x0  nop
    ctx->pc = 0x20a25cu;
    // NOP
    ctx->pc = 0x20a260u;
}
