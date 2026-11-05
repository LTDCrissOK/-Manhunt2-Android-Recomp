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

// Function: sub_0038F3D0
// Address: 0x38f3d0 - 0x38f448
void sub_0038F3D0_0x38f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F3D0_0x38f3d0");
#endif

    switch (ctx->pc) {
        case 0x38f3fcu: goto label_38f3fc;
        default: break;
    }

    ctx->pc = 0x38f3d0u;

    // 0x38f3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38f3d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f3d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f3dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f3e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f3e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38f3e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f3ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38f3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f3f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38f3f4: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x38F3F4u;
    SET_GPR_U32(ctx, 31, 0x38F3FCu);
    ctx->pc = 0x38F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F3F4u;
    // 0x38f3f8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x38F3F4u, 0x38F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F3FCu;
label_38f3fc:
    // 0x38f3fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38f400: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x38f400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x38f404: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x38f404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x38f408: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38f408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x38f40c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x38f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x38f410: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x38f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x38f414: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38f414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38f418: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x38f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38f41c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x38f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x38f420: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38f424: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x38f424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x38f428: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38f428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f42c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38f42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f430: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f438: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38f438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x38f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x38F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F43Cu;
        // 0x38f440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F444u;
    // 0x38f444: 0x0  nop
    ctx->pc = 0x38f444u;
    // NOP
    ctx->pc = 0x38f448u;
}
