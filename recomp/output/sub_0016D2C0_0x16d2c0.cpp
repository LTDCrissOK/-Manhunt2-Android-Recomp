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

// Function: sub_0016D2C0
// Address: 0x16d2c0 - 0x16d328
void sub_0016D2C0_0x16d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D2C0_0x16d2c0");
#endif

    switch (ctx->pc) {
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d300u: goto label_16d300;
        case 0x16d310u: goto label_16d310;
        default: break;
    }

    ctx->pc = 0x16d2c0u;

    // 0x16d2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d2d4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x16d2d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16d2d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16d2dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d2e0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x16d2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d2e8: 0xc04efc0  jal         func_13BF00
    ctx->pc = 0x16D2E8u;
    SET_GPR_U32(ctx, 31, 0x16D2F0u);
    ctx->pc = 0x16D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2E8u;
    // 0x16d2ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF00u, 0x16D2E8u, 0x16D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2F0u;
label_16d2f0:
    // 0x16d2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16d2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2f8: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x16D2F8u;
    SET_GPR_U32(ctx, 31, 0x16D300u);
    ctx->pc = 0x16D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2F8u;
    // 0x16d2fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x16D2F8u, 0x16D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D300u;
label_16d300:
    // 0x16d300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d304: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16d304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d308: 0xc05b394  jal         func_16CE50
    ctx->pc = 0x16D308u;
    SET_GPR_U32(ctx, 31, 0x16D310u);
    ctx->pc = 0x16D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D308u;
    // 0x16d30c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE50u, 0x16D308u, 0x16D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D310u;
label_16d310:
    // 0x16d310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d31c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D31Cu;
        // 0x16d320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D324u;
    // 0x16d324: 0x0  nop
    ctx->pc = 0x16d324u;
    // NOP
    ctx->pc = 0x16d328u;
}
