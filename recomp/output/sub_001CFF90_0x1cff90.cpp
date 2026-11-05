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

// Function: sub_001CFF90
// Address: 0x1cff90 - 0x1d0038
void sub_001CFF90_0x1cff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF90_0x1cff90");
#endif

    switch (ctx->pc) {
        case 0x1cffd8u: goto label_1cffd8;
        case 0x1cfff4u: goto label_1cfff4;
        default: break;
    }

    ctx->pc = 0x1cff90u;

    // 0x1cff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cffa4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CFFA4u;
    {
        const bool branch_taken_0x1cffa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFA4u;
        // 0x1cffa8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffa4) {
            ctx->pc = 0x1D0010u;
            goto label_1d0010;
        }
    }
    ctx->pc = 0x1CFFACu;
    // 0x1cffac: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1cffacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1cffb0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1cffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1cffb4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CFFB4u;
    {
        const bool branch_taken_0x1cffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cffb4) {
            ctx->pc = 0x1CFFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFFB4u;
            // 0x1cffb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0020u;
            goto label_1d0020;
        }
    }
    ctx->pc = 0x1CFFBCu;
    // 0x1cffbc: 0x34620400  ori         $v0, $v1, 0x400
    ctx->pc = 0x1cffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1cffc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cffc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffc4: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cffc8: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFFC8u;
    {
        const bool branch_taken_0x1cffc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFC8u;
        // 0x1cffcc: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffc8) {
            ctx->pc = 0x1D001Cu;
            goto label_1d001c;
        }
    }
    ctx->pc = 0x1CFFD0u;
    // 0x1cffd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cffd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffd4: 0x0  nop
    ctx->pc = 0x1cffd4u;
    // NOP
label_1cffd8:
    // 0x1cffd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cffdc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1cffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cffe0: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1cffe4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFFE4u;
    {
        const bool branch_taken_0x1cffe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cffe4) {
            ctx->pc = 0x1CFFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFFE4u;
            // 0x1cffe8: 0x86020028  lh          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFFF8u;
            goto label_1cfff8;
        }
    }
    ctx->pc = 0x1CFFECu;
    // 0x1cffec: 0xc074a7c  jal         func_1D29F0
    ctx->pc = 0x1CFFECu;
    SET_GPR_U32(ctx, 31, 0x1CFFF4u);
    ctx->pc = 0x1D29F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D29F0u, 0x1CFFECu, 0x1CFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFF4u;
label_1cfff4:
    // 0x1cfff4: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_1cfff8:
    // 0x1cfff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cfff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1cfffc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1cfffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0000: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0000u;
        // 0x1d0004: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1CFFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cffd8;
        }
    }
    ctx->pc = 0x1D0008u;
    // 0x1d0008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0008u;
    {
        const bool branch_taken_0x1d0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0008u;
        // 0x1d000c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0008) {
            ctx->pc = 0x1D0020u;
            goto label_1d0020;
        }
    }
    ctx->pc = 0x1D0010u;
label_1d0010:
    // 0x1d0010: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1d0010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1d0014: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x1d0014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x1d0018: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x1d0018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_1d001c:
    // 0x1d001c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d001cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0020:
    // 0x1d0020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0024: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0028: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d002c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D002Cu;
        // 0x1d0030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D002Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0034u;
    // 0x1d0034: 0x0  nop
    ctx->pc = 0x1d0034u;
    // NOP
    ctx->pc = 0x1d0038u;
}
