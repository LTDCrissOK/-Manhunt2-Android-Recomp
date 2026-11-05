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

// Function: sub_003CCDD8
// Address: 0x3ccdd8 - 0x3cceb0
void sub_003CCDD8_0x3ccdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCDD8_0x3ccdd8");
#endif

    switch (ctx->pc) {
        case 0x3cce08u: goto label_3cce08;
        case 0x3cce18u: goto label_3cce18;
        case 0x3cce70u: goto label_3cce70;
        default: break;
    }

    ctx->pc = 0x3ccdd8u;

    // 0x3ccdd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ccdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ccddc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ccddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ccde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ccde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccde4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ccde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ccde8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ccde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ccdec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ccdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccdf0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3ccdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3ccdf4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3ccdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3ccdf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CCDF8u;
    {
        const bool branch_taken_0x3ccdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccdf8) {
            ctx->pc = 0x3CCE10u;
            goto label_3cce10;
        }
    }
    ctx->pc = 0x3CCE00u;
    // 0x3cce00: 0xc0f3322  jal         func_3CCC88
    ctx->pc = 0x3CCE00u;
    SET_GPR_U32(ctx, 31, 0x3CCE08u);
    ctx->pc = 0x3CCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE00u;
    // 0x3cce04: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC88u, 0x3CCE00u, 0x3CCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE08u;
label_3cce08:
    // 0x3cce08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCE08u;
    {
        const bool branch_taken_0x3cce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE08u;
        // 0x3cce0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce08) {
            ctx->pc = 0x3CCE1Cu;
            goto label_3cce1c;
        }
    }
    ctx->pc = 0x3CCE10u;
label_3cce10:
    // 0x3cce10: 0xc0f3316  jal         func_3CCC58
    ctx->pc = 0x3CCE10u;
    SET_GPR_U32(ctx, 31, 0x3CCE18u);
    ctx->pc = 0x3CCC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC58u, 0x3CCE10u, 0x3CCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE18u;
label_3cce18:
    // 0x3cce18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cce18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cce1c:
    // 0x3cce1c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3cce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3cce20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3cce20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3cce24: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3cce24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3cce28: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x3cce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x3cce2c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3cce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3cce30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3cce30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3cce34: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3cce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3cce38: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3cce38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3cce3c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3cce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3cce40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cce44: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3cce44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3cce48: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3cce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3cce4c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3cce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3cce50: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3cce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3cce54: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3cce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3cce58: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3cce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3cce5c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3cce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x3cce60: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x3cce60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3cce64: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3cce64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3cce68: 0xc0f31e4  jal         func_3CC790
    ctx->pc = 0x3CCE68u;
    SET_GPR_U32(ctx, 31, 0x3CCE70u);
    ctx->pc = 0x3CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE68u;
    // 0x3cce6c: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC790u, 0x3CCE68u, 0x3CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE70u;
label_3cce70:
    // 0x3cce70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CCE70u;
    {
        const bool branch_taken_0x3cce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE70u;
        // 0x3cce74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce70) {
            ctx->pc = 0x3CCE98u;
            goto label_3cce98;
        }
    }
    ctx->pc = 0x3CCE78u;
    // 0x3cce78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cce78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cce7c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3cce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3cce80: 0x24a5cd98  addiu       $a1, $a1, -0x3268
    ctx->pc = 0x3cce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
    // 0x3cce84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cce84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cce88: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3cce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3cce8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cce8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cce90: 0x80f44f0  j           func_3D13C0
    ctx->pc = 0x3CCE90u;
    ctx->pc = 0x3CCE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE90u;
    // 0x3cce94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D13C0u, 0x3CCE90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3CCE98u;
label_3cce98:
    // 0x3cce98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cce98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cce9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cce9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEA0u;
        // 0x3ccea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCEA8u;
    // 0x3ccea8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3ccea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3cceac: 0x0  nop
    ctx->pc = 0x3cceacu;
    // NOP
    ctx->pc = 0x3cceb0u;
}
