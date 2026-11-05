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

// Function: sub_00173DF8
// Address: 0x173df8 - 0x173e50
void sub_00173DF8_0x173df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173DF8_0x173df8");
#endif

    switch (ctx->pc) {
        case 0x173e38u: goto label_173e38;
        case 0x173e40u: goto label_173e40;
        default: break;
    }

    ctx->pc = 0x173df8u;

    // 0x173df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173dfc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x173dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x173e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e04: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x173e08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e10: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x173e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x173e14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173e18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173e24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x173e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173e2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e30: 0xc04422c  jal         func_1108B0
    ctx->pc = 0x173E30u;
    SET_GPR_U32(ctx, 31, 0x173E38u);
    ctx->pc = 0x173E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E30u;
    // 0x173e34: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108B0u, 0x173E30u, 0x173E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E38u;
label_173e38:
    // 0x173e38: 0xc05d3a0  jal         func_174E80
    ctx->pc = 0x173E38u;
    SET_GPR_U32(ctx, 31, 0x173E40u);
    ctx->pc = 0x173E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E38u;
    // 0x173e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E80u, 0x173E38u, 0x173E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E40u;
label_173e40:
    // 0x173e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e48: 0x3e00008  jr          $ra
    ctx->pc = 0x173E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E48u;
        // 0x173e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173E50u;
}
