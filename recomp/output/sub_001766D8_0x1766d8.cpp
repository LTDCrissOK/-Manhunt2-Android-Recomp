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

// Function: sub_001766D8
// Address: 0x1766d8 - 0x176720
void sub_001766D8_0x1766d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001766D8_0x1766d8");
#endif

    switch (ctx->pc) {
        case 0x1766f0u: goto label_1766f0;
        case 0x176710u: goto label_176710;
        default: break;
    }

    ctx->pc = 0x1766d8u;

    // 0x1766d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1766dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1766dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1766e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1766e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1766e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1766e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766e8: 0xc05a5fa  jal         func_1697E8
    ctx->pc = 0x1766E8u;
    SET_GPR_U32(ctx, 31, 0x1766F0u);
    ctx->pc = 0x1766ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766E8u;
    // 0x1766ec: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697E8u, 0x1766E8u, 0x1766F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766F0u;
label_1766f0:
    // 0x1766f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1766F0u;
    {
        const bool branch_taken_0x1766f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1766F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766F0u;
        // 0x1766f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766f0) {
            ctx->pc = 0x176710u;
            goto label_176710;
        }
    }
    ctx->pc = 0x1766F8u;
    // 0x1766f8: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1766f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1766fc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1766FCu;
    {
        const bool branch_taken_0x1766fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1766fc) {
            ctx->pc = 0x176700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1766FCu;
            // 0x176700: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176714u;
            goto label_176714;
        }
    }
    ctx->pc = 0x176704u;
    // 0x176704: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x176708: 0xc05e530  jal         func_1794C0
    ctx->pc = 0x176708u;
    SET_GPR_U32(ctx, 31, 0x176710u);
    ctx->pc = 0x17670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176708u;
    // 0x17670c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1794C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1794C0u, 0x176708u, 0x176710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176710u;
label_176710:
    // 0x176710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176714:
    // 0x176714: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x176714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176718: 0x3e00008  jr          $ra
    ctx->pc = 0x176718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176718u;
        // 0x17671c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176720u;
}
