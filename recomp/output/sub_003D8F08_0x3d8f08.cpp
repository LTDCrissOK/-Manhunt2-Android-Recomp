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

// Function: sub_003D8F08
// Address: 0x3d8f08 - 0x3d8f48
void sub_003D8F08_0x3d8f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8F08_0x3d8f08");
#endif

    switch (ctx->pc) {
        case 0x3d8f34u: goto label_3d8f34;
        default: break;
    }

    ctx->pc = 0x3d8f08u;

    // 0x3d8f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d8f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d8f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8f18: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d8f1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8F1Cu;
    {
        const bool branch_taken_0x3d8f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F1Cu;
        // 0x3d8f20: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8f1c) {
            ctx->pc = 0x3D8F38u;
            goto label_3d8f38;
        }
    }
    ctx->pc = 0x3D8F24u;
    // 0x3d8f24: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8F24u;
    {
        const bool branch_taken_0x3d8f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f24) {
            ctx->pc = 0x3D8F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8F24u;
            // 0x3d8f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F3Cu;
            goto label_3d8f3c;
        }
    }
    ctx->pc = 0x3D8F2Cu;
    // 0x3d8f2c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3D8F2Cu;
    SET_GPR_U32(ctx, 31, 0x3D8F34u);
    ctx->pc = 0x3D8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8F2Cu;
    // 0x3d8f30: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3D8F2Cu, 0x3D8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F34u;
label_3d8f34:
    // 0x3d8f34: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3d8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3d8f38:
    // 0x3d8f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8f3c:
    // 0x3d8f3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d8f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8f40: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F40u;
        // 0x3d8f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8F48u;
}
