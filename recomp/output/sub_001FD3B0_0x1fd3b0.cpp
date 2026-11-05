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

// Function: sub_001FD3B0
// Address: 0x1fd3b0 - 0x1fd3f0
void sub_001FD3B0_0x1fd3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD3B0_0x1fd3b0");
#endif

    switch (ctx->pc) {
        case 0x1fd3e0u: goto label_1fd3e0;
        default: break;
    }

    ctx->pc = 0x1fd3b0u;

    // 0x1fd3b0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fd3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fd3b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd3b8: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1fd3bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd3c0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1fd3c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1fd3c4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1fd3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1fd3c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fd3c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fd3cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd3d4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fd3d8: 0xc07dbac  jal         func_1F6EB0
    ctx->pc = 0x1FD3D8u;
    SET_GPR_U32(ctx, 31, 0x1FD3E0u);
    ctx->pc = 0x1FD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3D8u;
    // 0x1fd3dc: 0xc3280b  movn        $a1, $a2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EB0u, 0x1FD3D8u, 0x1FD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3E0u;
label_1fd3e0:
    // 0x1fd3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3E4u;
        // 0x1fd3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD3ECu;
    // 0x1fd3ec: 0x0  nop
    ctx->pc = 0x1fd3ecu;
    // NOP
    ctx->pc = 0x1fd3f0u;
}
