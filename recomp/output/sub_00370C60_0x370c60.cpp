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

// Function: sub_00370C60
// Address: 0x370c60 - 0x370cb0
void sub_00370C60_0x370c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C60_0x370c60");
#endif

    switch (ctx->pc) {
        case 0x370c88u: goto label_370c88;
        case 0x370c9cu: goto label_370c9c;
        default: break;
    }

    ctx->pc = 0x370c60u;

    // 0x370c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370c74: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x370c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x370c78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x370C78u;
    {
        const bool branch_taken_0x370c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C78u;
        // 0x370c7c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c78) {
            ctx->pc = 0x370C88u;
            goto label_370c88;
        }
    }
    ctx->pc = 0x370C80u;
    // 0x370c80: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x370C80u;
    SET_GPR_U32(ctx, 31, 0x370C88u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x370C80u, 0x370C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C88u;
label_370c88:
    // 0x370c88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x370c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x370c8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x370C8Cu;
    {
        const bool branch_taken_0x370c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c8c) {
            ctx->pc = 0x370C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370C8Cu;
            // 0x370c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370CA0u;
            goto label_370ca0;
        }
    }
    ctx->pc = 0x370C94u;
    // 0x370c94: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x370C94u;
    SET_GPR_U32(ctx, 31, 0x370C9Cu);
    ctx->pc = 0x370C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C94u;
    // 0x370c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x370C94u, 0x370C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C9Cu;
label_370c9c:
    // 0x370c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_370ca0:
    // 0x370ca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x370CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CA8u;
        // 0x370cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370CB0u;
}
