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

// Function: sub_001D7858
// Address: 0x1d7858 - 0x1d78d0
void sub_001D7858_0x1d7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7858_0x1d7858");
#endif

    switch (ctx->pc) {
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d78a0u: goto label_1d78a0;
        case 0x1d78acu: goto label_1d78ac;
        case 0x1d78b8u: goto label_1d78b8;
        default: break;
    }

    ctx->pc = 0x1d7858u;

    // 0x1d7858: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d785c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d7860: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x1d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9160u));
    // 0x1d7864: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7868: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d7868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d786c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1d786cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1d7870: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1d7870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d7874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7878: 0x24a59920  addiu       $a1, $a1, -0x66E0
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    // 0x1d787c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7884: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D7884u;
    SET_GPR_U32(ctx, 31, 0x1D788Cu);
    ctx->pc = 0x1D7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7884u;
    // 0x1d7888: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D7884u, 0x1D788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D788Cu;
label_1d788c:
    // 0x1d788c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7890: 0xc0d75d0  jal         func_35D740
    ctx->pc = 0x1D7890u;
    SET_GPR_U32(ctx, 31, 0x1D7898u);
    ctx->pc = 0x1D7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7890u;
    // 0x1d7894: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x1D7890u, 0x1D7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7898u;
label_1d7898:
    // 0x1d7898: 0xc0d7596  jal         func_35D658
    ctx->pc = 0x1D7898u;
    SET_GPR_U32(ctx, 31, 0x1D78A0u);
    ctx->pc = 0x1D789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7898u;
    // 0x1d789c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x1D7898u, 0x1D78A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78A0u;
label_1d78a0:
    // 0x1d78a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d78a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78a4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x1D78A4u;
    SET_GPR_U32(ctx, 31, 0x1D78ACu);
    ctx->pc = 0x1D78A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78A4u;
    // 0x1d78a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x1D78A4u, 0x1D78ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78ACu;
label_1d78ac:
    // 0x1d78ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78b0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D78B0u;
    SET_GPR_U32(ctx, 31, 0x1D78B8u);
    ctx->pc = 0x1D78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78B0u;
    // 0x1d78b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D78B0u, 0x1D78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78B8u;
label_1d78b8:
    // 0x1d78b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d78b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d78bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d78c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d78c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d78c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78C4u;
        // 0x1d78c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78CCu;
    // 0x1d78cc: 0x0  nop
    ctx->pc = 0x1d78ccu;
    // NOP
    ctx->pc = 0x1d78d0u;
}
