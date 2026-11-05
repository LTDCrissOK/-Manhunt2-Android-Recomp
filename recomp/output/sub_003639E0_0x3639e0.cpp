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

// Function: sub_003639E0
// Address: 0x3639e0 - 0x363a60
void sub_003639E0_0x3639e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003639E0_0x3639e0");
#endif

    switch (ctx->pc) {
        case 0x3639e0u: goto label_3639e0;
        case 0x3639e4u: goto label_3639e4;
        case 0x3639e8u: goto label_3639e8;
        case 0x3639ecu: goto label_3639ec;
        case 0x3639f0u: goto label_3639f0;
        case 0x3639f4u: goto label_3639f4;
        case 0x3639f8u: goto label_3639f8;
        case 0x3639fcu: goto label_3639fc;
        case 0x363a00u: goto label_363a00;
        case 0x363a04u: goto label_363a04;
        case 0x363a08u: goto label_363a08;
        case 0x363a0cu: goto label_363a0c;
        case 0x363a10u: goto label_363a10;
        case 0x363a14u: goto label_363a14;
        case 0x363a18u: goto label_363a18;
        case 0x363a1cu: goto label_363a1c;
        case 0x363a20u: goto label_363a20;
        case 0x363a24u: goto label_363a24;
        case 0x363a28u: goto label_363a28;
        case 0x363a2cu: goto label_363a2c;
        case 0x363a30u: goto label_363a30;
        case 0x363a34u: goto label_363a34;
        case 0x363a38u: goto label_363a38;
        case 0x363a3cu: goto label_363a3c;
        case 0x363a40u: goto label_363a40;
        case 0x363a44u: goto label_363a44;
        case 0x363a48u: goto label_363a48;
        case 0x363a4cu: goto label_363a4c;
        case 0x363a50u: goto label_363a50;
        case 0x363a54u: goto label_363a54;
        case 0x363a58u: goto label_363a58;
        case 0x363a5cu: goto label_363a5c;
        default: break;
    }

    ctx->pc = 0x3639e0u;

label_3639e0:
    // 0x3639e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3639e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3639e4:
    // 0x3639e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3639e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3639e8:
    // 0x3639e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3639e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3639ec:
    // 0x3639ec: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3639f0:
    if (ctx->pc == 0x3639F0u) {
        ctx->pc = 0x3639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639ECu;
        // 0x3639f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3639F4u;
        goto label_3639f4;
    }
    ctx->pc = 0x3639ECu;
    {
        const bool branch_taken_0x3639ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639ECu;
        // 0x3639f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3639ec) {
            ctx->pc = 0x363A0Cu;
            goto label_363a0c;
        }
    }
    ctx->pc = 0x3639F4u;
label_3639f4:
    // 0x3639f4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3639f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3639f8:
    // 0x3639f8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3639f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3639fc:
    // 0x3639fc: 0x40f809  jalr        $v0
label_363a00:
    if (ctx->pc == 0x363A00u) {
        ctx->pc = 0x363A04u;
        goto label_363a04;
    }
    ctx->pc = 0x3639FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639FCu, 0x363A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363A04u;
label_363a04:
    // 0x363a04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_363a08:
    if (ctx->pc == 0x363A08u) {
        ctx->pc = 0x363A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A04u;
        // 0x363a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363A0Cu;
        goto label_363a0c;
    }
    ctx->pc = 0x363A04u;
    {
        const bool branch_taken_0x363a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A04u;
        // 0x363a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a04) {
            ctx->pc = 0x363A4Cu;
            goto label_363a4c;
        }
    }
    ctx->pc = 0x363A0Cu;
label_363a0c:
    // 0x363a0c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x363a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363a10:
    // 0x363a10: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x363a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_363a14:
    // 0x363a14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x363a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_363a18:
    // 0x363a18: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x363a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_363a1c:
    // 0x363a1c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x363a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_363a20:
    // 0x363a20: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x363a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363a24:
    // 0x363a24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x363a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_363a28:
    // 0x363a28: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x363a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_363a2c:
    // 0x363a2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x363a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_363a30:
    // 0x363a30: 0x40f809  jalr        $v0
label_363a34:
    if (ctx->pc == 0x363A34u) {
        ctx->pc = 0x363A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A30u;
        // 0x363a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363A38u;
        goto label_363a38;
    }
    ctx->pc = 0x363A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363A38u);
        ctx->pc = 0x363A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A30u;
        // 0x363a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A30u, 0x363A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363A38u;
label_363a38:
    // 0x363a38: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x363a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_363a3c:
    // 0x363a3c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x363a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363a40:
    // 0x363a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363a44:
    // 0x363a44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x363a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_363a48:
    // 0x363a48: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x363a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_363a4c:
    // 0x363a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363a50:
    // 0x363a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_363a54:
    // 0x363a54: 0x3e00008  jr          $ra
label_363a58:
    if (ctx->pc == 0x363A58u) {
        ctx->pc = 0x363A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A54u;
        // 0x363a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363A5Cu;
        goto label_363a5c;
    }
    ctx->pc = 0x363A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A54u;
        // 0x363a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363A5Cu;
label_363a5c:
    // 0x363a5c: 0x0  nop
    ctx->pc = 0x363a5cu;
    // NOP
    ctx->pc = 0x363a60u;
}
