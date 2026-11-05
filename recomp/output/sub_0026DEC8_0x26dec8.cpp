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

// Function: sub_0026DEC8
// Address: 0x26dec8 - 0x26df50
void sub_0026DEC8_0x26dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DEC8_0x26dec8");
#endif

    switch (ctx->pc) {
        case 0x26def0u: goto label_26def0;
        case 0x26def8u: goto label_26def8;
        default: break;
    }

    ctx->pc = 0x26dec8u;

    // 0x26dec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26decc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ded0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ded4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ded4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ded8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26dedc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26dedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dee0: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x26dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26dee4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DEE4u;
    {
        const bool branch_taken_0x26dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE4u;
        // 0x26dee8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dee4) {
            ctx->pc = 0x26DF18u;
            goto label_26df18;
        }
    }
    ctx->pc = 0x26DEECu;
    // 0x26deec: 0x0  nop
    ctx->pc = 0x26deecu;
    // NOP
label_26def0:
    // 0x26def0: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26DEF0u;
    SET_GPR_U32(ctx, 31, 0x26DEF8u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26DEF0u, 0x26DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEF8u;
label_26def8:
    // 0x26def8: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DEF8u;
    {
        const bool branch_taken_0x26def8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x26def8) {
            ctx->pc = 0x26DEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DEF8u;
            // 0x26defc: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF08u;
            goto label_26df08;
        }
    }
    ctx->pc = 0x26DF00u;
    // 0x26df00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26DF00u;
    {
        const bool branch_taken_0x26df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF00u;
        // 0x26df04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df00) {
            ctx->pc = 0x26DF38u;
            goto label_26df38;
        }
    }
    ctx->pc = 0x26DF08u;
label_26df08:
    // 0x26df08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26df0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DF0Cu;
    {
        const bool branch_taken_0x26df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df0c) {
            ctx->pc = 0x26DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF0Cu;
            // 0x26df10: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DF14u;
    // 0x26df14: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26df18:
    // 0x26df18: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26df18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26df1c: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x26df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_26df20:
    // 0x26df20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26df24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DF24u;
    {
        const bool branch_taken_0x26df24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF24u;
        // 0x26df28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df24) {
            ctx->pc = 0x26DF30u;
            goto label_26df30;
        }
    }
    ctx->pc = 0x26DF2Cu;
    // 0x26df2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26df30:
    // 0x26df30: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26DF30u;
    {
        const bool branch_taken_0x26df30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF30u;
        // 0x26df34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df30) {
            ctx->pc = 0x26DEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26def0;
        }
    }
    ctx->pc = 0x26DF38u;
label_26df38:
    // 0x26df38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26df38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26df3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26df3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26df40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26df44: 0x3e00008  jr          $ra
    ctx->pc = 0x26DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF44u;
        // 0x26df48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DF4Cu;
    // 0x26df4c: 0x0  nop
    ctx->pc = 0x26df4cu;
    // NOP
    ctx->pc = 0x26df50u;
}
