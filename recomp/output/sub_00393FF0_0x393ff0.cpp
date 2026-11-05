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

// Function: sub_00393FF0
// Address: 0x393ff0 - 0x394058
void sub_00393FF0_0x393ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393FF0_0x393ff0");
#endif

    switch (ctx->pc) {
        case 0x39401cu: goto label_39401c;
        case 0x394030u: goto label_394030;
        case 0x394038u: goto label_394038;
        default: break;
    }

    ctx->pc = 0x393ff0u;

    // 0x393ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x393ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x393ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x393ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ffc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x393ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x394000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394004: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x394004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x394008: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x394008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39400c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x394010: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394014: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x394014u;
    SET_GPR_U32(ctx, 31, 0x39401Cu);
    ctx->pc = 0x394018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394014u;
    // 0x394018: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x394014u, 0x39401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39401Cu;
label_39401c:
    // 0x39401c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x394020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394024: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x394024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394028: 0xc0e5016  jal         func_394058
    ctx->pc = 0x394028u;
    SET_GPR_U32(ctx, 31, 0x394030u);
    ctx->pc = 0x39402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394028u;
    // 0x39402c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394058u, 0x394028u, 0x394030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394030u;
label_394030:
    // 0x394030: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x394030u;
    SET_GPR_U32(ctx, 31, 0x394038u);
    ctx->pc = 0x394034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394030u;
    // 0x394034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x394030u, 0x394038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394038u;
label_394038:
    // 0x394038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39403c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x394040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394048: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x394048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39404c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394050: 0x3e00008  jr          $ra
    ctx->pc = 0x394050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394050u;
        // 0x394054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394058u;
}
