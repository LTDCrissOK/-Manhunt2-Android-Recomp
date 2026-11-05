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

// Function: sub_00133EE8
// Address: 0x133ee8 - 0x133f30
void sub_00133EE8_0x133ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133EE8_0x133ee8");
#endif

    switch (ctx->pc) {
        case 0x133f0cu: goto label_133f0c;
        case 0x133f1cu: goto label_133f1c;
        default: break;
    }

    ctx->pc = 0x133ee8u;

    // 0x133ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ef8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x133efc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x133EFCu;
    {
        const bool branch_taken_0x133efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133efc) {
            ctx->pc = 0x133F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133EFCu;
            // 0x133f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133F24u;
            goto label_133f24;
        }
    }
    ctx->pc = 0x133F04u;
    // 0x133f04: 0xc04bb2a  jal         func_12ECA8
    ctx->pc = 0x133F04u;
    SET_GPR_U32(ctx, 31, 0x133F0Cu);
    ctx->pc = 0x12ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECA8u, 0x133F04u, 0x133F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F0Cu;
label_133f0c:
    // 0x133f0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x133f10: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x133f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x133f14: 0xc041ee8  jal         func_107BA0
    ctx->pc = 0x133F14u;
    SET_GPR_U32(ctx, 31, 0x133F1Cu);
    ctx->pc = 0x133F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F14u;
    // 0x133f18: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107BA0u, 0x133F14u, 0x133F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F1Cu;
label_133f1c:
    // 0x133f1c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x133f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x133f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133f24:
    // 0x133f24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133f28: 0x3e00008  jr          $ra
    ctx->pc = 0x133F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F28u;
        // 0x133f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133F30u;
}
