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

// Function: sub_003DE750
// Address: 0x3de750 - 0x3de798
void sub_003DE750_0x3de750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE750_0x3de750");
#endif

    switch (ctx->pc) {
        case 0x3de774u: goto label_3de774;
        case 0x3de780u: goto label_3de780;
        default: break;
    }

    ctx->pc = 0x3de750u;

    // 0x3de750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3de760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3de764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3de768: 0x260401a4  addiu       $a0, $s0, 0x1A4
    ctx->pc = 0x3de768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x3de76c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE76Cu;
    SET_GPR_U32(ctx, 31, 0x3DE774u);
    ctx->pc = 0x3DE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE76Cu;
    // 0x3de770: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE76Cu, 0x3DE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE774u;
label_3de774:
    // 0x3de774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de778: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DE778u;
    SET_GPR_U32(ctx, 31, 0x3DE780u);
    ctx->pc = 0x3DE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE778u;
    // 0x3de77c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DE778u, 0x3DE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE780u;
label_3de780:
    // 0x3de780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3de788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de78c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE78Cu;
        // 0x3de790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE794u;
    // 0x3de794: 0x0  nop
    ctx->pc = 0x3de794u;
    // NOP
    ctx->pc = 0x3de798u;
}
