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

// Function: sub_0036D658
// Address: 0x36d658 - 0x36d9e0
void sub_0036D658_0x36d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D658_0x36d658");
#endif

    switch (ctx->pc) {
        case 0x36d6fcu: goto label_36d6fc;
        case 0x36d7f8u: goto label_36d7f8;
        case 0x36d94cu: goto label_36d94c;
        default: break;
    }

    ctx->pc = 0x36d658u;

    // 0x36d658: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36d65c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36d660: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x36d664: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x36d668: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x36d668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d66c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x36d670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36d670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d674: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x36d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x36d678: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x36d678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d67c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x36d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x36d680: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x36d680u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d684: 0x9043cc10  lbu         $v1, -0x33F0($v0)
    ctx->pc = 0x36d684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCC10u));
    // 0x36d688: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x36d688u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d68c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x36d690: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x36d694: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x36d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x36d698: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x36d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x36d69c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x36d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x36d6a0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x36d6a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36d6a4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x36d6a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36d6a8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x36d6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36d6ac: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x36D6ACu;
    {
        const bool branch_taken_0x36d6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6ACu;
        // 0x36d6b0: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d6ac) {
            ctx->pc = 0x36D9A0u;
            goto label_36d9a0;
        }
    }
    ctx->pc = 0x36D6B4u;
    // 0x36d6b4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x36d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x36d6b8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36d6bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x36d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x36d6c0: 0x2466f910  addiu       $a2, $v1, -0x6F0
    ctx->pc = 0x36d6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x36d6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d6c8: 0x8c64f910  lw          $a0, -0x6F0($v1)
    ctx->pc = 0x36d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BF910u));
    // 0x36d6cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d6d0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x36d6d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6d4: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x36d6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x36d6d8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x36d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x36d6dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x36d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x36d6e0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x36d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x36d6e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36d6e8: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x36d6e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36d6ec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D6ECu;
    {
        const bool branch_taken_0x36d6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6ECu;
        // 0x36d6f0: 0x2038825  or          $s1, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d6ec) {
            ctx->pc = 0x36D6FCu;
            goto label_36d6fc;
        }
    }
    ctx->pc = 0x36D6F4u;
    // 0x36d6f4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x36D6F4u;
    SET_GPR_U32(ctx, 31, 0x36D6FCu);
    ctx->pc = 0x36D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D6F4u;
    // 0x36d6f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x36D6F4u, 0x36D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D6FCu;
label_36d6fc:
    // 0x36d6fc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x36d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x36d700: 0x8ea6f910  lw          $a2, -0x6F0($s5)
    ctx->pc = 0x36d700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x36d704: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36d704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x36d708: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x36d708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x36d70c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36d70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d710: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x36d710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x36d714: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x36d714u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x36d718: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36d718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36d71c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x36d71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36d720: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x36d720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36d724: 0xaea6f910  sw          $a2, -0x6F0($s5)
    ctx->pc = 0x36d724u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 6));
    // 0x36d728: 0x2463f8c8  addiu       $v1, $v1, -0x738
    ctx->pc = 0x36d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965448));
    // 0x36d72c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x36d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x36d730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36d730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36d734: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x36d734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d738: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36d73c: 0x8c73001c  lw          $s3, 0x1C($v1)
    ctx->pc = 0x36d73cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x36d740: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x36d744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36d744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d748: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x36d748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36d74c: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x36d74cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x36d750: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x36d750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x36d754: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x36d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x36d758: 0x36848000  ori         $a0, $s4, 0x8000
    ctx->pc = 0x36d758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32768);
    // 0x36d75c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d760: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x36d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x36d764: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x36d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x36d768: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x36d768u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36d76c: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x36d76cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x36d770: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36d770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36d774: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x36d774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x36d778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36d77c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x36d77cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x36d780: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x36d780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x36d784: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x36d784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x36d788: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x36d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x36d78c: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x36d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x36d790: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x36d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x36d794: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x36d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x36d798: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x36d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x36d79c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x36d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36d7a0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x36d7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x36d7a4: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x36d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    // 0x36d7a8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x36d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x36d7ac: 0x24c30018  addiu       $v1, $a2, 0x18
    ctx->pc = 0x36d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x36d7b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x36d7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36d7b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36d7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36d7b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d7bc: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x36d7bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x36d7c0: 0x7cc20008  sq          $v0, 0x8($a2)
    ctx->pc = 0x36d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 8), GPR_VEC(ctx, 2));
    // 0x36d7c4: 0x12800076  beqz        $s4, . + 4 + (0x76 << 2)
    ctx->pc = 0x36D7C4u;
    {
        const bool branch_taken_0x36d7c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7C4u;
        // 0x36d7c8: 0xaea3f910  sw          $v1, -0x6F0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7c4) {
            ctx->pc = 0x36D9A0u;
            goto label_36d9a0;
        }
    }
    ctx->pc = 0x36D7CCu;
    // 0x36d7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7d4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x36d7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7d8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x36d7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x36d7dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x36d7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36d7e0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x36d7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36d7e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36d7e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36d7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36d7f0: 0x2b83e  dsrl32      $s7, $v0, 0
    ctx->pc = 0x36d7f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x36d7f4: 0x0  nop
    ctx->pc = 0x36d7f4u;
    // NOP
