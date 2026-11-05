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

// Function: sub_0010ECC0
// Address: 0x10ecc0 - 0x10ed88
void sub_0010ECC0_0x10ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ECC0_0x10ecc0");
#endif

    switch (ctx->pc) {
        case 0x10ed50u: goto label_10ed50;
        case 0x10ed70u: goto label_10ed70;
        default: break;
    }

    ctx->pc = 0x10ecc0u;

    // 0x10ecc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ecc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10ecc8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10eccc: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x10ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10ecd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10ecd4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ecd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ecdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ecdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ece0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ece4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x10ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ece8: 0x8ca2020c  lw          $v0, 0x20C($a1)
    ctx->pc = 0x10ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x10ecec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10ECECu;
    {
        const bool branch_taken_0x10ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECECu;
        // 0x10ecf0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecec) {
            ctx->pc = 0x10ED70u;
            goto label_10ed70;
        }
    }
    ctx->pc = 0x10ECF4u;
    // 0x10ecf4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x10ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10ecf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ecfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ed00: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10ed04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED04u;
    {
        const bool branch_taken_0x10ed04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ed04) {
            ctx->pc = 0x10ED08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ED04u;
            // 0x10ed08: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED14u;
            goto label_10ed14;
        }
    }
    ctx->pc = 0x10ED0Cu;
    // 0x10ed0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED0Cu;
    {
        const bool branch_taken_0x10ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED0Cu;
        // 0x10ed10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed0c) {
            ctx->pc = 0x10ED1Cu;
            goto label_10ed1c;
        }
    }
    ctx->pc = 0x10ED14u;
label_10ed14:
    // 0x10ed14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ed18: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10ed1c:
    // 0x10ed1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10ed20: 0x24c39a08  addiu       $v1, $a2, -0x65F8
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x10ed24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ed28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ed2c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x10ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x10ed30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED30u;
    {
        const bool branch_taken_0x10ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ed30) {
            ctx->pc = 0x10ED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ED30u;
            // 0x10ed34: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED40u;
            goto label_10ed40;
        }
    }
    ctx->pc = 0x10ED38u;
    // 0x10ed38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED38u;
    {
        const bool branch_taken_0x10ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED38u;
        // 0x10ed3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed38) {
            ctx->pc = 0x10ED48u;
            goto label_10ed48;
        }
    }
    ctx->pc = 0x10ED40u;
label_10ed40:
    // 0x10ed40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ed44: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x10ed44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10ed48:
    // 0x10ed48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x10ED48u;
    SET_GPR_U32(ctx, 31, 0x10ED50u);
    ctx->pc = 0x10ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED48u;
    // 0x10ed4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x10ED48u, 0x10ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED50u;
label_10ed50:
    // 0x10ed50: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x10ed50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ed54: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x10ed54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ed58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x10ed58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10ed5c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x10ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10ed60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10ed64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed68: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x10ED68u;
    SET_GPR_U32(ctx, 31, 0x10ED70u);
    ctx->pc = 0x10ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED68u;
    // 0x10ed6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x10ED68u, 0x10ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED70u;
label_10ed70:
    // 0x10ed70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ed70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ed74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ed74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ed78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ed7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ed7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ed80: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED80u;
        // 0x10ed84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED88u;
}
