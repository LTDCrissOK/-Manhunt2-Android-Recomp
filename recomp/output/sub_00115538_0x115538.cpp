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

// Function: sub_00115538
// Address: 0x115538 - 0x115590
void sub_00115538_0x115538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115538_0x115538");
#endif

    switch (ctx->pc) {
        case 0x11555cu: goto label_11555c;
        default: break;
    }

    ctx->pc = 0x115538u;

    // 0x115538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11553c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11554c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11554Cu;
    {
        const bool branch_taken_0x11554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11554c) {
            ctx->pc = 0x115550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11554Cu;
            // 0x115550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115580u;
            goto label_115580;
        }
    }
    ctx->pc = 0x115554u;
    // 0x115554: 0xc042236  jal         func_1088D8
    ctx->pc = 0x115554u;
    SET_GPR_U32(ctx, 31, 0x11555Cu);
    ctx->pc = 0x1088D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D8u, 0x115554u, 0x11555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11555Cu;
label_11555c:
    // 0x11555c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115560: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x115560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x115564: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x115564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115568: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x115568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x11556c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x11556cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x115570: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x115570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x115574: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x115574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x115578: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x115578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x11557c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11557cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115580:
    // 0x115580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115584: 0x3e00008  jr          $ra
    ctx->pc = 0x115584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115584u;
        // 0x115588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11558Cu;
    // 0x11558c: 0x0  nop
    ctx->pc = 0x11558cu;
    // NOP
    ctx->pc = 0x115590u;
}
