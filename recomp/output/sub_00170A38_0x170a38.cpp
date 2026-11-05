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

// Function: sub_00170A38
// Address: 0x170a38 - 0x170a70
void sub_00170A38_0x170a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A38_0x170a38");
#endif

    switch (ctx->pc) {
        case 0x170a38u: goto label_170a38;
        case 0x170a3cu: goto label_170a3c;
        case 0x170a40u: goto label_170a40;
        case 0x170a44u: goto label_170a44;
        case 0x170a48u: goto label_170a48;
        case 0x170a4cu: goto label_170a4c;
        case 0x170a50u: goto label_170a50;
        case 0x170a54u: goto label_170a54;
        case 0x170a58u: goto label_170a58;
        case 0x170a5cu: goto label_170a5c;
        case 0x170a60u: goto label_170a60;
        case 0x170a64u: goto label_170a64;
        case 0x170a68u: goto label_170a68;
        case 0x170a6cu: goto label_170a6c;
        default: break;
    }

    ctx->pc = 0x170a38u;

label_170a38:
    // 0x170a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_170a3c:
    // 0x170a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170a40:
    // 0x170a40: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x170a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_170a44:
    // 0x170a44: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x170a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_170a48:
    // 0x170a48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_170a4c:
    if (ctx->pc == 0x170A4Cu) {
        ctx->pc = 0x170A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A48u;
        // 0x170a4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A50u;
        goto label_170a50;
    }
    ctx->pc = 0x170A48u;
    {
        const bool branch_taken_0x170a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A48u;
        // 0x170a4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a48) {
            ctx->pc = 0x170A68u;
            goto label_170a68;
        }
    }
    ctx->pc = 0x170A50u;
label_170a50:
    // 0x170a50: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_170a54:
    // 0x170a54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x170a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_170a58:
    // 0x170a58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_170a5c:
    // 0x170a5c: 0x40f809  jalr        $v0
label_170a60:
    if (ctx->pc == 0x170A60u) {
        ctx->pc = 0x170A64u;
        goto label_170a64;
    }
    ctx->pc = 0x170A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170A64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A5Cu, 0x170A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170A64u;
label_170a64:
    // 0x170a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170a68:
    // 0x170a68: 0x3e00008  jr          $ra
label_170a6c:
    if (ctx->pc == 0x170A6Cu) {
        ctx->pc = 0x170A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A68u;
        // 0x170a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A70u;
        goto label_fallthrough_0x170a68;
    }
    ctx->pc = 0x170A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A68u;
        // 0x170a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170a68:
    ctx->pc = 0x170A70u;
}
