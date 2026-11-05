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

// Function: sub_003DB7E8
// Address: 0x3db7e8 - 0x3db908
void sub_003DB7E8_0x3db7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB7E8_0x3db7e8");
#endif

    switch (ctx->pc) {
        case 0x3db830u: goto label_3db830;
        case 0x3db868u: goto label_3db868;
        case 0x3db870u: goto label_3db870;
        case 0x3db8ccu: goto label_3db8cc;
        case 0x3db8e8u: goto label_3db8e8;
        default: break;
    }

    ctx->pc = 0x3db7e8u;

    // 0x3db7e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3db7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3db7ec: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3db7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3db7f0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3db7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3db7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db7f8: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3db7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3db7fc: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3db7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3db800: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x3db800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x3db804: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3db804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db808: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3db808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db80c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x3db80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3db810: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x3db810u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3db814: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db818: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x3db818u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3db81c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3db81cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3db820: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3DB820u;
    {
        const bool branch_taken_0x3db820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db820) {
            ctx->pc = 0x3DB860u;
            goto label_3db860;
        }
    }
    ctx->pc = 0x3DB828u;
    // 0x3db828: 0xc0f6de8  jal         func_3DB7A0
    ctx->pc = 0x3DB828u;
    SET_GPR_U32(ctx, 31, 0x3DB830u);
    ctx->pc = 0x3DB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB828u;
    // 0x3db82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB7A0u, 0x3DB828u, 0x3DB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB830u;
label_3db830:
    // 0x3db830: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3db830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3db834: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3db834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3db838: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3db838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3db83c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3db83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3db840: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3db840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3db844: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x3db844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x3db848: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x3db848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3db84c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db850: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3db850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3db854: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3db854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3db858: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3DB858u;
    {
        const bool branch_taken_0x3db858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB858u;
        // 0x3db85c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db858) {
            ctx->pc = 0x3DB8ECu;
            goto label_3db8ec;
        }
    }
    ctx->pc = 0x3DB860u;
label_3db860:
    // 0x3db860: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB860u;
    SET_GPR_U32(ctx, 31, 0x3DB868u);
    ctx->pc = 0x3DB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB860u;
    // 0x3db864: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB860u, 0x3DB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB868u;
label_3db868:
    // 0x3db868: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x3DB868u;
    SET_GPR_U32(ctx, 31, 0x3DB870u);
    ctx->pc = 0x3DB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB868u;
    // 0x3db86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB738u, 0x3DB868u, 0x3DB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB870u;
label_3db870:
    // 0x3db870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3db870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db874: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DB874u;
    {
        const bool branch_taken_0x3db874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB874u;
        // 0x3db878: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db874) {
            ctx->pc = 0x3DB8ECu;
            goto label_3db8ec;
        }
    }
    ctx->pc = 0x3DB87Cu;
    // 0x3db87c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x3db87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x3db880: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x3db880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x3db884: 0x2462cc98  addiu       $v0, $v1, -0x3368
    ctx->pc = 0x3db884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954136));
    // 0x3db888: 0xdc6acc98  ld          $t2, -0x3368($v1)
    ctx->pc = 0x3db888u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x43CC98u));
    // 0x3db88c: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x3db88cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x43CCB0u));
    // 0x3db890: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x3db890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x3db894: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x3db894u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x43CCB8u));
    // 0x3db898: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3db898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db89c: 0x944b002c  lhu         $t3, 0x2C($v0)
    ctx->pc = 0x3db89cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x43CCC4u));
    // 0x3db8a0: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x3db8a0u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x43CCA0u));
    // 0x3db8a4: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3db8a4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x43CCA8u));
    // 0x3db8a8: 0x8c480028  lw          $t0, 0x28($v0)
    ctx->pc = 0x3db8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x43CCC0u));
    // 0x3db8ac: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x3db8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x3db8b0: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x3db8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x3db8b4: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x3db8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
    // 0x3db8b8: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x3db8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    // 0x3db8bc: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3db8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3db8c0: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x3db8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x3db8c4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3DB8C4u;
    SET_GPR_U32(ctx, 31, 0x3DB8CCu);
    ctx->pc = 0x3DB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8C4u;
    // 0x3db8c8: 0xa7ab002c  sh          $t3, 0x2C($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3DB8C4u, 0x3DB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8CCu;
label_3db8cc:
    // 0x3db8cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3db8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3db8d0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x3db8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x3db8d4: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x3db8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x3db8d8: 0x24a5ccd0  addiu       $a1, $a1, -0x3330
    ctx->pc = 0x3db8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954192));
    // 0x3db8dc: 0x24060211  addiu       $a2, $zero, 0x211
    ctx->pc = 0x3db8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    // 0x3db8e0: 0xc0ab402  jal         func_2AD008
    ctx->pc = 0x3DB8E0u;
    SET_GPR_U32(ctx, 31, 0x3DB8E8u);
    ctx->pc = 0x3DB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8E0u;
    // 0x3db8e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD008u, 0x3DB8E0u, 0x3DB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8E8u;
label_3db8e8:
    // 0x3db8e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3db8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db8ec:
    // 0x3db8ec: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3db8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3db8f0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3db8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3db8f4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3db8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3db8f8: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x3db8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3db8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8FCu;
        // 0x3db900: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB904u;
    // 0x3db904: 0x0  nop
    ctx->pc = 0x3db904u;
    // NOP
    ctx->pc = 0x3db908u;
}
