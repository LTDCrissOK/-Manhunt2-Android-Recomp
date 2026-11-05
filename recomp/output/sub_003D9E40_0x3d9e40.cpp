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

// Function: sub_003D9E40
// Address: 0x3d9e40 - 0x3d9e80
void sub_003D9E40_0x3d9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9E40_0x3d9e40");
#endif

    switch (ctx->pc) {
        case 0x3d9e6cu: goto label_3d9e6c;
        default: break;
    }

    ctx->pc = 0x3d9e40u;

    // 0x3d9e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9e48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9e54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9E54u;
    {
        const bool branch_taken_0x3d9e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E54u;
        // 0x3d9e58: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e54) {
            ctx->pc = 0x3D9E70u;
            goto label_3d9e70;
        }
    }
    ctx->pc = 0x3D9E5Cu;
    // 0x3d9e5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9E5Cu;
    {
        const bool branch_taken_0x3d9e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e5c) {
            ctx->pc = 0x3D9E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9E5Cu;
            // 0x3d9e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9E74u;
            goto label_3d9e74;
        }
    }
    ctx->pc = 0x3D9E64u;
    // 0x3d9e64: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3D9E64u;
    SET_GPR_U32(ctx, 31, 0x3D9E6Cu);
    ctx->pc = 0x3D9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9E64u;
    // 0x3d9e68: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3D9E64u, 0x3D9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9E6Cu;
label_3d9e6c:
    // 0x3d9e6c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3d9e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3d9e70:
    // 0x3d9e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9e74:
    // 0x3d9e74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9e78: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E78u;
        // 0x3d9e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9E80u;
}
