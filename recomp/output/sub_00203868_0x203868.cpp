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

// Function: sub_00203868
// Address: 0x203868 - 0x2038d8
void sub_00203868_0x203868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203868_0x203868");
#endif

    switch (ctx->pc) {
        case 0x203880u: goto label_203880;
        case 0x203890u: goto label_203890;
        case 0x20389cu: goto label_20389c;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038c4u: goto label_2038c4;
        default: break;
    }

    ctx->pc = 0x203868u;

    // 0x203868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20386c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x203870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203874: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x203874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x203878: 0xc080a12  jal         func_202848
    ctx->pc = 0x203878u;
    SET_GPR_U32(ctx, 31, 0x203880u);
    ctx->pc = 0x20387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203878u;
    // 0x20387c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x203878u, 0x203880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203880u;
label_203880:
    // 0x203880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203880u;
    {
        const bool branch_taken_0x203880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203880u;
        // 0x203884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203880) {
            ctx->pc = 0x20389Cu;
            goto label_20389c;
        }
    }
    ctx->pc = 0x203888u;
    // 0x203888: 0xc0809e4  jal         func_202790
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203888u;
    // 0x20388c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202790u, 0x203888u, 0x203890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203894: 0xc0809fa  jal         func_2027E8
    ctx->pc = 0x203894u;
    SET_GPR_U32(ctx, 31, 0x20389Cu);
    ctx->pc = 0x203898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203894u;
    // 0x203898: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027E8u, 0x203894u, 0x20389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20389Cu;
label_20389c:
    // 0x20389c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038a0: 0xc080a12  jal         func_202848
    ctx->pc = 0x2038A0u;
    SET_GPR_U32(ctx, 31, 0x2038A8u);
    ctx->pc = 0x2038A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A0u;
    // 0x2038a4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x2038A0u, 0x2038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038A8u;
label_2038a8:
    // 0x2038a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2038A8u;
    {
        const bool branch_taken_0x2038a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A8u;
        // 0x2038ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a8) {
            ctx->pc = 0x2038C4u;
            goto label_2038c4;
        }
    }
    ctx->pc = 0x2038B0u;
    // 0x2038b0: 0xc0809e4  jal         func_202790
    ctx->pc = 0x2038B0u;
    SET_GPR_U32(ctx, 31, 0x2038B8u);
    ctx->pc = 0x2038B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038B0u;
    // 0x2038b4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202790u, 0x2038B0u, 0x2038B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038B8u;
label_2038b8:
    // 0x2038b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2038b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038bc: 0xc0809fa  jal         func_2027E8
    ctx->pc = 0x2038BCu;
    SET_GPR_U32(ctx, 31, 0x2038C4u);
    ctx->pc = 0x2038C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038BCu;
    // 0x2038c0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027E8u, 0x2038BCu, 0x2038C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038C4u;
label_2038c4:
    // 0x2038c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2038c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2038c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2038c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2038cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2038CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038CCu;
        // 0x2038d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2038CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2038D4u;
    // 0x2038d4: 0x0  nop
    ctx->pc = 0x2038d4u;
    // NOP
    ctx->pc = 0x2038d8u;
}
