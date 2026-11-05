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

// Function: sub_003BF780
// Address: 0x3bf780 - 0x3bf8a0
void sub_003BF780_0x3bf780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF780_0x3bf780");
#endif

    switch (ctx->pc) {
        case 0x3bf7c0u: goto label_3bf7c0;
        case 0x3bf800u: goto label_3bf800;
        case 0x3bf810u: goto label_3bf810;
        case 0x3bf828u: goto label_3bf828;
        case 0x3bf850u: goto label_3bf850;
        default: break;
    }

    ctx->pc = 0x3bf780u;

    // 0x3bf780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bf780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3bf784: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3bf784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3bf788: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3bf788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3bf78c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3bf78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf790: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bf790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3bf794: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3bf794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf798: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x3bf798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x3bf79c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3bf79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3bf7a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bf7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3bf7a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3bf7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3bf7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3bf7ac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3bf7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3bf7b0: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF7B0u;
    {
        const bool branch_taken_0x3bf7b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7B0u;
        // 0x3bf7b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7b0) {
            ctx->pc = 0x3BF7D8u;
            goto label_3bf7d8;
        }
    }
    ctx->pc = 0x3BF7B8u;
    // 0x3bf7b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3BF7B8u;
    {
        const bool branch_taken_0x3bf7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7B8u;
        // 0x3bf7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7b8) {
            ctx->pc = 0x3BF86Cu;
            goto label_3bf86c;
        }
    }
    ctx->pc = 0x3BF7C0u;
label_3bf7c0:
    // 0x3bf7c0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BF7C0u;
    {
        const bool branch_taken_0x3bf7c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf7c0) {
            ctx->pc = 0x3BF7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF7C0u;
            // 0x3bf7c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF7C8u;
            goto label_3bf7c8;
        }
    }
    ctx->pc = 0x3BF7C8u;
label_3bf7c8:
    // 0x3bf7c8: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x3bf7c8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3bf7cc: 0x1012  mflo        $v0
    ctx->pc = 0x3bf7ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3bf7d0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3BF7D0u;
    {
        const bool branch_taken_0x3bf7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7D0u;
        // 0x3bf7d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7d0) {
            ctx->pc = 0x3BF870u;
            goto label_3bf870;
        }
    }
    ctx->pc = 0x3BF7D8u;
label_3bf7d8:
    // 0x3bf7d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bf7dc: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BF7DCu;
    {
        const bool branch_taken_0x3bf7dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3bf7dc) {
            ctx->pc = 0x3BF7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF7DCu;
            // 0x3bf7e0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF7E4u;
            goto label_3bf7e4;
        }
    }
    ctx->pc = 0x3BF7E4u;
label_3bf7e4:
    // 0x3bf7e4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3bf7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bf7e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bf7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7ec: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3bf7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3bf7f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BF7F0u;
    {
        const bool branch_taken_0x3bf7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7F0u;
        // 0x3bf7f4: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7f0) {
            ctx->pc = 0x3BF840u;
            goto label_3bf840;
        }
    }
    ctx->pc = 0x3BF7F8u;
    // 0x3bf7f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bf7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bf7fc: 0x0  nop
    ctx->pc = 0x3bf7fcu;
    // NOP
label_3bf800:
    // 0x3bf800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bf800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf804: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bf804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf808: 0xc0efdd4  jal         func_3BF750
    ctx->pc = 0x3BF808u;
    SET_GPR_U32(ctx, 31, 0x3BF810u);
    ctx->pc = 0x3BF80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF808u;
    // 0x3bf80c: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF750u, 0x3BF808u, 0x3BF810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF810u;
label_3bf810:
    // 0x3bf810: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3bf810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3bf814: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bf814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bf818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf81c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bf81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3bf820: 0xc0efe76  jal         func_3BF9D8
    ctx->pc = 0x3BF820u;
    SET_GPR_U32(ctx, 31, 0x3BF828u);
    ctx->pc = 0x3BF824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF820u;
    // 0x3bf824: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3BF820u, 0x3BF828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF828u;
label_3bf828:
    // 0x3bf828: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3BF828u;
    {
        const bool branch_taken_0x3bf828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF828u;
        // 0x3bf82c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf828) {
            ctx->pc = 0x3BF7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf7c0;
        }
    }
    ctx->pc = 0x3BF830u;
    // 0x3bf830: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3bf830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bf834: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3bf834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3bf838: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x3BF838u;
    {
        const bool branch_taken_0x3bf838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf838) {
            ctx->pc = 0x3BF83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF838u;
            // 0x3bf83c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf800;
        }
    }
    ctx->pc = 0x3BF840u;
label_3bf840:
    // 0x3bf840: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bf840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bf844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bf844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf848: 0xc0efdd4  jal         func_3BF750
    ctx->pc = 0x3BF848u;
    SET_GPR_U32(ctx, 31, 0x3BF850u);
    ctx->pc = 0x3BF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF848u;
    // 0x3bf84c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF750u, 0x3BF848u, 0x3BF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF850u;
label_3bf850:
    // 0x3bf850: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3bf850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bf854: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3bf854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf858: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bf858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bf85c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x3bf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3bf860: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3bf860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3bf864: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3bf864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x3bf868: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3bf868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3bf86c:
    // 0x3bf86c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bf86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bf870:
    // 0x3bf870: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3bf870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bf874: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3bf874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bf878: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3bf878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf87c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3bf87cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf880: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3bf880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf884: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3bf884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf88c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF88Cu;
        // 0x3bf890: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF894u;
    // 0x3bf894: 0x0  nop
    ctx->pc = 0x3bf894u;
    // NOP
    // 0x3bf898: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3bf898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bf89c: 0x0  nop
    ctx->pc = 0x3bf89cu;
    // NOP
    ctx->pc = 0x3bf8a0u;
}
