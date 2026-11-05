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

// Function: sub_003A0590
// Address: 0x3a0590 - 0x3a0608
void sub_003A0590_0x3a0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0590_0x3a0590");
#endif

    switch (ctx->pc) {
        case 0x3a05c0u: goto label_3a05c0;
        case 0x3a05d4u: goto label_3a05d4;
        default: break;
    }

    ctx->pc = 0x3a0590u;

    // 0x3a0590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a059c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a05a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a05a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a05a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a05a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a05a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a05a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a05ac: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a05acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a05b0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A05B0u;
    {
        const bool branch_taken_0x3a05b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05B0u;
        // 0x3a05b4: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05b0) {
            ctx->pc = 0x3A05F0u;
            goto label_3a05f0;
        }
    }
    ctx->pc = 0x3A05B8u;
    // 0x3a05b8: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3a05b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3a05bc: 0x0  nop
    ctx->pc = 0x3a05bcu;
    // NOP
label_3a05c0:
    // 0x3a05c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a05c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A05C4u;
    {
        const bool branch_taken_0x3a05c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05C4u;
        // 0x3a05c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05c4) {
            ctx->pc = 0x3A05D8u;
            goto label_3a05d8;
        }
    }
    ctx->pc = 0x3A05CCu;
    // 0x3a05cc: 0xc0e6c80  jal         func_39B200
    ctx->pc = 0x3A05CCu;
    SET_GPR_U32(ctx, 31, 0x3A05D4u);
    ctx->pc = 0x3A05D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A05CCu;
    // 0x3a05d0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B200u, 0x3A05CCu, 0x3A05D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05D4u;
label_3a05d4:
    // 0x3a05d4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x3a05d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3a05d8:
    // 0x3a05d8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a05dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a05dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a05e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a05e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a05e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a05e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a05e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A05E8u;
    {
        const bool branch_taken_0x3a05e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05E8u;
        // 0x3a05ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05e8) {
            ctx->pc = 0x3A05C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a05c0;
        }
    }
    ctx->pc = 0x3A05F0u;
label_3a05f0:
    // 0x3a05f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a05f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a05f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a05f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a05f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a05f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a05fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a05fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0600: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0600u;
        // 0x3a0604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0608u;
}
