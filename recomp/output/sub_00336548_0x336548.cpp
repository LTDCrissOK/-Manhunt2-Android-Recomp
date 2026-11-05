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

// Function: sub_00336548
// Address: 0x336548 - 0x336590
void sub_00336548_0x336548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336548_0x336548");
#endif

    switch (ctx->pc) {
        case 0x336564u: goto label_336564;
        case 0x33656cu: goto label_33656c;
        case 0x336578u: goto label_336578;
        default: break;
    }

    ctx->pc = 0x336548u;

    // 0x336548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33654c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33654cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x336550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336554: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x336554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x336558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x336558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33655c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x33655Cu;
    SET_GPR_U32(ctx, 31, 0x336564u);
    ctx->pc = 0x336560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33655Cu;
    // 0x336560: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x33655Cu, 0x336564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336564u;
label_336564:
    // 0x336564: 0xc0cd4b8  jal         func_3352E0
    ctx->pc = 0x336564u;
    SET_GPR_U32(ctx, 31, 0x33656Cu);
    ctx->pc = 0x336568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336564u;
    // 0x336568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352E0u, 0x336564u, 0x33656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33656Cu;
label_33656c:
    // 0x33656c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33656cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336570: 0xc0cd964  jal         func_336590
    ctx->pc = 0x336570u;
    SET_GPR_U32(ctx, 31, 0x336578u);
    ctx->pc = 0x336574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336570u;
    // 0x336574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336590u, 0x336570u, 0x336578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336578u;
label_336578:
    // 0x336578: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x336578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x33657c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33657cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x336580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336588: 0x3e00008  jr          $ra
    ctx->pc = 0x336588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336588u;
        // 0x33658c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336590u;
}
