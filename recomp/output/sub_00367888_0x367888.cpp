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

// Function: sub_00367888
// Address: 0x367888 - 0x3679e0
void sub_00367888_0x367888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367888_0x367888");
#endif

    switch (ctx->pc) {
        case 0x3678c4u: goto label_3678c4;
        default: break;
    }

    ctx->pc = 0x367888u;

    // 0x367888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36788c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x367890: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x367890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x367894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367898: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x367898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36789c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36789cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3678a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3678a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3678a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3678a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3678a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3678ac: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3678acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3678b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3678b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3678b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3678B4u;
    {
        const bool branch_taken_0x3678b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3678B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678B4u;
        // 0x3678b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678b4) {
            ctx->pc = 0x3678C4u;
            goto label_3678c4;
        }
    }
    ctx->pc = 0x3678BCu;
    // 0x3678bc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3678BCu;
    SET_GPR_U32(ctx, 31, 0x3678C4u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3678BCu, 0x3678C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678C4u;
label_3678c4:
    // 0x3678c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3678c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3678c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3678c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3678cc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3678ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3678d0: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x3678d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x3678d4: 0x73f38  dsll        $a3, $a3, 28
    ctx->pc = 0x3678d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 28);
    // 0x3678d8: 0x34e7a000  ori         $a3, $a3, 0xA000
    ctx->pc = 0x3678d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
    // 0x3678dc: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x3678dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x3678e0: 0x24085353  addiu       $t0, $zero, 0x5353
    ctx->pc = 0x3678e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x3678e4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3678e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x3678e8: 0x34068156  ori         $a2, $zero, 0x8156
    ctx->pc = 0x3678e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    // 0x3678ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3678ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3678f0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3678f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x3678f4: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x3678f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x3678f8: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x3678f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x3678fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3678fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x367900: 0x26244000  addiu       $a0, $s1, 0x4000
    ctx->pc = 0x367900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x367904: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x367904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x367908: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x367908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36790c: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x36790cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x367910: 0x26424000  addiu       $v0, $s2, 0x4000
    ctx->pc = 0x367910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16384));
    // 0x367914: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x367914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x367918: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x367918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x36791c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x36791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x367920: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x367920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x367924: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x367924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x367928: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x367928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36792c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x36792cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367930: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x367930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x367934: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x367934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x367938: 0x24680028  addiu       $t0, $v1, 0x28
    ctx->pc = 0x367938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x36793c: 0x7c650008  sq          $a1, 0x8($v1)
    ctx->pc = 0x36793cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 5));
    // 0x367940: 0x26246800  addiu       $a0, $s1, 0x6800
    ctx->pc = 0x367940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 26624));
    // 0x367944: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x367944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x367948: 0x26466000  addiu       $a2, $s2, 0x6000
    ctx->pc = 0x367948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24576));
    // 0x36794c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x36794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x367950: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x367950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x367954: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x367954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x367958: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x367958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x36795c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x36795cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x367960: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x367960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x367964: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367968: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x367968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x36796c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x36796cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367970: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x367970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x367974: 0x34842800  ori         $a0, $a0, 0x2800
    ctx->pc = 0x367974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10240);
    // 0x367978: 0x24670048  addiu       $a3, $v1, 0x48
    ctx->pc = 0x367978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x36797c: 0x7c620018  sq          $v0, 0x18($v1)
    ctx->pc = 0x36797cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 24), GPR_VEC(ctx, 2));
    // 0x367980: 0x24690058  addiu       $t1, $v1, 0x58
    ctx->pc = 0x367980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x367984: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x367984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x367988: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x367988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x36798c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x36798cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x367990: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x367990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367994: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367998: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x367998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36799c: 0x7c620028  sq          $v0, 0x28($v1)
    ctx->pc = 0x36799cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 40), GPR_VEC(ctx, 2));
    // 0x3679a0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x3679a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x3679a4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x3679a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x3679a8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3679a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3679ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3679acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3679b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3679b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3679b4: 0x7c620038  sq          $v0, 0x38($v1)
    ctx->pc = 0x3679b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 56), GPR_VEC(ctx, 2));
    // 0x3679b8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3679bc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x3679bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x3679c0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x3679c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x3679c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3679c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3679c8: 0x7c620048  sq          $v0, 0x48($v1)
    ctx->pc = 0x3679c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 72), GPR_VEC(ctx, 2));
    // 0x3679cc: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x3679ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x3679d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3679d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3679d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3679D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3679D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679D4u;
        // 0x3679d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3679D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3679DCu;
    // 0x3679dc: 0x0  nop
    ctx->pc = 0x3679dcu;
    // NOP
    ctx->pc = 0x3679e0u;
}
