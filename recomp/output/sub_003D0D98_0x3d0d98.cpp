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

// Function: sub_003D0D98
// Address: 0x3d0d98 - 0x3d0df0
void sub_003D0D98_0x3d0d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0D98_0x3d0d98");
#endif

    ctx->pc = 0x3d0d98u;

    // 0x3d0d98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3d0d9c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d0d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d0da0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3d0da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3d0da4: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x3d0da4u;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x3d0da8: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x3d0da8u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3d0dac: 0xdc8ae640  ld          $t2, -0x19C0($a0)
    ctx->pc = 0x3d0dacu;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x42E640u));
    // 0x3d0db0: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3d0db0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3d0db4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0DB4u;
    {
        const bool branch_taken_0x3d0db4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DB4u;
        // 0x3d0db8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0db4) {
            ctx->pc = 0x3D0DC4u;
            goto label_3d0dc4;
        }
    }
    ctx->pc = 0x3D0DBCu;
    // 0x3d0dbc: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x3d0dbcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d0dc0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3d0dc0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3d0dc4:
    // 0x3d0dc4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3d0dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3d0dc8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3d0dc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3d0dcc: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3d0dccu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3d0dd0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x3d0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x3d0dd4: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3d0dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3d0dd8: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x3d0dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3d0ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0DE4u;
    // 0x3d0de4: 0x0  nop
    ctx->pc = 0x3d0de4u;
    // NOP
    // 0x3d0de8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d0de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d0dec: 0x0  nop
    ctx->pc = 0x3d0decu;
    // NOP
    ctx->pc = 0x3d0df0u;
}
