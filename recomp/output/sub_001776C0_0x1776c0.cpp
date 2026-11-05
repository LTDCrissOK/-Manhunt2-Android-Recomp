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

// Function: sub_001776C0
// Address: 0x1776c0 - 0x177700
void sub_001776C0_0x1776c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001776C0_0x1776c0");
#endif

    switch (ctx->pc) {
        case 0x1776dcu: goto label_1776dc;
        case 0x1776ecu: goto label_1776ec;
        default: break;
    }

    ctx->pc = 0x1776c0u;

    // 0x1776c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1776c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1776c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1776c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1776c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1776cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1776ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1776d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1776d4: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x1776D4u;
    SET_GPR_U32(ctx, 31, 0x1776DCu);
    ctx->pc = 0x1776D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776D4u;
    // 0x1776d8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x1776D4u, 0x1776DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776DCu;
label_1776dc:
    // 0x1776dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1776dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1776e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776e4: 0xc05e444  jal         func_179110
    ctx->pc = 0x1776E4u;
    SET_GPR_U32(ctx, 31, 0x1776ECu);
    ctx->pc = 0x1776E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776E4u;
    // 0x1776e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179110u, 0x1776E4u, 0x1776ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776ECu;
label_1776ec:
    // 0x1776ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1776ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1776f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1776f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1776f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1776f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1776f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1776F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1776FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776F8u;
        // 0x1776fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1776F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177700u;
}
