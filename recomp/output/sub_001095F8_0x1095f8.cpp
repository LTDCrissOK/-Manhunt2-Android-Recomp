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

// Function: sub_001095F8
// Address: 0x1095f8 - 0x109640
void sub_001095F8_0x1095f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001095F8_0x1095f8");
#endif

    switch (ctx->pc) {
        case 0x10960cu: goto label_10960c;
        case 0x10962cu: goto label_10962c;
        default: break;
    }

    ctx->pc = 0x1095f8u;

    // 0x1095f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1095f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1095fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1095fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x109600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x109604: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109604u;
    SET_GPR_U32(ctx, 31, 0x10960Cu);
    ctx->pc = 0x109608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109604u;
    // 0x109608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109604u, 0x10960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10960Cu;
label_10960c:
    // 0x10960c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10960cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109610: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x109610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x109614: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109614u;
    {
        const bool branch_taken_0x109614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109614u;
        // 0x109618: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109614) {
            ctx->pc = 0x10962Cu;
            goto label_10962c;
        }
    }
    ctx->pc = 0x10961Cu;
    // 0x10961c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109620: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109624: 0xc04378a  jal         func_10DE28
    ctx->pc = 0x109624u;
    SET_GPR_U32(ctx, 31, 0x10962Cu);
    ctx->pc = 0x109628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109624u;
    // 0x109628: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE28u, 0x109624u, 0x10962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10962Cu;
label_10962c:
    // 0x10962c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10962cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x109630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109634: 0x3e00008  jr          $ra
    ctx->pc = 0x109634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109634u;
        // 0x109638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10963Cu;
    // 0x10963c: 0x0  nop
    ctx->pc = 0x10963cu;
    // NOP
    ctx->pc = 0x109640u;
}
