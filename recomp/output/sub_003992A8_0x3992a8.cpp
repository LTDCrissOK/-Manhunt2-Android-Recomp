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

// Function: sub_003992A8
// Address: 0x3992a8 - 0x399310
void sub_003992A8_0x3992a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003992A8_0x3992a8");
#endif

    switch (ctx->pc) {
        case 0x3992c8u: goto label_3992c8;
        case 0x3992f0u: goto label_3992f0;
        default: break;
    }

    ctx->pc = 0x3992a8u;

    // 0x3992a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3992a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3992ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3992acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3992b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3992b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3992b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3992b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3992b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3992b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3992bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3992bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3992c0: 0xc0eb89e  jal         func_3AE278
    ctx->pc = 0x3992C0u;
    SET_GPR_U32(ctx, 31, 0x3992C8u);
    ctx->pc = 0x3992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992C0u;
    // 0x3992c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE278u, 0x3992C0u, 0x3992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992C8u;
label_3992c8:
    // 0x3992c8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3992C8u;
    {
        const bool branch_taken_0x3992c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992C8u;
        // 0x3992cc: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992c8) {
            ctx->pc = 0x3992F8u;
            goto label_3992f8;
        }
    }
    ctx->pc = 0x3992D0u;
    // 0x3992d0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3992d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3992d4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3992d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3992d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3992dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3992DCu;
    {
        const bool branch_taken_0x3992dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3992dc) {
            ctx->pc = 0x3992E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3992DCu;
            // 0x3992e0: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3992F8u;
            goto label_3992f8;
        }
    }
    ctx->pc = 0x3992E4u;
    // 0x3992e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3992e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3992e8: 0xc0eb8a2  jal         func_3AE288
    ctx->pc = 0x3992E8u;
    SET_GPR_U32(ctx, 31, 0x3992F0u);
    ctx->pc = 0x3992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992E8u;
    // 0x3992ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE288u, 0x3992E8u, 0x3992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992F0u;
label_3992f0:
    // 0x3992f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3992F0u;
    {
        const bool branch_taken_0x3992f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3992F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992F0u;
        // 0x3992f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992f0) {
            ctx->pc = 0x3992FCu;
            goto label_3992fc;
        }
    }
    ctx->pc = 0x3992F8u;
label_3992f8:
    // 0x3992f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3992f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3992fc:
    // 0x3992fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3992fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399304: 0x3e00008  jr          $ra
    ctx->pc = 0x399304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399304u;
        // 0x399308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39930Cu;
    // 0x39930c: 0x0  nop
    ctx->pc = 0x39930cu;
    // NOP
    ctx->pc = 0x399310u;
}
