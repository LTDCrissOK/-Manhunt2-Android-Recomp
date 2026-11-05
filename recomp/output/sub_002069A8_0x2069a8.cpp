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

// Function: sub_002069A8
// Address: 0x2069a8 - 0x2069f8
void sub_002069A8_0x2069a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002069A8_0x2069a8");
#endif

    switch (ctx->pc) {
        case 0x2069a8u: goto label_2069a8;
        case 0x2069acu: goto label_2069ac;
        case 0x2069b0u: goto label_2069b0;
        case 0x2069b4u: goto label_2069b4;
        case 0x2069b8u: goto label_2069b8;
        case 0x2069bcu: goto label_2069bc;
        case 0x2069c0u: goto label_2069c0;
        case 0x2069c4u: goto label_2069c4;
        case 0x2069c8u: goto label_2069c8;
        case 0x2069ccu: goto label_2069cc;
        case 0x2069d0u: goto label_2069d0;
        case 0x2069d4u: goto label_2069d4;
        case 0x2069d8u: goto label_2069d8;
        case 0x2069dcu: goto label_2069dc;
        case 0x2069e0u: goto label_2069e0;
        case 0x2069e4u: goto label_2069e4;
        case 0x2069e8u: goto label_2069e8;
        case 0x2069ecu: goto label_2069ec;
        case 0x2069f0u: goto label_2069f0;
        case 0x2069f4u: goto label_2069f4;
        default: break;
    }

    ctx->pc = 0x2069a8u;

label_2069a8:
    // 0x2069a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2069ac:
    // 0x2069ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2069b0:
    // 0x2069b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2069b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2069b4:
    // 0x2069b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2069b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2069b8:
    // 0x2069b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2069b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2069bc:
    // 0x2069bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2069bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2069c0:
    // 0x2069c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2069c4:
    // 0x2069c4: 0x40f809  jalr        $v0
label_2069c8:
    if (ctx->pc == 0x2069C8u) {
        ctx->pc = 0x2069CCu;
        goto label_2069cc;
    }
    ctx->pc = 0x2069C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2069CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069C4u, 0x2069CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2069CCu;
label_2069cc:
    // 0x2069cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2069d0:
    if (ctx->pc == 0x2069D0u) {
        ctx->pc = 0x2069D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069CCu;
        // 0x2069d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069D4u;
        goto label_2069d4;
    }
    ctx->pc = 0x2069CCu;
    {
        const bool branch_taken_0x2069cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069cc) {
            ctx->pc = 0x2069D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2069CCu;
            // 0x2069d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2069ECu;
            goto label_2069ec;
        }
    }
    ctx->pc = 0x2069D4u;
label_2069d4:
    // 0x2069d4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2069d8:
    // 0x2069d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2069dc:
    // 0x2069dc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2069e0:
    // 0x2069e0: 0x40f809  jalr        $v0
label_2069e4:
    if (ctx->pc == 0x2069E4u) {
        ctx->pc = 0x2069E8u;
        goto label_2069e8;
    }
    ctx->pc = 0x2069E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2069E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069E0u, 0x2069E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2069E8u;
label_2069e8:
    // 0x2069e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2069e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2069ec:
    // 0x2069ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2069ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2069f0:
    // 0x2069f0: 0x3e00008  jr          $ra
label_2069f4:
    if (ctx->pc == 0x2069F4u) {
        ctx->pc = 0x2069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069F0u;
        // 0x2069f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069F8u;
        goto label_fallthrough_0x2069f0;
    }
    ctx->pc = 0x2069F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069F0u;
        // 0x2069f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2069f0:
    ctx->pc = 0x2069F8u;
}
