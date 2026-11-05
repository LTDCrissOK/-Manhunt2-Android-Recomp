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

// Function: sub_003D9C08
// Address: 0x3d9c08 - 0x3d9c60
void sub_003D9C08_0x3d9c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9C08_0x3d9c08");
#endif

    switch (ctx->pc) {
        case 0x3d9c40u: goto label_3d9c40;
        default: break;
    }

    ctx->pc = 0x3d9c08u;

    // 0x3d9c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9c10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9c18: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9c18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9c1c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3d9c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d9c20: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D9C20u;
    {
        const bool branch_taken_0x3d9c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C20u;
        // 0x3d9c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c20) {
            ctx->pc = 0x3D9C50u;
            goto label_3d9c50;
        }
    }
    ctx->pc = 0x3D9C28u;
    // 0x3d9c28: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3d9c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9c2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d9c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9c38: 0xc0f66f8  jal         func_3D9BE0
    ctx->pc = 0x3D9C38u;
    SET_GPR_U32(ctx, 31, 0x3D9C40u);
    ctx->pc = 0x3D9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C38u;
    // 0x3d9c3c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9BE0u, 0x3D9C38u, 0x3D9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C40u;
label_3d9c40:
    // 0x3d9c40: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9c48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9c4c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x3d9c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_3d9c50:
    // 0x3d9c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9c54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C58u;
        // 0x3d9c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9C60u;
}