label_36d7f8:
    // 0x36d7f8: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x36D7F8u;
    {
        const bool branch_taken_0x36d7f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7F8u;
        // 0x36d7fc: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7f8) {
            ctx->pc = 0x36D804u;
            goto label_36d804;
        }
    }
    ctx->pc = 0x36D800u;
    // 0x36d800: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x36d800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_36d804:
    // 0x36d804: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x36d804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d808: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36d808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d80c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x36D80Cu;
    {
        const bool branch_taken_0x36d80c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D80Cu;
        // 0x36d810: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d80c) {
            ctx->pc = 0x36D83Cu;
            goto label_36d83c;
        }
    }
    ctx->pc = 0x36D814u;
    // 0x36d814: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x36d814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36d818: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x36d818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x36d81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d820: 0x0  nop
    ctx->pc = 0x36d820u;
    // NOP
    // 0x36d824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x36d828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d82c: 0x0  nop
    ctx->pc = 0x36d82cu;
    // NOP
    // 0x36d830: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x36d830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36d834: 0x46150582  mul.s       $f22, $f0, $f21
    ctx->pc = 0x36d834u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x36d838: 0x46150d02  mul.s       $f20, $f1, $f21
    ctx->pc = 0x36d838u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_36d83c:
    // 0x36d83c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x36d83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36d840: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x36d840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36d844: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36d844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d848: 0xffb70008  sd          $s7, 0x8($sp)
    ctx->pc = 0x36d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 23));
    // 0x36d84c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x36d84cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d850: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36d850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36d854: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x36d854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x36d858: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x36d858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36d85c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d860: 0x8e08f910  lw          $t0, -0x6F0($s0)
    ctx->pc = 0x36d860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x36d864: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36d868: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36d868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36d86c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36d86cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d870: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x36d870u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x36d874: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x36d874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x36d878: 0x9082cbea  lbu         $v0, -0x3416($a0)
    ctx->pc = 0x36d878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FCBEAu));
    // 0x36d87c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36D87Cu;
    {
        const bool branch_taken_0x36d87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D87Cu;
        // 0x36d880: 0xae08f910  sw          $t0, -0x6F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d87c) {
            ctx->pc = 0x36D8D4u;
            goto label_36d8d4;
        }
    }
    ctx->pc = 0x36D884u;
    // 0x36d884: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D884u;
    {
        const bool branch_taken_0x36d884 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D884u;
        // 0x36d888: 0x25060010  addiu       $a2, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d884) {
            ctx->pc = 0x36D8D4u;
            goto label_36d8d4;
        }
    }
    ctx->pc = 0x36D88Cu;
    // 0x36d88c: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x36d88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x36d890: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x36d890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x36d894: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x36d894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x36d898: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x36d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x36d89c: 0x90e40006  lbu         $a0, 0x6($a3)
    ctx->pc = 0x36d89cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x36d8a0: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x36d8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x36d8a4: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x36d8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x36d8a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36d8ac: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x36d8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x36d8b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x36d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36d8b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36d8b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36d8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36d8bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36d8c0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x36d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x36d8c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36d8c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d8c8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x36d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x36d8cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36D8CCu;
    {
        const bool branch_taken_0x36d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D8CCu;
        // 0x36d8d0: 0xaea6f910  sw          $a2, -0x6F0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d8cc) {
            ctx->pc = 0x36D914u;
            goto label_36d914;
        }
    }
    ctx->pc = 0x36D8D4u;
