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

// Function: sub_00165D18
// Address: 0x165d18 - 0x165db0
void sub_00165D18_0x165d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165D18_0x165d18");
#endif

    switch (ctx->pc) {
        case 0x165d48u: goto label_165d48;
        case 0x165d6cu: goto label_165d6c;
        case 0x165d78u: goto label_165d78;
        default: break;
    }

    ctx->pc = 0x165d18u;

    // 0x165d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165d1c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x165d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165d2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165d38: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165d3c: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x165d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165d40: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165d44: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165d48:
    // 0x165d48: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x165d4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165d50: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x165D50u;
    {
        const bool branch_taken_0x165d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D50u;
        // 0x165d54: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d50) {
            ctx->pc = 0x165D80u;
            goto label_165d80;
        }
    }
    ctx->pc = 0x165D58u;
    // 0x165d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165d5c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x165D5Cu;
    {
        const bool branch_taken_0x165d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x165D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D5Cu;
        // 0x165d60: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d5c) {
            ctx->pc = 0x165D84u;
            goto label_165d84;
        }
    }
    ctx->pc = 0x165D64u;
    // 0x165d64: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165D64u;
    SET_GPR_U32(ctx, 31, 0x165D6Cu);
    ctx->pc = 0x165D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D64u;
    // 0x165d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165D64u, 0x165D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D6Cu;
label_165d6c:
    // 0x165d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d70: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165D70u;
    SET_GPR_U32(ctx, 31, 0x165D78u);
    ctx->pc = 0x165D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D70u;
    // 0x165d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165D70u, 0x165D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D78u;
label_165d78:
    // 0x165d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165D78u;
    {
        const bool branch_taken_0x165d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D78u;
        // 0x165d7c: 0xae120304  sw          $s2, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d78) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165D80u;
label_165d80:
    // 0x165d80: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165d84:
    // 0x165d84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165d84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165d88: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165d8c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x165D8Cu;
    {
        const bool branch_taken_0x165d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D8Cu;
        // 0x165d90: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d8c) {
            ctx->pc = 0x165D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d48;
        }
    }
    ctx->pc = 0x165D94u;
label_165d94:
    // 0x165d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165da0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165da4: 0x3e00008  jr          $ra
    ctx->pc = 0x165DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165DACu;
    // 0x165dac: 0x0  nop
    ctx->pc = 0x165dacu;
    // NOP
    ctx->pc = 0x165db0u;
}
