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

// Function: sub_0035D2A0
// Address: 0x35d2a0 - 0x35d318
void sub_0035D2A0_0x35d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D2A0_0x35d2a0");
#endif

    switch (ctx->pc) {
        case 0x35d2c8u: goto label_35d2c8;
        case 0x35d2e0u: goto label_35d2e0;
        case 0x35d2ecu: goto label_35d2ec;
        case 0x35d2f8u: goto label_35d2f8;
        default: break;
    }

    ctx->pc = 0x35d2a0u;

    // 0x35d2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d2a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d2a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35d2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35d2b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35d2bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35d2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2c0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x35D2C0u;
    SET_GPR_U32(ctx, 31, 0x35D2C8u);
    ctx->pc = 0x35D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2C0u;
    // 0x35d2c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x35D2C0u, 0x35D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2C8u;
label_35d2c8:
    // 0x35d2c8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x35d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35d2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2d0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x35d2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d2d4: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x35d2d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35d2d8: 0xc0d747a  jal         func_35D1E8
    ctx->pc = 0x35D2D8u;
    SET_GPR_U32(ctx, 31, 0x35D2E0u);
    ctx->pc = 0x35D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2D8u;
    // 0x35d2dc: 0x86450004  lh          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1E8u, 0x35D2D8u, 0x35D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2E0u;
label_35d2e0:
    // 0x35d2e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2e4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35D2E4u;
    SET_GPR_U32(ctx, 31, 0x35D2ECu);
    ctx->pc = 0x35D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2E4u;
    // 0x35d2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35D2E4u, 0x35D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2ECu;
label_35d2ec:
    // 0x35d2ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35D2F0u;
    SET_GPR_U32(ctx, 31, 0x35D2F8u);
    ctx->pc = 0x35D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2F0u;
    // 0x35d2f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35D2F0u, 0x35D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2F8u;
label_35d2f8:
    // 0x35d2f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35d2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d300: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d304: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35d304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d308: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35d308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d30c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D30Cu;
        // 0x35d310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D314u;
    // 0x35d314: 0x0  nop
    ctx->pc = 0x35d314u;
    // NOP
    ctx->pc = 0x35d318u;
}
