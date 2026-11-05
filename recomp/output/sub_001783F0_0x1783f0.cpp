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

// Function: sub_001783F0
// Address: 0x1783f0 - 0x178430
void sub_001783F0_0x1783f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001783F0_0x1783f0");
#endif

    switch (ctx->pc) {
        case 0x178404u: goto label_178404;
        case 0x178410u: goto label_178410;
        default: break;
    }

    ctx->pc = 0x1783f0u;

    // 0x1783f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1783f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1783f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1783f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1783f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1783fc: 0xc05e10c  jal         func_178430
    ctx->pc = 0x1783FCu;
    SET_GPR_U32(ctx, 31, 0x178404u);
    ctx->pc = 0x178400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783FCu;
    // 0x178400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178430u, 0x1783FCu, 0x178404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178404u;
label_178404:
    // 0x178404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178408: 0xc05e0c0  jal         func_178300
    ctx->pc = 0x178408u;
    SET_GPR_U32(ctx, 31, 0x178410u);
    ctx->pc = 0x17840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178408u;
    // 0x17840c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178300u, 0x178408u, 0x178410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178410u;
label_178410:
    // 0x178410: 0x92020158  lbu         $v0, 0x158($s0)
    ctx->pc = 0x178410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x178414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178418: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17841c: 0xa2020158  sb          $v0, 0x158($s0)
    ctx->pc = 0x17841cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 344), (uint8_t)GPR_U32(ctx, 2));
    // 0x178420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178424: 0x3e00008  jr          $ra
    ctx->pc = 0x178424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178424u;
        // 0x178428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17842Cu;
    // 0x17842c: 0x0  nop
    ctx->pc = 0x17842cu;
    // NOP
    ctx->pc = 0x178430u;
}
