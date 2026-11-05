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

// Function: sub_0033CEB0
// Address: 0x33ceb0 - 0x33cf50
void sub_0033CEB0_0x33ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CEB0_0x33ceb0");
#endif

    switch (ctx->pc) {
        case 0x33cec8u: goto label_33cec8;
        case 0x33cee0u: goto label_33cee0;
        case 0x33cf18u: goto label_33cf18;
        case 0x33cf28u: goto label_33cf28;
        default: break;
    }

    ctx->pc = 0x33ceb0u;

    // 0x33ceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ceb4: 0x24041450  addiu       $a0, $zero, 0x1450
    ctx->pc = 0x33ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5200));
    // 0x33ceb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33cebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33cec0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x33CEC0u;
    SET_GPR_U32(ctx, 31, 0x33CEC8u);
    ctx->pc = 0x33CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEC0u;
    // 0x33cec4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x33CEC0u, 0x33CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEC8u;
label_33cec8:
    // 0x33cec8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33cecc: 0xae02c34c  sw          $v0, -0x3CB4($s0)
    ctx->pc = 0x33ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951756), GPR_U32(ctx, 2));
    // 0x33ced0: 0xac602b98  sw          $zero, 0x2B98($v1)
    ctx->pc = 0x33ced0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B98u, _value); } while (0);
    // 0x33ced4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ced4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ced8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cedc: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x33cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_33cee0:
    // 0x33cee0: 0x8cc2c34c  lw          $v0, -0x3CB4($a2)
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951756)));
    // 0x33cee4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x33cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33cee8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33ceec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x33cef0: 0x8cc3c34c  lw          $v1, -0x3CB4($a2)
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951756)));
    // 0x33cef4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33cef8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x33cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x33cefc: 0x8cc2c34c  lw          $v0, -0x3CB4($a2)
    ctx->pc = 0x33cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951756)));
    // 0x33cf00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33cf04: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x33cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x33cf08: 0x4a1fff5  bgez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33CF08u;
    {
        const bool branch_taken_0x33cf08 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x33CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF08u;
        // 0x33cf0c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf08) {
            ctx->pc = 0x33CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cee0;
        }
    }
    ctx->pc = 0x33CF10u;
    // 0x33cf10: 0xc0cfab6  jal         func_33EAD8
    ctx->pc = 0x33CF10u;
    SET_GPR_U32(ctx, 31, 0x33CF18u);
    ctx->pc = 0x33EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EAD8u, 0x33CF10u, 0x33CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF18u;
label_33cf18:
    // 0x33cf18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x33cf1c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x33cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x33cf20: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x33cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x33cf24: 0x244202ec  addiu       $v0, $v0, 0x2EC
    ctx->pc = 0x33cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 748));
label_33cf28:
    // 0x33cf28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33cf2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33cf30: 0x0  nop
    ctx->pc = 0x33cf30u;
    // NOP
    // 0x33cf34: 0x0  nop
    ctx->pc = 0x33cf34u;
    // NOP
    // 0x33cf38: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33CF38u;
    {
        const bool branch_taken_0x33cf38 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x33CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF38u;
        // 0x33cf3c: 0x2442ffe4  addiu       $v0, $v0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf38) {
            ctx->pc = 0x33CF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cf28;
        }
    }
    ctx->pc = 0x33CF40u;
    // 0x33cf40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cf44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33cf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cf48: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF48u;
        // 0x33cf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF50u;
}
