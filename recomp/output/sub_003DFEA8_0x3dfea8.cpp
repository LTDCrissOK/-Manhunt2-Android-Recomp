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

// Function: sub_003DFEA8
// Address: 0x3dfea8 - 0x3dfed0
void sub_003DFEA8_0x3dfea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFEA8_0x3dfea8");
#endif

    switch (ctx->pc) {
        case 0x3dfea8u: goto label_3dfea8;
        case 0x3dfeacu: goto label_3dfeac;
        case 0x3dfeb0u: goto label_3dfeb0;
        case 0x3dfeb4u: goto label_3dfeb4;
        case 0x3dfeb8u: goto label_3dfeb8;
        case 0x3dfebcu: goto label_3dfebc;
        case 0x3dfec0u: goto label_3dfec0;
        case 0x3dfec4u: goto label_3dfec4;
        case 0x3dfec8u: goto label_3dfec8;
        case 0x3dfeccu: goto label_3dfecc;
        default: break;
    }

    ctx->pc = 0x3dfea8u;

label_3dfea8:
    // 0x3dfea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dfea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3dfeac:
    // 0x3dfeac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3dfeb0:
    if (ctx->pc == 0x3DFEB0u) {
        ctx->pc = 0x3DFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEACu;
        // 0x3dfeb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEB4u;
        goto label_3dfeb4;
    }
    ctx->pc = 0x3DFEACu;
    {
        const bool branch_taken_0x3dfeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEACu;
        // 0x3dfeb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfeac) {
            ctx->pc = 0x3DFEC4u;
            goto label_3dfec4;
        }
    }
    ctx->pc = 0x3DFEB4u;
label_3dfeb4:
    // 0x3dfeb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dfeb8:
    // 0x3dfeb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3dfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3dfebc:
    // 0x3dfebc: 0x40f809  jalr        $v0
label_3dfec0:
    if (ctx->pc == 0x3DFEC0u) {
        ctx->pc = 0x3DFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEBCu;
        // 0x3dfec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEC4u;
        goto label_3dfec4;
    }
    ctx->pc = 0x3DFEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DFEC4u);
        ctx->pc = 0x3DFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEBCu;
        // 0x3dfec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFEBCu, 0x3DFEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DFEC4u;
label_3dfec4:
    // 0x3dfec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dfec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfec8:
    // 0x3dfec8: 0x3e00008  jr          $ra
label_3dfecc:
    if (ctx->pc == 0x3DFECCu) {
        ctx->pc = 0x3DFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEC8u;
        // 0x3dfecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFED0u;
        goto label_fallthrough_0x3dfec8;
    }
    ctx->pc = 0x3DFEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEC8u;
        // 0x3dfecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dfec8:
    ctx->pc = 0x3DFED0u;
}
