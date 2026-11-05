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

// Function: sub_001260A0
// Address: 0x1260a0 - 0x126110
void sub_001260A0_0x1260a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001260A0_0x1260a0");
#endif

    switch (ctx->pc) {
        case 0x1260d4u: goto label_1260d4;
        default: break;
    }

    ctx->pc = 0x1260a0u;

    // 0x1260a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1260a4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1260a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1260a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1260a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1260ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1260b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1260b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1260b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1260b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1260b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1260bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1260bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260c0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1260c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1260c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1260C4u;
    {
        const bool branch_taken_0x1260c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260C4u;
        // 0x1260c8: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260c4) {
            ctx->pc = 0x1260F4u;
            goto label_1260f4;
        }
    }
    ctx->pc = 0x1260CCu;
    // 0x1260cc: 0xc049f04  jal         func_127C10
    ctx->pc = 0x1260CCu;
    SET_GPR_U32(ctx, 31, 0x1260D4u);
    ctx->pc = 0x1260D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260CCu;
    // 0x1260d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x1260CCu, 0x1260D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260D4u;
label_1260d4:
    // 0x1260d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1260d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1260dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1260DCu;
    {
        const bool branch_taken_0x1260dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1260E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260DCu;
        // 0x1260e0: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260dc) {
            ctx->pc = 0x1260F4u;
            goto label_1260f4;
        }
    }
    ctx->pc = 0x1260E4u;
    // 0x1260e4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1260e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1260e8: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x1260ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1260ECu;
    {
        const bool branch_taken_0x1260ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260ECu;
        // 0x1260f0: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260ec) {
            ctx->pc = 0x1260F8u;
            goto label_1260f8;
        }
    }
    ctx->pc = 0x1260F4u;
label_1260f4:
    // 0x1260f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1260f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1260f8:
    // 0x1260f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1260f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1260fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1260fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126104: 0x3e00008  jr          $ra
    ctx->pc = 0x126104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126104u;
        // 0x126108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12610Cu;
    // 0x12610c: 0x0  nop
    ctx->pc = 0x12610cu;
    // NOP
    ctx->pc = 0x126110u;
}
