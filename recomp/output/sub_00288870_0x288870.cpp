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

// Function: sub_00288870
// Address: 0x288870 - 0x2888f0
void sub_00288870_0x288870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288870_0x288870");
#endif

    switch (ctx->pc) {
        case 0x288884u: goto label_288884;
        case 0x288894u: goto label_288894;
        case 0x28889cu: goto label_28889c;
        case 0x2888b0u: goto label_2888b0;
        case 0x2888b8u: goto label_2888b8;
        case 0x2888c8u: goto label_2888c8;
        case 0x2888e0u: goto label_2888e0;
        default: break;
    }

    ctx->pc = 0x288870u;

    // 0x288870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x288878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28887c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x28887Cu;
    SET_GPR_U32(ctx, 31, 0x288884u);
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x28887Cu, 0x288884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288884u;
label_288884:
    // 0x288884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288884u;
    {
        const bool branch_taken_0x288884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288884) {
            ctx->pc = 0x288894u;
            goto label_288894;
        }
    }
    ctx->pc = 0x28888Cu;
    // 0x28888c: 0xc0c671e  jal         func_319C78
    ctx->pc = 0x28888Cu;
    SET_GPR_U32(ctx, 31, 0x288894u);
    ctx->pc = 0x319C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319C78u, 0x28888Cu, 0x288894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288894u;
label_288894:
    // 0x288894: 0xc0a2202  jal         func_288808
    ctx->pc = 0x288894u;
    SET_GPR_U32(ctx, 31, 0x28889Cu);
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x288894u, 0x28889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28889Cu;
label_28889c:
    // 0x28889c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2888a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2888A0u;
    {
        const bool branch_taken_0x2888a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2888a0) {
            ctx->pc = 0x2888B0u;
            goto label_2888b0;
        }
    }
    ctx->pc = 0x2888A8u;
    // 0x2888a8: 0xc0c6730  jal         func_319CC0
    ctx->pc = 0x2888A8u;
    SET_GPR_U32(ctx, 31, 0x2888B0u);
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x2888A8u, 0x2888B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888B0u;
label_2888b0:
    // 0x2888b0: 0xc0a2208  jal         func_288820
    ctx->pc = 0x2888B0u;
    SET_GPR_U32(ctx, 31, 0x2888B8u);
    ctx->pc = 0x288820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288820u, 0x2888B0u, 0x2888B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888B8u;
label_2888b8:
    // 0x2888b8: 0x2450fff0  addiu       $s0, $v0, -0x10
    ctx->pc = 0x2888b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2888bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2888bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2888c0: 0xc0a220e  jal         func_288838
    ctx->pc = 0x2888C0u;
    SET_GPR_U32(ctx, 31, 0x2888C8u);
    ctx->pc = 0x2888C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888C0u;
    // 0x2888c4: 0x2028018  mult        $s0, $s0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288838u, 0x2888C0u, 0x2888C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888C8u;
label_2888c8:
    // 0x2888c8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2888c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2888cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2888ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2888d0: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x2888d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    // 0x2888d4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2888d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2888d8: 0xc0a878a  jal         func_2A1E28
    ctx->pc = 0x2888D8u;
    SET_GPR_U32(ctx, 31, 0x2888E0u);
    ctx->pc = 0x2888DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888D8u;
    // 0x2888dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E28u, 0x2888D8u, 0x2888E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888E0u;
label_2888e0:
    // 0x2888e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2888e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2888e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2888e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2888e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2888E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2888ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888E8u;
        // 0x2888ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2888E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2888F0u;
}
