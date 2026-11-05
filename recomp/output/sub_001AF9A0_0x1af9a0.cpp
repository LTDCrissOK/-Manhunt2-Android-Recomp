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

// Function: sub_001AF9A0
// Address: 0x1af9a0 - 0x1af9f0
void sub_001AF9A0_0x1af9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF9A0_0x1af9a0");
#endif

    switch (ctx->pc) {
        case 0x1af9b4u: goto label_1af9b4;
        case 0x1af9dcu: goto label_1af9dc;
        default: break;
    }

    ctx->pc = 0x1af9a0u;

    // 0x1af9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af9a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af9ac: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AF9ACu;
    SET_GPR_U32(ctx, 31, 0x1AF9B4u);
    ctx->pc = 0x1AF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9ACu;
    // 0x1af9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AF9ACu, 0x1AF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9B4u;
label_1af9b4:
    // 0x1af9b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1af9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af9bc: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF9BCu;
    {
        const bool branch_taken_0x1af9bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9BCu;
        // 0x1af9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9bc) {
            ctx->pc = 0x1AF9CCu;
            goto label_1af9cc;
        }
    }
    ctx->pc = 0x1AF9C4u;
    // 0x1af9c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF9C4u;
    {
        const bool branch_taken_0x1af9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9C4u;
        // 0x1af9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9c4) {
            ctx->pc = 0x1AF9DCu;
            goto label_1af9dc;
        }
    }
    ctx->pc = 0x1AF9CCu;
label_1af9cc:
    // 0x1af9cc: 0x24c6014b  addiu       $a2, $a2, 0x14B
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 331));
    // 0x1af9d0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1af9d4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF9D4u;
    SET_GPR_U32(ctx, 31, 0x1AF9DCu);
    ctx->pc = 0x1AF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9D4u;
    // 0x1af9d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF9D4u, 0x1AF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9DCu;
label_1af9dc:
    // 0x1af9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9E4u;
        // 0x1af9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF9ECu;
    // 0x1af9ec: 0x0  nop
    ctx->pc = 0x1af9ecu;
    // NOP
    ctx->pc = 0x1af9f0u;
}
