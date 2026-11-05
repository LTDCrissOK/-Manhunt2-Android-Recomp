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

// Function: sub_0015C2C8
// Address: 0x15c2c8 - 0x15c340
void sub_0015C2C8_0x15c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C2C8_0x15c2c8");
#endif

    switch (ctx->pc) {
        case 0x15c2fcu: goto label_15c2fc;
        case 0x15c308u: goto label_15c308;
        case 0x15c320u: goto label_15c320;
        default: break;
    }

    ctx->pc = 0x15c2c8u;

    // 0x15c2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15c2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c2d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15c2dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15c2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15c2e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15c2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15c2ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15c2ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15c2f4: 0xc057028  jal         func_15C0A0
    ctx->pc = 0x15C2F4u;
    SET_GPR_U32(ctx, 31, 0x15C2FCu);
    ctx->pc = 0x15C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C2F4u;
    // 0x15c2f8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0A0u, 0x15C2F4u, 0x15C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C2FCu;
label_15c2fc:
    // 0x15c2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c300: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15C300u;
    SET_GPR_U32(ctx, 31, 0x15C308u);
    ctx->pc = 0x15C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C300u;
    // 0x15c304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15C300u, 0x15C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C308u;
label_15c308:
    // 0x15c308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c30c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c310: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15c310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c314: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15c314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c318: 0xc05730e  jal         func_15CC38
    ctx->pc = 0x15C318u;
    SET_GPR_U32(ctx, 31, 0x15C320u);
    ctx->pc = 0x15C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C318u;
    // 0x15c31c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC38u, 0x15C318u, 0x15C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C320u;
label_15c320:
    // 0x15c320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c32c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15c32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c330: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15c330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c334: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15c334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15c338: 0x3e00008  jr          $ra
    ctx->pc = 0x15C338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C338u;
        // 0x15c33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C340u;
}
