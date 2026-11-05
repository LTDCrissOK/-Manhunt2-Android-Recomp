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

// Function: sub_003D61F0
// Address: 0x3d61f0 - 0x3d6238
void sub_003D61F0_0x3d61f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D61F0_0x3d61f0");
#endif

    switch (ctx->pc) {
        case 0x3d6208u: goto label_3d6208;
        default: break;
    }

    ctx->pc = 0x3d61f0u;

    // 0x3d61f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d61f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d61f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d61f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d61f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d61fc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3d61fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3d6200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D6200u;
    {
        const bool branch_taken_0x3d6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6200u;
        // 0x3d6204: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6200) {
            ctx->pc = 0x3D6228u;
            goto label_3d6228;
        }
    }
    ctx->pc = 0x3D6208u;
label_3d6208:
    // 0x3d6208: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d6208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d620c: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x3d620cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x3d6210: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d6210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d6214: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x3d6214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x3d6218: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3d6218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d621c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3d621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3d6220: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D6220u;
    {
        const bool branch_taken_0x3d6220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6220u;
        // 0x3d6224: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6220) {
            ctx->pc = 0x3D6208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6208;
        }
    }
    ctx->pc = 0x3D6228u;
label_3d6228:
    // 0x3d6228: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3d6228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3d622c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D622Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D622Cu;
        // 0x3d6230: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D622Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6234u;
    // 0x3d6234: 0x0  nop
    ctx->pc = 0x3d6234u;
    // NOP
    ctx->pc = 0x3d6238u;
}
