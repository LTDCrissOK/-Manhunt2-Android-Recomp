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

// Function: sub_003D8D20
// Address: 0x3d8d20 - 0x3d8d60
void sub_003D8D20_0x3d8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8D20_0x3d8d20");
#endif

    switch (ctx->pc) {
        case 0x3d8d44u: goto label_3d8d44;
        case 0x3d8d4cu: goto label_3d8d4c;
        default: break;
    }

    ctx->pc = 0x3d8d20u;

    // 0x3d8d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d8d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8d30: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3d8d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d8d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8D34u;
    {
        const bool branch_taken_0x3d8d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D34u;
        // 0x3d8d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d34) {
            ctx->pc = 0x3D8D50u;
            goto label_3d8d50;
        }
    }
    ctx->pc = 0x3D8D3Cu;
    // 0x3d8d3c: 0xc0f62f2  jal         func_3D8BC8
    ctx->pc = 0x3D8D3Cu;
    SET_GPR_U32(ctx, 31, 0x3D8D44u);
    ctx->pc = 0x3D8BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8BC8u, 0x3D8D3Cu, 0x3D8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D44u;
label_3d8d44:
    // 0x3d8d44: 0xc0f632a  jal         func_3D8CA8
    ctx->pc = 0x3D8D44u;
    SET_GPR_U32(ctx, 31, 0x3D8D4Cu);
    ctx->pc = 0x3D8D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D44u;
    // 0x3d8d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8CA8u, 0x3D8D44u, 0x3D8D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D4Cu;
label_3d8d4c:
    // 0x3d8d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8d50:
    // 0x3d8d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8d54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d8d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8d58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D58u;
        // 0x3d8d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8D60u;
}
