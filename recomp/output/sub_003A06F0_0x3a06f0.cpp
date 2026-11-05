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

// Function: sub_003A06F0
// Address: 0x3a06f0 - 0x3a0770
void sub_003A06F0_0x3a06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A06F0_0x3a06f0");
#endif

    switch (ctx->pc) {
        case 0x3a0718u: goto label_3a0718;
        case 0x3a0730u: goto label_3a0730;
        case 0x3a0744u: goto label_3a0744;
        default: break;
    }

    ctx->pc = 0x3a06f0u;

    // 0x3a06f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a06f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a06f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a06f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a06f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a06fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a06fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a0704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a0704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a070c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0710: 0xc0e82f8  jal         func_3A0BE0
    ctx->pc = 0x3A0710u;
    SET_GPR_U32(ctx, 31, 0x3A0718u);
    ctx->pc = 0x3A0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0710u;
    // 0x3a0714: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE0u, 0x3A0710u, 0x3A0718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0718u;
label_3a0718:
    // 0x3a0718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a0718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a071c: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A071Cu;
    {
        const bool branch_taken_0x3a071c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3a071c) {
            ctx->pc = 0x3A0720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A071Cu;
            // 0x3a0720: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0754u;
            goto label_3a0754;
        }
    }
    ctx->pc = 0x3A0724u;
    // 0x3a0724: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x3a0724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3a0728: 0x26100094  addiu       $s0, $s0, 0x94
    ctx->pc = 0x3a0728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x3a072c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a0730:
    // 0x3a0730: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0734: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3a0734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a0738: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a0738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3a073c: 0xc0e6d9e  jal         func_39B678
    ctx->pc = 0x3A073Cu;
    SET_GPR_U32(ctx, 31, 0x3A0744u);
    ctx->pc = 0x3A0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A073Cu;
    // 0x3a0740: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B678u, 0x3A073Cu, 0x3A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0744u;
label_3a0744:
    // 0x3a0744: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3a0744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3a0748: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A0748u;
    {
        const bool branch_taken_0x3a0748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0748) {
            ctx->pc = 0x3A074Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0748u;
            // 0x3a074c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0730;
        }
    }
    ctx->pc = 0x3A0750u;
    // 0x3a0750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0754:
    // 0x3a0754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a075c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a075cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0764: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0764u;
        // 0x3a0768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A076Cu;
    // 0x3a076c: 0x0  nop
    ctx->pc = 0x3a076cu;
    // NOP
    ctx->pc = 0x3a0770u;
}