label_36d8d4:
    // 0x36d8d4: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x36d8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x36d8d8: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x36d8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x36d8dc: 0x90e40004  lbu         $a0, 0x4($a3)
    ctx->pc = 0x36d8dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x36d8e0: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x36d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x36d8e4: 0x90e50006  lbu         $a1, 0x6($a3)
    ctx->pc = 0x36d8e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x36d8e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x36d8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36d8ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36d8f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36d8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36d8f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36d8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36d8f8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36d8fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x36d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x36d900: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x36d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x36d904: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36d904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d908: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x36d908u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x36d90c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x36d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x36d910: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x36d910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
label_36d914:
    // 0x36d914: 0x57c00012  bnel        $fp, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x36D914u;
    {
        const bool branch_taken_0x36d914 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d914) {
            ctx->pc = 0x36D918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D914u;
            // 0x36d918: 0x84e20008  lh          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D960u;
            goto label_36d960;
        }
    }
    ctx->pc = 0x36D91Cu;
    // 0x36d91c: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x36d91cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x36d920: 0xc4ee000c  lwc1        $f14, 0xC($a3)
    ctx->pc = 0x36d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36d924: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x36d924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x36d928: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x36d928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x36d92c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d930: 0x0  nop
    ctx->pc = 0x36d930u;
    // NOP
    // 0x36d934: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d938: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d93c: 0x0  nop
    ctx->pc = 0x36d93cu;
    // NOP
    // 0x36d940: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d944: 0xc0dc42e  jal         func_3710B8
    ctx->pc = 0x36D944u;
    SET_GPR_U32(ctx, 31, 0x36D94Cu);
    ctx->pc = 0x36D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D944u;
    // 0x36d948: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710B8u, 0x36D944u, 0x36D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D94Cu;
label_36d94c:
    // 0x36d94c: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x36d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x36d950: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x36d950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x36d954: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x36d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x36d958: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36D958u;
    {
        const bool branch_taken_0x36d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D958u;
        // 0x36d95c: 0xae03f910  sw          $v1, -0x6F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d958) {
            ctx->pc = 0x36D994u;
            goto label_36d994;
        }
    }
    ctx->pc = 0x36D960u;
label_36d960:
    // 0x36d960: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x36d960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x36d964: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x36d964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x36d968: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x36d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x36d96c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x36d96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x36d970: 0x8e04f910  lw          $a0, -0x6F0($s0)
    ctx->pc = 0x36d970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x36d974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d978: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x36d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x36d97c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36d980: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36d980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d984: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x36d984u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x36d988: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x36d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x36d98c: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x36d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x36d990: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x36d990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_36d994:
    // 0x36d994: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36d994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36d998: 0x1654ff97  bne         $s2, $s4, . + 4 + (-0x69 << 2)
    ctx->pc = 0x36D998u;
    {
        const bool branch_taken_0x36d998 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x36d998) {
            ctx->pc = 0x36D7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d7f8;
        }
    }
    ctx->pc = 0x36D9A0u;
label_36d9a0:
    // 0x36d9a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36d9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d9a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36d9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d9a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36d9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d9ac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36d9acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d9b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x36d9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d9b4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x36d9b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36d9b8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x36d9b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36d9bc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x36d9bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36d9c0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x36d9c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36d9c4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x36d9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36d9c8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x36d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36d9cc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x36d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36d9d0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x36d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9D4u;
        // 0x36d9d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D9DCu;
    // 0x36d9dc: 0x0  nop
    ctx->pc = 0x36d9dcu;
    // NOP
    ctx->pc = 0x36d9e0u;
}
