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

// Function: sub_00152CF8
// Address: 0x152cf8 - 0x152d40
void sub_00152CF8_0x152cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152CF8_0x152cf8");
#endif

    switch (ctx->pc) {
        case 0x152d30u: goto label_152d30;
        default: break;
    }

    ctx->pc = 0x152cf8u;

    // 0x152cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152cfc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x152cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152d04: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152d08: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x152d0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152d10: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x152d14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x152d18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152d1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x152d24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152d28: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x152D28u;
    SET_GPR_U32(ctx, 31, 0x152D30u);
    ctx->pc = 0x152D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D28u;
    // 0x152d2c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x152D28u, 0x152D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D30u;
label_152d30:
    // 0x152d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152d34: 0x3e00008  jr          $ra
    ctx->pc = 0x152D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D34u;
        // 0x152d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D3Cu;
    // 0x152d3c: 0x0  nop
    ctx->pc = 0x152d3cu;
    // NOP
    ctx->pc = 0x152d40u;
}
