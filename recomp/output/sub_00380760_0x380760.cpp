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

// Function: sub_00380760
// Address: 0x380760 - 0x3807b8
void sub_00380760_0x380760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380760_0x380760");
#endif

    switch (ctx->pc) {
        case 0x380788u: goto label_380788;
        case 0x38079cu: goto label_38079c;
        case 0x3807b4u: goto label_3807b4;
        default: break;
    }

    ctx->pc = 0x380760u;

    // 0x380760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380768: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x380768u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x38076c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380770: 0x8e226070  lw          $v0, 0x6070($s1)
    ctx->pc = 0x380770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x656070u));
    // 0x380774: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x380774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x380778: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x380778u;
    {
        const bool branch_taken_0x380778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380778u;
        // 0x38077c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380778) {
            ctx->pc = 0x38079Cu;
            goto label_38079c;
        }
    }
    ctx->pc = 0x380780u;
    // 0x380780: 0xc0e00aa  jal         func_3802A8
    ctx->pc = 0x380780u;
    SET_GPR_U32(ctx, 31, 0x380788u);
    ctx->pc = 0x380784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380780u;
    // 0x380784: 0x26046040  addiu       $a0, $s0, 0x6040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3802A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3802A8u, 0x380780u, 0x380788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380788u;
label_380788:
    // 0x380788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38078c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x38078cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x380790: 0xae226070  sw          $v0, 0x6070($s1)
    ctx->pc = 0x380790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24688), GPR_U32(ctx, 2));
    // 0x380794: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x380794u;
    SET_GPR_U32(ctx, 31, 0x38079Cu);
    ctx->pc = 0x380798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380794u;
    // 0x380798: 0x24840738  addiu       $a0, $a0, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x380794u, 0x38079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38079Cu;
label_38079c:
    // 0x38079c: 0x26026040  addiu       $v0, $s0, 0x6040
    ctx->pc = 0x38079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24640));
    // 0x3807a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3807a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3807a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3807a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3807a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3807a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3807ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3807ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3807B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807ACu;
        // 0x3807b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807B4u;
label_3807b4:
    // 0x3807b4: 0x0  nop
    ctx->pc = 0x3807b4u;
    // NOP
    ctx->pc = 0x3807b8u;
}
