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

// Function: sub_00152548
// Address: 0x152548 - 0x152610
void sub_00152548_0x152548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152548_0x152548");
#endif

    switch (ctx->pc) {
        case 0x152598u: goto label_152598;
        case 0x1525d8u: goto label_1525d8;
        case 0x1525f8u: goto label_1525f8;
        default: break;
    }

    ctx->pc = 0x152548u;

    // 0x152548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15254c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15254cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x152550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x152554: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x152554u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152558: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x152558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15255c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x152560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x152560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x152564: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x152564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152568: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x152568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15256c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152570: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x152570u;
    {
        const bool branch_taken_0x152570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x152574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152570u;
        // 0x152574: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152570) {
            ctx->pc = 0x1525F8u;
            goto label_1525f8;
        }
    }
    ctx->pc = 0x152578u;
    // 0x152578: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x152578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15257c: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x15257cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x152580: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x152580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x152584: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x152588: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x152588u;
    {
        const bool branch_taken_0x152588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152588u;
        // 0x15258c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152588) {
            ctx->pc = 0x1525F8u;
            goto label_1525f8;
        }
    }
    ctx->pc = 0x152590u;
    // 0x152590: 0xc049844  jal         func_126110
    ctx->pc = 0x152590u;
    SET_GPR_U32(ctx, 31, 0x152598u);
    ctx->pc = 0x152594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152590u;
    // 0x152594: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126110u, 0x152590u, 0x152598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152598u;
label_152598:
    // 0x152598: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15259c: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x15259Cu;
    {
        const bool branch_taken_0x15259c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15259c) {
            ctx->pc = 0x1525A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15259Cu;
            // 0x1525a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1525FCu;
            goto label_1525fc;
        }
    }
    ctx->pc = 0x1525A4u;
    // 0x1525a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1525a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1525a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1525ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1525acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1525b0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1525b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1525b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1525B4u;
    {
        const bool branch_taken_0x1525b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1525B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525B4u;
        // 0x1525b8: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525b4) {
            ctx->pc = 0x1525C4u;
            goto label_1525c4;
        }
    }
    ctx->pc = 0x1525BCu;
    // 0x1525bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1525BCu;
    {
        const bool branch_taken_0x1525bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525BCu;
        // 0x1525c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525bc) {
            ctx->pc = 0x1525D0u;
            goto label_1525d0;
        }
    }
    ctx->pc = 0x1525C4u;
label_1525c4:
    // 0x1525c4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1525c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1525c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1525cc: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x1525ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1525d0:
    // 0x1525d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1525D0u;
    SET_GPR_U32(ctx, 31, 0x1525D8u);
    ctx->pc = 0x1525D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525D0u;
    // 0x1525d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1525D0u, 0x1525D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525D8u;
label_1525d8:
    // 0x1525d8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1525d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1525dc: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1525dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1525e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1525e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1525e4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1525e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1525e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1525ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525f0: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1525F0u;
    SET_GPR_U32(ctx, 31, 0x1525F8u);
    ctx->pc = 0x1525F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525F0u;
    // 0x1525f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x1525F0u, 0x1525F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525F8u;
label_1525f8:
    // 0x1525f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1525f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1525fc:
    // 0x1525fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1525fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x152600: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x152600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152604: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x152604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x152608: 0x3e00008  jr          $ra
    ctx->pc = 0x152608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152608u;
        // 0x15260c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152610u;
}
