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

// Function: sub_003DCC58
// Address: 0x3dcc58 - 0x3dcca0
void sub_003DCC58_0x3dcc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCC58_0x3dcc58");
#endif

    switch (ctx->pc) {
        case 0x3dcc94u: goto label_3dcc94;
        default: break;
    }

    ctx->pc = 0x3dcc58u;

    // 0x3dcc58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dcc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcc5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcc5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcc60: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dcc64: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3dcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3dcc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dcc6c: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x3dcc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x3dcc70: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x3dcc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x3dcc74: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x3dcc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x3dcc78: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dcc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dcc7c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x3dcc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x3dcc80: 0xacc30068  sw          $v1, 0x68($a2)
    ctx->pc = 0x3dcc80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 3));
    // 0x3dcc84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCC84u;
    {
        const bool branch_taken_0x3dcc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC84u;
        // 0x3dcc88: 0xacc30048  sw          $v1, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc84) {
            ctx->pc = 0x3DCC94u;
            goto label_3dcc94;
        }
    }
    ctx->pc = 0x3DCC8Cu;
    // 0x3dcc8c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DCC8Cu;
    SET_GPR_U32(ctx, 31, 0x3DCC94u);
    ctx->pc = 0x3DCC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC8Cu;
    // 0x3dcc90: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DCC8Cu, 0x3DCC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC94u;
label_3dcc94:
    // 0x3dcc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcc98: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC98u;
        // 0x3dcc9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCA0u;
}
