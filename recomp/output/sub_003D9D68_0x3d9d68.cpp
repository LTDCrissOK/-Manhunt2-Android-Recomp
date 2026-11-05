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

// Function: sub_003D9D68
// Address: 0x3d9d68 - 0x3d9dc0
void sub_003D9D68_0x3d9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9D68_0x3d9d68");
#endif

    switch (ctx->pc) {
        case 0x3d9da0u: goto label_3d9da0;
        default: break;
    }

    ctx->pc = 0x3d9d68u;

    // 0x3d9d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9d70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d78: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9d7c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3d9d7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d9d80: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D9D80u;
    {
        const bool branch_taken_0x3d9d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D80u;
        // 0x3d9d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d80) {
            ctx->pc = 0x3D9DB0u;
            goto label_3d9db0;
        }
    }
    ctx->pc = 0x3D9D88u;
    // 0x3d9d88: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3d9d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9d8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d9d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9d98: 0xc0f6750  jal         func_3D9D40
    ctx->pc = 0x3D9D98u;
    SET_GPR_U32(ctx, 31, 0x3D9DA0u);
    ctx->pc = 0x3D9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9D98u;
    // 0x3d9d9c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9D40u, 0x3D9D98u, 0x3D9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9DA0u;
label_3d9da0:
    // 0x3d9da0: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9dac: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x3d9dacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_3d9db0:
    // 0x3d9db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9db8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DB8u;
        // 0x3d9dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9DC0u;
}
