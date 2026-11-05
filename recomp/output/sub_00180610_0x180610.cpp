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

// Function: sub_00180610
// Address: 0x180610 - 0x1806c0
void sub_00180610_0x180610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180610_0x180610");
#endif

    switch (ctx->pc) {
        case 0x180630u: goto label_180630;
        case 0x180698u: goto label_180698;
        case 0x1806a0u: goto label_1806a0;
        default: break;
    }

    ctx->pc = 0x180610u;

    // 0x180610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180614: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x180614u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18061c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x180620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180628: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x180628u;
    {
        const bool branch_taken_0x180628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180628u;
        // 0x18062c: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180628) {
            ctx->pc = 0x18067Cu;
            goto label_18067c;
        }
    }
    ctx->pc = 0x180630u;
label_180630:
    // 0x180630: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x180634: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x180638: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x180638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18063c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x180640: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x180644: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x180644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180648: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x180648u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18064c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x18064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x180650: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x180654: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180658: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18065c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x18065cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x180660: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x180660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180664: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x180668: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x180668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x18066c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x18066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x180670: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x180670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x180674: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x180678: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x180678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
label_18067c:
    // 0x18067c: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x18067cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x180680: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x180680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180684: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x180684u;
    {
        const bool branch_taken_0x180684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180684u;
        // 0x180688: 0x83140  sll         $a2, $t0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180684) {
            ctx->pc = 0x180630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180630;
        }
    }
    ctx->pc = 0x18068Cu;
    // 0x18068c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x18068cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180690: 0xc060156  jal         func_180558
    ctx->pc = 0x180690u;
    SET_GPR_U32(ctx, 31, 0x180698u);
    ctx->pc = 0x180694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180690u;
    // 0x180694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180558u, 0x180690u, 0x180698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180698u;
label_180698:
    // 0x180698: 0xc0601b0  jal         func_1806C0
    ctx->pc = 0x180698u;
    SET_GPR_U32(ctx, 31, 0x1806A0u);
    ctx->pc = 0x18069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180698u;
    // 0x18069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806C0u, 0x180698u, 0x1806A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806A0u;
label_1806a0:
    // 0x1806a0: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x1806a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1806a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1806a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1806a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1806ac: 0xa2020410  sb          $v0, 0x410($s0)
    ctx->pc = 0x1806acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1040), (uint8_t)GPR_U32(ctx, 2));
    // 0x1806b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1806b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1806B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806B4u;
        // 0x1806b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806BCu;
    // 0x1806bc: 0x0  nop
    ctx->pc = 0x1806bcu;
    // NOP
    ctx->pc = 0x1806c0u;
}
