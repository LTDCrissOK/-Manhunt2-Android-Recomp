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

// Function: sub_00162C10
// Address: 0x162c10 - 0x162cb0
void sub_00162C10_0x162c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162C10_0x162c10");
#endif

    switch (ctx->pc) {
        case 0x162c48u: goto label_162c48;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c78u: goto label_162c78;
        default: break;
    }

    ctx->pc = 0x162c10u;

    // 0x162c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162c14: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x162c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x162c30: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x162c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x162c34: 0xae000344  sw          $zero, 0x344($s0)
    ctx->pc = 0x162c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
    // 0x162c38: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x162c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x162c3c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x162c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162c40: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x162c44: 0x0  nop
    ctx->pc = 0x162c44u;
    // NOP
label_162c48:
    // 0x162c48: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x162c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x162c4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162c50: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x162C50u;
    {
        const bool branch_taken_0x162c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C50u;
        // 0x162c54: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c50) {
            ctx->pc = 0x162C80u;
            goto label_162c80;
        }
    }
    ctx->pc = 0x162C58u;
    // 0x162c58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162c5c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x162C5Cu;
    {
        const bool branch_taken_0x162c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x162C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C5Cu;
        // 0x162c60: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c5c) {
            ctx->pc = 0x162C84u;
            goto label_162c84;
        }
    }
    ctx->pc = 0x162C64u;
    // 0x162c64: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x162C64u;
    SET_GPR_U32(ctx, 31, 0x162C6Cu);
    ctx->pc = 0x162C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C64u;
    // 0x162c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x162C64u, 0x162C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C6Cu;
label_162c6c:
    // 0x162c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c70: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x162C70u;
    SET_GPR_U32(ctx, 31, 0x162C78u);
    ctx->pc = 0x162C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C70u;
    // 0x162c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x162C70u, 0x162C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C78u;
label_162c78:
    // 0x162c78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162C78u;
    {
        const bool branch_taken_0x162c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C78u;
        // 0x162c7c: 0xae120354  sw          $s2, 0x354($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c78) {
            ctx->pc = 0x162C94u;
            goto label_162c94;
        }
    }
    ctx->pc = 0x162C80u;
label_162c80:
    // 0x162c80: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x162c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162c84:
    // 0x162c84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x162c84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162c88: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x162c88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x162c8c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x162C8Cu;
    {
        const bool branch_taken_0x162c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C8Cu;
        // 0x162c90: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c8c) {
            ctx->pc = 0x162C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162c48;
        }
    }
    ctx->pc = 0x162C94u;
label_162c94:
    // 0x162c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162c9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ca0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x162CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CA4u;
        // 0x162ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162CACu;
    // 0x162cac: 0x0  nop
    ctx->pc = 0x162cacu;
    // NOP
    ctx->pc = 0x162cb0u;
}
