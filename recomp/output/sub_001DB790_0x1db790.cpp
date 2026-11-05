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

// Function: sub_001DB790
// Address: 0x1db790 - 0x1db800
void sub_001DB790_0x1db790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB790_0x1db790");
#endif

    switch (ctx->pc) {
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7e4u: goto label_1db7e4;
        case 0x1db7ecu: goto label_1db7ec;
        default: break;
    }

    ctx->pc = 0x1db790u;

    // 0x1db790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db798: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db7a4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db7a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1db7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db7ac: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1db7acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db7b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1db7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db7b4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1db7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1db7b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7B8u;
    {
        const bool branch_taken_0x1db7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7b8) {
            ctx->pc = 0x1DB7C8u;
            goto label_1db7c8;
        }
    }
    ctx->pc = 0x1DB7C0u;
    // 0x1db7c0: 0xc07980c  jal         func_1E6030
    ctx->pc = 0x1DB7C0u;
    SET_GPR_U32(ctx, 31, 0x1DB7C8u);
    ctx->pc = 0x1E6030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6030u, 0x1DB7C0u, 0x1DB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7C8u;
label_1db7c8:
    // 0x1db7c8: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DB7C8u;
    SET_GPR_U32(ctx, 31, 0x1DB7D0u);
    ctx->pc = 0x1DB7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7C8u;
    // 0x1db7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DB7C8u, 0x1DB7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7D0u;
label_1db7d0:
    // 0x1db7d0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1db7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1db7d4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB7D4u;
    {
        const bool branch_taken_0x1db7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7d4) {
            ctx->pc = 0x1DB7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7D4u;
            // 0x1db7d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7F0u;
            goto label_1db7f0;
        }
    }
    ctx->pc = 0x1DB7DCu;
    // 0x1db7dc: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DB7DCu;
    SET_GPR_U32(ctx, 31, 0x1DB7E4u);
    ctx->pc = 0x1DB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7DCu;
    // 0x1db7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DB7DCu, 0x1DB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7E4u;
label_1db7e4:
    // 0x1db7e4: 0xc07ab4c  jal         func_1EAD30
    ctx->pc = 0x1DB7E4u;
    SET_GPR_U32(ctx, 31, 0x1DB7ECu);
    ctx->pc = 0x1DB7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7E4u;
    // 0x1db7e8: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD30u, 0x1DB7E4u, 0x1DB7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7ECu;
label_1db7ec:
    // 0x1db7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db7f0:
    // 0x1db7f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7F4u;
        // 0x1db7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB7FCu;
    // 0x1db7fc: 0x0  nop
    ctx->pc = 0x1db7fcu;
    // NOP
    ctx->pc = 0x1db800u;
}
