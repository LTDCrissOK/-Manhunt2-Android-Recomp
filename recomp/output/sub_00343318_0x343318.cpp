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

// Function: sub_00343318
// Address: 0x343318 - 0x343458
void sub_00343318_0x343318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343318_0x343318");
#endif

    switch (ctx->pc) {
        case 0x34334cu: goto label_34334c;
        case 0x343390u: goto label_343390;
        default: break;
    }

    ctx->pc = 0x343318u;

    // 0x343318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x343318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34331c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x343320: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x343320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x343324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x343324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343328: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x343328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34332c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x343330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x343330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x343334: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x343334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x343338: 0x3c12005c  lui         $s2, 0x5C
    ctx->pc = 0x343338u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    // 0x34333c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x343340: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x343340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x343344: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x343344u;
    SET_GPR_U32(ctx, 31, 0x34334Cu);
    ctx->pc = 0x343348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343344u;
    // 0x343348: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x343344u, 0x34334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34334Cu;
label_34334c:
    // 0x34334c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343350: 0x2646f910  addiu       $a2, $s2, -0x6F0
    ctx->pc = 0x343350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965520));
    // 0x343354: 0x51980b  movn        $s3, $v0, $s1
    ctx->pc = 0x343354u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x343358: 0x8e43f910  lw          $v1, -0x6F0($s2)
    ctx->pc = 0x343358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965520)));
    // 0x34335c: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x34335cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x343360: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x343360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x343364: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x343368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34336c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x343370: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x343370u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x343374: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x343374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x343378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x343378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34337c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x34337cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x343380: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x343380u;
    {
        const bool branch_taken_0x343380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343380u;
        // 0x343384: 0x204a825  or          $s5, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343380) {
            ctx->pc = 0x343390u;
            goto label_343390;
        }
    }
    ctx->pc = 0x343388u;
    // 0x343388: 0xc0dc442  jal         func_371108
    ctx->pc = 0x343388u;
    SET_GPR_U32(ctx, 31, 0x343390u);
    ctx->pc = 0x34338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343388u;
    // 0x34338c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x343388u, 0x343390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343390u;
label_343390:
    // 0x343390: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x343390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x343394: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x343394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x343398: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x343398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x34339c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3433a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3433a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3433a4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3433a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3433a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3433a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3433ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3433acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3433b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3433b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3433b4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3433b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3433b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3433b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3433bc: 0x8e46f910  lw          $a2, -0x6F0($s2)
    ctx->pc = 0x3433bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965520)));
    // 0x3433c0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3433c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3433c4: 0x36848000  ori         $a0, $s4, 0x8000
    ctx->pc = 0x3433c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32768);
    // 0x3433c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3433c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3433cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3433ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3433d0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3433d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3433d4: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x3433d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x3433d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3433d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3433dc: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x3433dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x3433e0: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x3433e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x3433e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3433e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3433e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3433e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3433ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3433ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3433f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3433f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3433f4: 0xae46f910  sw          $a2, -0x6F0($s2)
    ctx->pc = 0x3433f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965520), GPR_U32(ctx, 6));
    // 0x3433f8: 0x15383c  dsll32      $a3, $s5, 0
    ctx->pc = 0x3433f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3433fc: 0x132f3c  dsll32      $a1, $s3, 28
    ctx->pc = 0x3433fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 28));
    // 0x343400: 0x24025353  addiu       $v0, $zero, 0x5353
    ctx->pc = 0x343400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x343404: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x343404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x343408: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x343408u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x34340c: 0x51180b  movn        $v1, $v0, $s1
    ctx->pc = 0x34340cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x343410: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x343410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x343414: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x343414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x343418: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x343418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x34341c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x34341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x343420: 0xae45f910  sw          $a1, -0x6F0($s2)
    ctx->pc = 0x343420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965520), GPR_U32(ctx, 5));
    // 0x343424: 0x24c70018  addiu       $a3, $a2, 0x18
    ctx->pc = 0x343424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x343428: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34342c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34342cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343430: 0x7cc20008  sq          $v0, 0x8($a2)
    ctx->pc = 0x343430u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 8), GPR_VEC(ctx, 2));
    // 0x343434: 0xae47f910  sw          $a3, -0x6F0($s2)
    ctx->pc = 0x343434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965520), GPR_U32(ctx, 7));
    // 0x343438: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x343438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34343c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34343cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343440: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x343440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x343444: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x343444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343448: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x343448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34344c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x343450: 0x3e00008  jr          $ra
    ctx->pc = 0x343450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343450u;
        // 0x343454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343458u;
}
