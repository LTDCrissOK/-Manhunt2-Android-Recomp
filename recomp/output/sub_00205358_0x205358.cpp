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

// Function: sub_00205358
// Address: 0x205358 - 0x2053b8
void sub_00205358_0x205358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205358_0x205358");
#endif

    switch (ctx->pc) {
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        default: break;
    }

    ctx->pc = 0x205358u;

label_205358:
    // 0x205358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20535c:
    // 0x20535c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205360:
    // 0x205360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_205364:
    // 0x205364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205368:
    // 0x205368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x205368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20536c:
    // 0x20536c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205370:
    // 0x205370: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x205370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_205374:
    // 0x205374: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205378:
    // 0x205378: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20537c:
    // 0x20537c: 0x40f809  jalr        $v0
label_205380:
    if (ctx->pc == 0x205380u) {
        ctx->pc = 0x205380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20537Cu;
        // 0x205380: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205384u;
        goto label_205384;
    }
    ctx->pc = 0x20537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205384u);
        ctx->pc = 0x205380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20537Cu;
        // 0x205380: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20537Cu, 0x205384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205384u;
label_205384:
    // 0x205384: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205388:
    // 0x205388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20538c:
    // 0x20538c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20538cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205390:
    // 0x205390: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_205394:
    // 0x205394: 0x40f809  jalr        $v0
label_205398:
    if (ctx->pc == 0x205398u) {
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20539Cu;
        goto label_20539c;
    }
    ctx->pc = 0x205394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20539Cu);
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205394u, 0x20539Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20539Cu;
label_20539c:
    // 0x20539c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20539cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2053a0:
    // 0x2053a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2053a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2053a4:
    // 0x2053a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2053a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2053a8:
    // 0x2053a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2053a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2053ac:
    // 0x2053ac: 0x3e00008  jr          $ra
label_2053b0:
    if (ctx->pc == 0x2053B0u) {
        ctx->pc = 0x2053B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053ACu;
        // 0x2053b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053B4u;
        goto label_2053b4;
    }
    ctx->pc = 0x2053ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2053B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053ACu;
        // 0x2053b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2053ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2053B4u;
label_2053b4:
    // 0x2053b4: 0x0  nop
    ctx->pc = 0x2053b4u;
    // NOP
    ctx->pc = 0x2053b8u;
}
