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

// Function: sub_00367758
// Address: 0x367758 - 0x367888
void sub_00367758_0x367758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367758_0x367758");
#endif

    switch (ctx->pc) {
        case 0x367798u: goto label_367798;
        default: break;
    }

    ctx->pc = 0x367758u;

    // 0x367758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36775c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x36775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x367760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x367760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x367764: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x367764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x367768: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x367768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36776c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36776cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x367770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x367774: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x367774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x367778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x367778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36777c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x36777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x367780: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x367780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x367784: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x367784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x367788: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x367788u;
    {
        const bool branch_taken_0x367788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367788u;
        // 0x36778c: 0xa28825  or          $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367788) {
            ctx->pc = 0x367798u;
            goto label_367798;
        }
    }
    ctx->pc = 0x367790u;
    // 0x367790: 0xc0dc442  jal         func_371108
    ctx->pc = 0x367790u;
    SET_GPR_U32(ctx, 31, 0x367798u);
    ctx->pc = 0x367794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367790u;
    // 0x367794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x367790u, 0x367798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367798u;
label_367798:
    // 0x367798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x367798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36779c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x36779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x3677a0: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3677a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3677a4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3677a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3677a8: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x3677a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x3677ac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3677acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x3677b0: 0x34048156  ori         $a0, $zero, 0x8156
    ctx->pc = 0x3677b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    // 0x3677b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3677b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3677b8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x3677b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x3677bc: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x3677bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x3677c0: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x3677c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x3677c4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3677c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3677c8: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x3677c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3677cc: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x3677ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x3677d0: 0x35080008  ori         $t0, $t0, 0x8
    ctx->pc = 0x3677d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x3677d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3677d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3677d8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3677d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3677dc: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x3677dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x3677e0: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x3677e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3677e4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3677e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3677e8: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x3677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3677ec: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x3677ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x3677f0: 0x34048200  ori         $a0, $zero, 0x8200
    ctx->pc = 0x3677f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    // 0x3677f4: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x3677f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x3677f8: 0x34840408  ori         $a0, $a0, 0x408
    ctx->pc = 0x3677f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1032);
    // 0x3677fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3677fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x367800: 0x24660038  addiu       $a2, $v1, 0x38
    ctx->pc = 0x367800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x367804: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367808: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x367808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36780c: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x36780cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x367810: 0x35290400  ori         $t1, $t1, 0x400
    ctx->pc = 0x367810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    // 0x367814: 0x246a0048  addiu       $t2, $v1, 0x48
    ctx->pc = 0x367814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x367818: 0x246b0058  addiu       $t3, $v1, 0x58
    ctx->pc = 0x367818u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x36781c: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x36781cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x367820: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x367820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x367824: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x367824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x367828: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x367828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x36782c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36782cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367830: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x367834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367838: 0x7c620018  sq          $v0, 0x18($v1)
    ctx->pc = 0x367838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 24), GPR_VEC(ctx, 2));
    // 0x36783c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36783cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x367840: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x367840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x367844: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x367844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x367848: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36784c: 0x7c620028  sq          $v0, 0x28($v1)
    ctx->pc = 0x36784cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 40), GPR_VEC(ctx, 2));
    // 0x367850: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x367850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x367854: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x367854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x367858: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x367858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x36785c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36785cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367860: 0x7c620038  sq          $v0, 0x38($v1)
    ctx->pc = 0x367860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 56), GPR_VEC(ctx, 2));
    // 0x367864: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x367864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x367868: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x367868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x36786c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x36786cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x367870: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367874: 0x7c620048  sq          $v0, 0x48($v1)
    ctx->pc = 0x367874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 72), GPR_VEC(ctx, 2));
    // 0x367878: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x367878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x36787c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367880: 0x3e00008  jr          $ra
    ctx->pc = 0x367880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367880u;
        // 0x367884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367888u;
}
