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

// Function: sub_0039F770
// Address: 0x39f770 - 0x39f7b8
void sub_0039F770_0x39f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F770_0x39f770");
#endif

    switch (ctx->pc) {
        case 0x39f78cu: goto label_39f78c;
        case 0x39f798u: goto label_39f798;
        case 0x39f7a0u: goto label_39f7a0;
        default: break;
    }

    ctx->pc = 0x39f770u;

    // 0x39f770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39f780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39f784: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F784u;
    SET_GPR_U32(ctx, 31, 0x39F78Cu);
    ctx->pc = 0x39F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F784u;
    // 0x39f788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F784u, 0x39F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F78Cu;
label_39f78c:
    // 0x39f78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f790: 0xc0e7dee  jal         func_39F7B8
    ctx->pc = 0x39F790u;
    SET_GPR_U32(ctx, 31, 0x39F798u);
    ctx->pc = 0x39F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F790u;
    // 0x39f794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F7B8u, 0x39F790u, 0x39F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F798u;
label_39f798:
    // 0x39f798: 0xc0ecbf2  jal         func_3B2FC8
    ctx->pc = 0x39F798u;
    SET_GPR_U32(ctx, 31, 0x39F7A0u);
    ctx->pc = 0x39F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F798u;
    // 0x39f79c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC8u, 0x39F798u, 0x39F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F7A0u;
label_39f7a0:
    // 0x39f7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f7a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39f7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x39F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7B0u;
        // 0x39f7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F7B8u;
}
