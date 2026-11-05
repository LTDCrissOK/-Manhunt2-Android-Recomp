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

// Function: sub_00226048
// Address: 0x226048 - 0x2260f8
void sub_00226048_0x226048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226048_0x226048");
#endif

    switch (ctx->pc) {
        case 0x22605cu: goto label_22605c;
        case 0x2260c0u: goto label_2260c0;
        case 0x2260d8u: goto label_2260d8;
        case 0x2260e0u: goto label_2260e0;
        default: break;
    }

    ctx->pc = 0x226048u;

    // 0x226048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22604c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226054: 0xc084172  jal         func_2105C8
    ctx->pc = 0x226054u;
    SET_GPR_U32(ctx, 31, 0x22605Cu);
    ctx->pc = 0x226058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226054u;
    // 0x226058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x226054u, 0x22605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22605Cu;
label_22605c:
    // 0x22605c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x22605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x226060: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x226060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x226064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226064u;
    {
        const bool branch_taken_0x226064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226064u;
        // 0x226068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226064) {
            ctx->pc = 0x226078u;
            goto label_226078;
        }
    }
    ctx->pc = 0x22606Cu;
    // 0x22606c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x226070: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226070u;
    {
        const bool branch_taken_0x226070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226070) {
            ctx->pc = 0x22607Cu;
            goto label_22607c;
        }
    }
    ctx->pc = 0x226078u;
label_226078:
    // 0x226078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22607c:
    // 0x22607c: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22607Cu;
    {
        const bool branch_taken_0x22607c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22607c) {
            ctx->pc = 0x226080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22607Cu;
            // 0x226080: 0x8e030254  lw          $v1, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2260ACu;
            goto label_2260ac;
        }
    }
    ctx->pc = 0x226084u;
    // 0x226084: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x226088: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x226088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22608c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x22608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x226090: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x226090u;
    {
        const bool branch_taken_0x226090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226090) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x226098u;
    // 0x226098: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22609c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2260a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2260A0u;
    {
        const bool branch_taken_0x2260a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260a0) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x2260A8u;
    // 0x2260a8: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_2260ac:
    // 0x2260ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2260acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2260b0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2260B0u;
    {
        const bool branch_taken_0x2260b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2260b0) {
            ctx->pc = 0x2260B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2260B0u;
            // 0x2260b4: 0x92020280  lbu         $v0, 0x280($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2260C8u;
            goto label_2260c8;
        }
    }
    ctx->pc = 0x2260B8u;
    // 0x2260b8: 0xc089650  jal         func_225940
    ctx->pc = 0x2260B8u;
    SET_GPR_U32(ctx, 31, 0x2260C0u);
    ctx->pc = 0x2260BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260B8u;
    // 0x2260bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2260B8u, 0x2260C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260C0u;
label_2260c0:
    // 0x2260c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2260C0u;
    {
        const bool branch_taken_0x2260c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260c0) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x2260C8u;
label_2260c8:
    // 0x2260c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2260C8u;
    {
        const bool branch_taken_0x2260c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2260c8) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x2260D0u;
    // 0x2260d0: 0xc089650  jal         func_225940
    ctx->pc = 0x2260D0u;
    SET_GPR_U32(ctx, 31, 0x2260D8u);
    ctx->pc = 0x2260D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D0u;
    // 0x2260d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2260D0u, 0x2260D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260D8u;
label_2260d8:
    // 0x2260d8: 0xc08997e  jal         func_2265F8
    ctx->pc = 0x2260D8u;
    SET_GPR_U32(ctx, 31, 0x2260E0u);
    ctx->pc = 0x2260DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D8u;
    // 0x2260dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F8u, 0x2260D8u, 0x2260E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0xa2000270  sb          $zero, 0x270($s0)
    ctx->pc = 0x2260e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 0));
    // 0x2260e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2260e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2260e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2260e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2260ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2260ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2260F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260ECu;
        // 0x2260f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2260ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2260F4u;
    // 0x2260f4: 0x0  nop
    ctx->pc = 0x2260f4u;
    // NOP
    ctx->pc = 0x2260f8u;
}
