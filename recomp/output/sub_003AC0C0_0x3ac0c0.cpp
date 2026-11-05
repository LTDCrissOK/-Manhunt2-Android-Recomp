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

// Function: sub_003AC0C0
// Address: 0x3ac0c0 - 0x3ac128
void sub_003AC0C0_0x3ac0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC0C0_0x3ac0c0");
#endif

    switch (ctx->pc) {
        case 0x3ac0ecu: goto label_3ac0ec;
        case 0x3ac100u: goto label_3ac100;
        case 0x3ac108u: goto label_3ac108;
        default: break;
    }

    ctx->pc = 0x3ac0c0u;

    // 0x3ac0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ac0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ac0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ac0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ac0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ac0d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ac0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ac0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ac0d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ac0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ac0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ac0e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ac0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ac0e4: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AC0E4u;
    SET_GPR_U32(ctx, 31, 0x3AC0ECu);
    ctx->pc = 0x3AC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0E4u;
    // 0x3ac0e8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AC0E4u, 0x3AC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC0ECu;
label_3ac0ec:
    // 0x3ac0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ac0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ac0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0f8: 0xc0eb04a  jal         func_3AC128
    ctx->pc = 0x3AC0F8u;
    SET_GPR_U32(ctx, 31, 0x3AC100u);
    ctx->pc = 0x3AC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0F8u;
    // 0x3ac0fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC128u, 0x3AC0F8u, 0x3AC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC100u;
label_3ac100:
    // 0x3ac100: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AC100u;
    SET_GPR_U32(ctx, 31, 0x3AC108u);
    ctx->pc = 0x3AC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC100u;
    // 0x3ac104: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AC100u, 0x3AC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC108u;
label_3ac108:
    // 0x3ac108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ac108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac10c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ac10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac110: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ac110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ac118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ac11c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ac11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ac120: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC120u;
        // 0x3ac124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC128u;
}
