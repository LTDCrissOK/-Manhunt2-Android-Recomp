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

// Function: sub_00126020
// Address: 0x126020 - 0x1260a0
void sub_00126020_0x126020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126020_0x126020");
#endif

    switch (ctx->pc) {
        case 0x126044u: goto label_126044;
        default: break;
    }

    ctx->pc = 0x126020u;

    // 0x126020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12602c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12602cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126034: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x126034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126038: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x126038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12603c: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x12603Cu;
    SET_GPR_U32(ctx, 31, 0x126044u);
    ctx->pc = 0x126040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12603Cu;
    // 0x126040: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x12603Cu, 0x126044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126044u;
label_126044:
    // 0x126044: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126048: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12604c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12604Cu;
    {
        const bool branch_taken_0x12604c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x126050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12604Cu;
        // 0x126050: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12604c) {
            ctx->pc = 0x126080u;
            goto label_126080;
        }
    }
    ctx->pc = 0x126054u;
    // 0x126054: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x126058: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x126058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12605c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126060: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126060u;
    {
        const bool branch_taken_0x126060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126060u;
        // 0x126064: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126060) {
            ctx->pc = 0x126080u;
            goto label_126080;
        }
    }
    ctx->pc = 0x126068u;
    // 0x126068: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12606c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126070: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x126070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x126074: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x126074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x126078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126078u;
    {
        const bool branch_taken_0x126078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126078u;
        // 0x12607c: 0xaca00020  sw          $zero, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126078) {
            ctx->pc = 0x126084u;
            goto label_126084;
        }
    }
    ctx->pc = 0x126080u;
label_126080:
    // 0x126080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126084:
    // 0x126084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12608c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12608cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x126090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126094: 0x3e00008  jr          $ra
    ctx->pc = 0x126094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126094u;
        // 0x126098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12609Cu;
    // 0x12609c: 0x0  nop
    ctx->pc = 0x12609cu;
    // NOP
    ctx->pc = 0x1260a0u;
}
