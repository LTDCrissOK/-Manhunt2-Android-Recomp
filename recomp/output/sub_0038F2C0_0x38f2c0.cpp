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

// Function: sub_0038F2C0
// Address: 0x38f2c0 - 0x38f338
void sub_0038F2C0_0x38f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F2C0_0x38f2c0");
#endif

    switch (ctx->pc) {
        case 0x38f2ecu: goto label_38f2ec;
        default: break;
    }

    ctx->pc = 0x38f2c0u;

    // 0x38f2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38f2c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f2c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f2d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f2d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38f2d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f2dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38f2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38f2e4: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x38F2E4u;
    SET_GPR_U32(ctx, 31, 0x38F2ECu);
    ctx->pc = 0x38F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F2E4u;
    // 0x38f2e8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x38F2E4u, 0x38F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F2ECu;
label_38f2ec:
    // 0x38f2ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38f2f0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38f2f4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x38f2f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x38f2f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x38f2fc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x38f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x38f300: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x38f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x38f304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38f304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38f308: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x38f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38f30c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x38f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x38f310: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38f314: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x38f314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x38f318: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38f318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f31c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38f31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f328: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38f328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x38f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x38F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F32Cu;
        // 0x38f330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F334u;
    // 0x38f334: 0x0  nop
    ctx->pc = 0x38f334u;
    // NOP
    ctx->pc = 0x38f338u;
}
