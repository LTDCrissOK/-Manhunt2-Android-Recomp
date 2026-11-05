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

// Function: sub_00132848
// Address: 0x132848 - 0x132890
void sub_00132848_0x132848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132848_0x132848");
#endif

    switch (ctx->pc) {
        case 0x132864u: goto label_132864;
        case 0x132870u: goto label_132870;
        default: break;
    }

    ctx->pc = 0x132848u;

    // 0x132848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13284c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13285c: 0xc04cb9a  jal         func_132E68
    ctx->pc = 0x13285Cu;
    SET_GPR_U32(ctx, 31, 0x132864u);
    ctx->pc = 0x132860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13285Cu;
    // 0x132860: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132E68u, 0x13285Cu, 0x132864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132864u;
label_132864:
    // 0x132864: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x132864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x132868: 0xc04cba4  jal         func_132E90
    ctx->pc = 0x132868u;
    SET_GPR_U32(ctx, 31, 0x132870u);
    ctx->pc = 0x13286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132868u;
    // 0x13286c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132E90u, 0x132868u, 0x132870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132870u;
label_132870:
    // 0x132870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132878: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x132878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13287c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13287cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132884: 0x3e00008  jr          $ra
    ctx->pc = 0x132884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132884u;
        // 0x132888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13288Cu;
    // 0x13288c: 0x0  nop
    ctx->pc = 0x13288cu;
    // NOP
    ctx->pc = 0x132890u;
}
