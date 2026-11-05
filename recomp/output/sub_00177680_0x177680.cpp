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

// Function: sub_00177680
// Address: 0x177680 - 0x1776c0
void sub_00177680_0x177680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177680_0x177680");
#endif

    switch (ctx->pc) {
        case 0x17769cu: goto label_17769c;
        case 0x1776acu: goto label_1776ac;
        default: break;
    }

    ctx->pc = 0x177680u;

    // 0x177680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17768c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17768cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177694: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x177694u;
    SET_GPR_U32(ctx, 31, 0x17769Cu);
    ctx->pc = 0x177698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177694u;
    // 0x177698: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x177694u, 0x17769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17769Cu;
label_17769c:
    // 0x17769c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1776a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776a4: 0xc05e432  jal         func_1790C8
    ctx->pc = 0x1776A4u;
    SET_GPR_U32(ctx, 31, 0x1776ACu);
    ctx->pc = 0x1776A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776A4u;
    // 0x1776a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1790C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1790C8u, 0x1776A4u, 0x1776ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776ACu;
label_1776ac:
    // 0x1776ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1776acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1776b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1776b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1776b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1776b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1776b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1776B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1776BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776B8u;
        // 0x1776bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1776B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1776C0u;
}
