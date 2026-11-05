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

// Function: sub_003384A0
// Address: 0x3384a0 - 0x3384f0
void sub_003384A0_0x3384a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003384A0_0x3384a0");
#endif

    switch (ctx->pc) {
        case 0x3384e0u: goto label_3384e0;
        default: break;
    }

    ctx->pc = 0x3384a0u;

    // 0x3384a0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3384a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3384a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3384a8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x3384a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384ac: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x3384acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384b0: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x3384b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384b4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3384b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3384b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3384c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3384c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3384c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3384c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3384c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3384cc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3384ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384d0: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x3384d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384d4: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x3384d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384d8: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x3384D8u;
    SET_GPR_U32(ctx, 31, 0x3384E0u);
    ctx->pc = 0x3384DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3384D8u;
    // 0x3384dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x3384D8u, 0x3384E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3384E0u;
label_3384e0:
    // 0x3384e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3384e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3384e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3384E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3384E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384E4u;
        // 0x3384e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384ECu;
    // 0x3384ec: 0x0  nop
    ctx->pc = 0x3384ecu;
    // NOP
    ctx->pc = 0x3384f0u;
}
