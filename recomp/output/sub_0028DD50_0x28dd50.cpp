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

// Function: sub_0028DD50
// Address: 0x28dd50 - 0x28dda0
void sub_0028DD50_0x28dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DD50_0x28dd50");
#endif

    switch (ctx->pc) {
        case 0x28dd78u: goto label_28dd78;
        case 0x28dd8cu: goto label_28dd8c;
        default: break;
    }

    ctx->pc = 0x28dd50u;

    // 0x28dd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28dd58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28dd5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28dd64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28dd68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DD68u;
    {
        const bool branch_taken_0x28dd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD68u;
        // 0x28dd6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd68) {
            ctx->pc = 0x28DD78u;
            goto label_28dd78;
        }
    }
    ctx->pc = 0x28DD70u;
    // 0x28dd70: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x28DD70u;
    SET_GPR_U32(ctx, 31, 0x28DD78u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x28DD70u, 0x28DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD78u;
label_28dd78:
    // 0x28dd78: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x28dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28dd7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DD7Cu;
    {
        const bool branch_taken_0x28dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd7c) {
            ctx->pc = 0x28DD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DD7Cu;
            // 0x28dd80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD90u;
            goto label_28dd90;
        }
    }
    ctx->pc = 0x28DD84u;
    // 0x28dd84: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x28DD84u;
    SET_GPR_U32(ctx, 31, 0x28DD8Cu);
    ctx->pc = 0x28DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD84u;
    // 0x28dd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x28DD84u, 0x28DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD8Cu;
label_28dd8c:
    // 0x28dd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28dd90:
    // 0x28dd90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28dd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28dd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28dd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x28DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD98u;
        // 0x28dd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DDA0u;
}
