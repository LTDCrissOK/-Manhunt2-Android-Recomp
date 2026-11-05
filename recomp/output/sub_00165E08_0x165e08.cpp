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

// Function: sub_00165E08
// Address: 0x165e08 - 0x165ea0
void sub_00165E08_0x165e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165E08_0x165e08");
#endif

    switch (ctx->pc) {
        case 0x165e38u: goto label_165e38;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e68u: goto label_165e68;
        default: break;
    }

    ctx->pc = 0x165e08u;

    // 0x165e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165e0c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x165e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x165e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165e28: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165e2c: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x165e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165e30: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165e34: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165e38:
    // 0x165e38: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x165e3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165e40: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x165E40u;
    {
        const bool branch_taken_0x165e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E40u;
        // 0x165e44: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e40) {
            ctx->pc = 0x165E70u;
            goto label_165e70;
        }
    }
    ctx->pc = 0x165E48u;
    // 0x165e48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165e4c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x165E4Cu;
    {
        const bool branch_taken_0x165e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x165E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E4Cu;
        // 0x165e50: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e4c) {
            ctx->pc = 0x165E74u;
            goto label_165e74;
        }
    }
    ctx->pc = 0x165E54u;
    // 0x165e54: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165E54u;
    SET_GPR_U32(ctx, 31, 0x165E5Cu);
    ctx->pc = 0x165E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E54u;
    // 0x165e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165E54u, 0x165E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E5Cu;
label_165e5c:
    // 0x165e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e60: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165E60u;
    SET_GPR_U32(ctx, 31, 0x165E68u);
    ctx->pc = 0x165E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E60u;
    // 0x165e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165E60u, 0x165E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E68u;
label_165e68:
    // 0x165e68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165E68u;
    {
        const bool branch_taken_0x165e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E68u;
        // 0x165e6c: 0xae120304  sw          $s2, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e68) {
            ctx->pc = 0x165E84u;
            goto label_165e84;
        }
    }
    ctx->pc = 0x165E70u;
label_165e70:
    // 0x165e70: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165e74:
    // 0x165e74: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165e74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165e78: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165e7c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x165E7Cu;
    {
        const bool branch_taken_0x165e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E7Cu;
        // 0x165e80: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e7c) {
            ctx->pc = 0x165E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165e38;
        }
    }
    ctx->pc = 0x165E84u;
label_165e84:
    // 0x165e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165e8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165e94: 0x3e00008  jr          $ra
    ctx->pc = 0x165E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E94u;
        // 0x165e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E9Cu;
    // 0x165e9c: 0x0  nop
    ctx->pc = 0x165e9cu;
    // NOP
    ctx->pc = 0x165ea0u;
}
