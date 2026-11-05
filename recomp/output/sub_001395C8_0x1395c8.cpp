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

// Function: sub_001395C8
// Address: 0x1395c8 - 0x139618
void sub_001395C8_0x1395c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001395C8_0x1395c8");
#endif

    switch (ctx->pc) {
        case 0x1395ecu: goto label_1395ec;
        default: break;
    }

    ctx->pc = 0x1395c8u;

    // 0x1395c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1395c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1395cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1395ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1395d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1395d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1395d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1395d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395d8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1395dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1395DCu;
    {
        const bool branch_taken_0x1395dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1395dc) {
            ctx->pc = 0x1395E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1395DCu;
            // 0x1395e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139608u;
            goto label_139608;
        }
    }
    ctx->pc = 0x1395E4u;
    // 0x1395e4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x1395E4u;
    SET_GPR_U32(ctx, 31, 0x1395ECu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x1395E4u, 0x1395ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395ECu;
label_1395ec:
    // 0x1395ec: 0xae000ac4  sw          $zero, 0xAC4($s0)
    ctx->pc = 0x1395ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2756), GPR_U32(ctx, 0));
    // 0x1395f0: 0xae000ab0  sw          $zero, 0xAB0($s0)
    ctx->pc = 0x1395f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2736), GPR_U32(ctx, 0));
    // 0x1395f4: 0xae000ab4  sw          $zero, 0xAB4($s0)
    ctx->pc = 0x1395f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2740), GPR_U32(ctx, 0));
    // 0x1395f8: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x1395f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x1395fc: 0xae000abc  sw          $zero, 0xABC($s0)
    ctx->pc = 0x1395fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2748), GPR_U32(ctx, 0));
    // 0x139600: 0xae000ac0  sw          $zero, 0xAC0($s0)
    ctx->pc = 0x139600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 0));
    // 0x139604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139608:
    // 0x139608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x139608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13960c: 0x3e00008  jr          $ra
    ctx->pc = 0x13960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13960Cu;
        // 0x139610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13960Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139614u;
    // 0x139614: 0x0  nop
    ctx->pc = 0x139614u;
    // NOP
    ctx->pc = 0x139618u;
}
