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

// Function: sub_0029D608
// Address: 0x29d608 - 0x29d668
void sub_0029D608_0x29d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D608_0x29d608");
#endif

    switch (ctx->pc) {
        case 0x29d630u: goto label_29d630;
        case 0x29d644u: goto label_29d644;
        case 0x29d658u: goto label_29d658;
        default: break;
    }

    ctx->pc = 0x29d608u;

    // 0x29d608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d60c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29d610: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D610u;
    {
        const bool branch_taken_0x29d610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d610) {
            ctx->pc = 0x29D658u;
            goto label_29d658;
        }
    }
    ctx->pc = 0x29D618u;
    // 0x29d618: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x29D618u;
    {
        const bool branch_taken_0x29d618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D618u;
        // 0x29d61c: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d618) {
            ctx->pc = 0x29D658u;
            goto label_29d658;
        }
    }
    ctx->pc = 0x29D620u;
    // 0x29d620: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d624: 0x24841838  addiu       $a0, $a0, 0x1838
    ctx->pc = 0x29d624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6200));
    // 0x29d628: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29D628u;
    SET_GPR_U32(ctx, 31, 0x29D630u);
    ctx->pc = 0x29D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D628u;
    // 0x29d62c: 0x24a5c220  addiu       $a1, $a1, -0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29D628u, 0x29D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D630u;
label_29d630:
    // 0x29d630: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x29d634: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d638: 0x24841840  addiu       $a0, $a0, 0x1840
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6208));
    // 0x29d63c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29D63Cu;
    SET_GPR_U32(ctx, 31, 0x29D644u);
    ctx->pc = 0x29D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D63Cu;
    // 0x29d640: 0x24a5c378  addiu       $a1, $a1, -0x3C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29D63Cu, 0x29D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D644u;
label_29d644:
    // 0x29d644: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29d644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x29d648: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d64c: 0x24841848  addiu       $a0, $a0, 0x1848
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6216));
    // 0x29d650: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29D650u;
    SET_GPR_U32(ctx, 31, 0x29D658u);
    ctx->pc = 0x29D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D650u;
    // 0x29d654: 0x24a5bfd8  addiu       $a1, $a1, -0x4028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29D650u, 0x29D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D658u;
label_29d658:
    // 0x29d658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D65Cu;
        // 0x29d660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D664u;
    // 0x29d664: 0x0  nop
    ctx->pc = 0x29d664u;
    // NOP
    ctx->pc = 0x29d668u;
}
