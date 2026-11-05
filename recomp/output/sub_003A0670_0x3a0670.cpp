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

// Function: sub_003A0670
// Address: 0x3a0670 - 0x3a06f0
void sub_003A0670_0x3a0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0670_0x3a0670");
#endif

    switch (ctx->pc) {
        case 0x3a06a8u: goto label_3a06a8;
        case 0x3a06b8u: goto label_3a06b8;
        default: break;
    }

    ctx->pc = 0x3a0670u;

    // 0x3a0670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a067c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a0680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0684: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a0688: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a0688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a068c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0694: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a0694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0698: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A0698u;
    {
        const bool branch_taken_0x3a0698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0698u;
        // 0x3a069c: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0698) {
            ctx->pc = 0x3A06D4u;
            goto label_3a06d4;
        }
    }
    ctx->pc = 0x3A06A0u;
    // 0x3a06a0: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3a06a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3a06a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a06a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a06a8:
    // 0x3a06a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A06A8u;
    {
        const bool branch_taken_0x3a06a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06A8u;
        // 0x3a06ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06a8) {
            ctx->pc = 0x3A06BCu;
            goto label_3a06bc;
        }
    }
    ctx->pc = 0x3A06B0u;
    // 0x3a06b0: 0xc0e71c6  jal         func_39C718
    ctx->pc = 0x3A06B0u;
    SET_GPR_U32(ctx, 31, 0x3A06B8u);
    ctx->pc = 0x3A06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06B0u;
    // 0x3a06b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C718u, 0x3A06B0u, 0x3A06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06B8u;
label_3a06b8:
    // 0x3a06b8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x3a06b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3a06bc:
    // 0x3a06bc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a06c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a06c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a06c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a06c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a06c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a06c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a06cc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A06CCu;
    {
        const bool branch_taken_0x3a06cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a06cc) {
            ctx->pc = 0x3A06D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A06CCu;
            // 0x3a06d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A06A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a06a8;
        }
    }
    ctx->pc = 0x3A06D4u;
label_3a06d4:
    // 0x3a06d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a06d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a06d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a06d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a06dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a06dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a06e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a06e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a06e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a06e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a06e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A06E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06E8u;
        // 0x3a06ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A06E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A06F0u;
}
