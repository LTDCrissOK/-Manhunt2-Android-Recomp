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

// Function: sub_002B3980
// Address: 0x2b3980 - 0x2b39f0
void sub_002B3980_0x2b3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3980_0x2b3980");
#endif

    switch (ctx->pc) {
        case 0x2b3994u: goto label_2b3994;
        case 0x2b39a8u: goto label_2b39a8;
        case 0x2b39b8u: goto label_2b39b8;
        default: break;
    }

    ctx->pc = 0x2b3980u;

    // 0x2b3980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3984: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b398c: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x2B398Cu;
    SET_GPR_U32(ctx, 31, 0x2B3994u);
    ctx->pc = 0x2B3990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B398Cu;
    // 0x2b3990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x2B398Cu, 0x2B3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3994u;
label_2b3994:
    // 0x2b3994: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b3994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3998: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b3998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b399c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b399cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b39a0: 0xc0ef222  jal         func_3BC888
    ctx->pc = 0x2B39A0u;
    SET_GPR_U32(ctx, 31, 0x2B39A8u);
    ctx->pc = 0x2B39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39A0u;
    // 0x2b39a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC888u, 0x2B39A0u, 0x2B39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39A8u;
label_2b39a8:
    // 0x2b39a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b39ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b39acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b39b0: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B39B0u;
    SET_GPR_U32(ctx, 31, 0x2B39B8u);
    ctx->pc = 0x2B39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39B0u;
    // 0x2b39b4: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B39B0u, 0x2B39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39B8u;
label_2b39b8:
    // 0x2b39b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b39bc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B39BCu;
    {
        const bool branch_taken_0x2b39bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39BCu;
        // 0x2b39c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39bc) {
            ctx->pc = 0x2B39CCu;
            goto label_2b39cc;
        }
    }
    ctx->pc = 0x2B39C4u;
    // 0x2b39c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B39C4u;
    {
        const bool branch_taken_0x2b39c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C4u;
        // 0x2b39c8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39c4) {
            ctx->pc = 0x2B39D8u;
            goto label_2b39d8;
        }
    }
    ctx->pc = 0x2B39CCu;
label_2b39cc:
    // 0x2b39cc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2b39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b39d0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b39d4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2b39d8:
    // 0x2b39d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b39d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b39dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b39dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39E0u;
        // 0x2b39e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B39E8u;
    // 0x2b39e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b39ec: 0x0  nop
    ctx->pc = 0x2b39ecu;
    // NOP
    ctx->pc = 0x2b39f0u;
}
