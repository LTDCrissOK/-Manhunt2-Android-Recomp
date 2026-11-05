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

// Function: sub_003A0880
// Address: 0x3a0880 - 0x3a0948
void sub_003A0880_0x3a0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0880_0x3a0880");
#endif

    switch (ctx->pc) {
        case 0x3a08a4u: goto label_3a08a4;
        case 0x3a08c0u: goto label_3a08c0;
        case 0x3a08dcu: goto label_3a08dc;
        default: break;
    }

    ctx->pc = 0x3a0880u;

    // 0x3a0880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a088c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0890: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0894: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a0898: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a089c: 0xc0e82e0  jal         func_3A0B80
    ctx->pc = 0x3A089Cu;
    SET_GPR_U32(ctx, 31, 0x3A08A4u);
    ctx->pc = 0x3A08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A089Cu;
    // 0x3a08a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B80u, 0x3A089Cu, 0x3A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A08A4u;
label_3a08a4:
    // 0x3a08a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a08a8: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A08A8u;
    {
        const bool branch_taken_0x3a08a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08A8u;
        // 0x3a08ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08a8) {
            ctx->pc = 0x3A0904u;
            goto label_3a0904;
        }
    }
    ctx->pc = 0x3A08B0u;
    // 0x3a08b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a08b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a08b4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x3a08b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a08b8: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x3a08b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3a08bc: 0x0  nop
    ctx->pc = 0x3a08bcu;
    // NOP
label_3a08c0:
    // 0x3a08c0: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a08c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3a08c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a08c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a08c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A08C8u;
    {
        const bool branch_taken_0x3a08c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08C8u;
        // 0x3a08cc: 0x92030003  lbu         $v1, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08c8) {
            ctx->pc = 0x3A08F0u;
            goto label_3a08f0;
        }
    }
    ctx->pc = 0x3A08D0u;
    // 0x3a08d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a08d4: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x3A08D4u;
    SET_GPR_U32(ctx, 31, 0x3A08DCu);
    ctx->pc = 0x3A08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A08D4u;
    // 0x3a08d8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x3A08D4u, 0x3A08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A08DCu;
label_3a08dc:
    // 0x3a08dc: 0x5053fff8  beql        $v0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A08DCu;
    {
        const bool branch_taken_0x3a08dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3a08dc) {
            ctx->pc = 0x3A08E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A08DCu;
            // 0x3a08e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A08C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a08c0;
        }
    }
    ctx->pc = 0x3A08E4u;
    // 0x3a08e4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A08E4u;
    {
        const bool branch_taken_0x3a08e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a08e4) {
            ctx->pc = 0x3A08E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A08E4u;
            // 0x3a08e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A08C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a08c0;
        }
    }
    ctx->pc = 0x3A08ECu;
    // 0x3a08ec: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3a08ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3a08f0:
    // 0x3a08f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a08f4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3a08f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x3a08f8: 0x12430002  beq         $s2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A08F8u;
    {
        const bool branch_taken_0x3a08f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08F8u;
        // 0x3a08fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08f8) {
            ctx->pc = 0x3A0904u;
            goto label_3a0904;
        }
    }
    ctx->pc = 0x3A0900u;
    // 0x3a0900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a0900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0904:
    // 0x3a0904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a090c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a090cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0910: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a0910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0918: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0918u;
        // 0x3a091c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0920u;
    // 0x3a0920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0924: 0x0  nop
    ctx->pc = 0x3a0924u;
    // NOP
    // 0x3a0928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3a0928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a092c: 0x0  nop
    ctx->pc = 0x3a092cu;
    // NOP
    // 0x3a0930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0934: 0x0  nop
    ctx->pc = 0x3a0934u;
    // NOP
    // 0x3a0938: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a093c: 0x0  nop
    ctx->pc = 0x3a093cu;
    // NOP
    // 0x3a0940: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a0944: 0x0  nop
    ctx->pc = 0x3a0944u;
    // NOP
    ctx->pc = 0x3a0948u;
}
