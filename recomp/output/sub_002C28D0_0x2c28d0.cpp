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

// Function: sub_002C28D0
// Address: 0x2c28d0 - 0x2c2930
void sub_002C28D0_0x2c28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C28D0_0x2c28d0");
#endif

    switch (ctx->pc) {
        case 0x2c28fcu: goto label_2c28fc;
        case 0x2c2914u: goto label_2c2914;
        default: break;
    }

    ctx->pc = 0x2c28d0u;

    // 0x2c28d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c28d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c28d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c28d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c28dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c28dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c28e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c28e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c28e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c28ec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c28ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c28f4: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x2C28F4u;
    SET_GPR_U32(ctx, 31, 0x2C28FCu);
    ctx->pc = 0x2C28F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28F4u;
    // 0x2c28f8: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x2C28F4u, 0x2C28FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28FCu;
label_2c28fc:
    // 0x2c28fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c28fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c2900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2904: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c2904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2908: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c2908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c290c: 0xc0b0a7a  jal         func_2C29E8
    ctx->pc = 0x2C290Cu;
    SET_GPR_U32(ctx, 31, 0x2C2914u);
    ctx->pc = 0x2C2910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C290Cu;
    // 0x2c2910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x2C290Cu, 0x2C2914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2914u;
label_2c2914:
    // 0x2c2914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c2918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c291c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c291cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c2920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2928: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2928u;
        // 0x2c292c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2930u;
}
