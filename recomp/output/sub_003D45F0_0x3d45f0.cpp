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

// Function: sub_003D45F0
// Address: 0x3d45f0 - 0x3d4648
void sub_003D45F0_0x3d45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D45F0_0x3d45f0");
#endif

    switch (ctx->pc) {
        case 0x3d4608u: goto label_3d4608;
        case 0x3d4638u: goto label_3d4638;
        default: break;
    }

    ctx->pc = 0x3d45f0u;

    // 0x3d45f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d45f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d45f4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x3d45f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x3d45f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d45f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d45fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d45fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d4600: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4600u;
    SET_GPR_U32(ctx, 31, 0x3D4608u);
    ctx->pc = 0x3D4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4600u;
    // 0x3d4604: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4600u, 0x3D4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4608u;
label_3d4608:
    // 0x3d4608: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3d4608u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d460c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x3d460cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x3d4610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d4610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3d4614: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d4614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4618: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x3d4618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x3d461c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3d461cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3d4620: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3d4620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d4624: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d4624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3d4628: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x3d4628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x3d462c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3d462cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d4630: 0xc0f5206  jal         func_3D4818
    ctx->pc = 0x3D4630u;
    SET_GPR_U32(ctx, 31, 0x3D4638u);
    ctx->pc = 0x3D4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4630u;
    // 0x3d4634: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4818u, 0x3D4630u, 0x3D4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4638u;
label_3d4638:
    // 0x3d4638: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d4638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d463c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D463Cu;
        // 0x3d4640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4644u;
    // 0x3d4644: 0x0  nop
    ctx->pc = 0x3d4644u;
    // NOP
    ctx->pc = 0x3d4648u;
}
