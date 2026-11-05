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

// Function: sub_0033CDF8
// Address: 0x33cdf8 - 0x33ce88
void sub_0033CDF8_0x33cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CDF8_0x33cdf8");
#endif

    switch (ctx->pc) {
        case 0x33ce28u: goto label_33ce28;
        case 0x33ce44u: goto label_33ce44;
        case 0x33ce6cu: goto label_33ce6c;
        default: break;
    }

    ctx->pc = 0x33cdf8u;

    // 0x33cdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33cdfc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33ce00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ce04: 0x8c62c34c  lw          $v0, -0x3CB4($v1)
    ctx->pc = 0x33ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC34Cu));
    // 0x33ce08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x33ce08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ce10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ce14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33CE14u;
    {
        const bool branch_taken_0x33ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE14u;
        // 0x33ce18: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce14) {
            ctx->pc = 0x33CE70u;
            goto label_33ce70;
        }
    }
    ctx->pc = 0x33CE1Cu;
    // 0x33ce1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce20: 0x24110081  addiu       $s1, $zero, 0x81
    ctx->pc = 0x33ce20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x33ce24: 0x0  nop
    ctx->pc = 0x33ce24u;
    // NOP
label_33ce28:
    // 0x33ce28: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33ce2c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33ce30: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x33ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33ce34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33CE34u;
    {
        const bool branch_taken_0x33ce34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE34u;
        // 0x33ce38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce34) {
            ctx->pc = 0x33CE50u;
            goto label_33ce50;
        }
    }
    ctx->pc = 0x33CE3Cu;
    // 0x33ce3c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33CE3Cu;
    SET_GPR_U32(ctx, 31, 0x33CE44u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33CE3Cu, 0x33CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE44u;
label_33ce44:
    // 0x33ce44: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33ce48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33ce4c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x33ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_33ce50:
    // 0x33ce50: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33CE50u;
    {
        const bool branch_taken_0x33ce50 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x33CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE50u;
        // 0x33ce54: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce50) {
            ctx->pc = 0x33CE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ce28;
        }
    }
    ctx->pc = 0x33CE58u;
    // 0x33ce58: 0x8e44c34c  lw          $a0, -0x3CB4($s2)
    ctx->pc = 0x33ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33ce5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CE5Cu;
    {
        const bool branch_taken_0x33ce5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ce5c) {
            ctx->pc = 0x33CE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CE5Cu;
            // 0x33ce60: 0xae40c34c  sw          $zero, -0x3CB4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294951756), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CE70u;
            goto label_33ce70;
        }
    }
    ctx->pc = 0x33CE64u;
    // 0x33ce64: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33CE64u;
    SET_GPR_U32(ctx, 31, 0x33CE6Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33CE64u, 0x33CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE6Cu;
label_33ce6c:
    // 0x33ce6c: 0xae40c34c  sw          $zero, -0x3CB4($s2)
    ctx->pc = 0x33ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951756), GPR_U32(ctx, 0));
label_33ce70:
    // 0x33ce70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ce70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ce74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ce74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ce78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ce78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ce7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ce7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ce80: 0x3e00008  jr          $ra
    ctx->pc = 0x33CE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE80u;
        // 0x33ce84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE88u;
}
