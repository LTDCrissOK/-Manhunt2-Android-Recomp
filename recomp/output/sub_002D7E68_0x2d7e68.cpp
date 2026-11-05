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

// Function: sub_002D7E68
// Address: 0x2d7e68 - 0x2d7ec0
void sub_002D7E68_0x2d7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7E68_0x2d7e68");
#endif

    switch (ctx->pc) {
        case 0x2d7e90u: goto label_2d7e90;
        case 0x2d7ea4u: goto label_2d7ea4;
        default: break;
    }

    ctx->pc = 0x2d7e68u;

    // 0x2d7e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7e70: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2d7e70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x2d7e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7e78: 0x8e22b0bc  lw          $v0, -0x4F44($s1)
    ctx->pc = 0x2d7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57B0BCu));
    // 0x2d7e7c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2d7e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2d7e80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7E80u;
    {
        const bool branch_taken_0x2d7e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E80u;
        // 0x2d7e84: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e80) {
            ctx->pc = 0x2D7EA4u;
            goto label_2d7ea4;
        }
    }
    ctx->pc = 0x2D7E88u;
    // 0x2d7e88: 0xc0b5fb0  jal         func_2D7EC0
    ctx->pc = 0x2D7E88u;
    SET_GPR_U32(ctx, 31, 0x2D7E90u);
    ctx->pc = 0x2D7E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E88u;
    // 0x2d7e8c: 0x2604b090  addiu       $a0, $s0, -0x4F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7EC0u, 0x2D7E88u, 0x2D7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E90u;
label_2d7e90:
    // 0x2d7e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7e94: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2d7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x2d7e98: 0xae22b0bc  sw          $v0, -0x4F44($s1)
    ctx->pc = 0x2d7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947004), GPR_U32(ctx, 2));
    // 0x2d7e9c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x2D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D7EA4u);
    ctx->pc = 0x2D7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E9Cu;
    // 0x2d7ea0: 0x24847e40  addiu       $a0, $a0, 0x7E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x2D7E9Cu, 0x2D7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EA4u;
label_2d7ea4:
    // 0x2d7ea4: 0x2602b090  addiu       $v0, $s0, -0x4F70
    ctx->pc = 0x2d7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946960));
    // 0x2d7ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EB4u;
        // 0x2d7eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7EBCu;
    // 0x2d7ebc: 0x0  nop
    ctx->pc = 0x2d7ebcu;
    // NOP
    ctx->pc = 0x2d7ec0u;
}
