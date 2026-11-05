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

// Function: sub_002AC7A0
// Address: 0x2ac7a0 - 0x2ac880
void sub_002AC7A0_0x2ac7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC7A0_0x2ac7a0");
#endif

    switch (ctx->pc) {
        case 0x2ac7dcu: goto label_2ac7dc;
        case 0x2ac7ecu: goto label_2ac7ec;
        case 0x2ac7fcu: goto label_2ac7fc;
        case 0x2ac844u: goto label_2ac844;
        default: break;
    }

    ctx->pc = 0x2ac7a0u;

    // 0x2ac7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac7a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ac7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac7a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ac7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ac7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac7b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ac7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ac7b4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2ac7b4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac7b8: 0x0  nop
    ctx->pc = 0x2ac7b8u;
    // NOP
    // 0x2ac7bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac7c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ac7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac7c4: 0x0  nop
    ctx->pc = 0x2ac7c4u;
    // NOP
    // 0x2ac7c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC7C8u;
    {
        const bool branch_taken_0x2ac7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7C8u;
        // 0x2ac7cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7c8) {
            ctx->pc = 0x2AC7E4u;
            goto label_2ac7e4;
        }
    }
    ctx->pc = 0x2AC7D0u;
    // 0x2ac7d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac7d4: 0xc0ab14e  jal         func_2AC538
    ctx->pc = 0x2AC7D4u;
    SET_GPR_U32(ctx, 31, 0x2AC7DCu);
    ctx->pc = 0x2AC7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7D4u;
    // 0x2ac7d8: 0x8c449160  lw          $a0, -0x6EA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC538u, 0x2AC7D4u, 0x2AC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7DCu;
label_2ac7dc:
    // 0x2ac7dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2AC7DCu;
    {
        const bool branch_taken_0x2ac7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7DCu;
        // 0x2ac7e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7dc) {
            ctx->pc = 0x2AC870u;
            goto label_2ac870;
        }
    }
    ctx->pc = 0x2AC7E4u;
label_2ac7e4:
    // 0x2ac7e4: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x2AC7E4u;
    SET_GPR_U32(ctx, 31, 0x2AC7ECu);
    ctx->pc = 0x2AC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7E4u;
    // 0x2ac7e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x2AC7E4u, 0x2AC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7ECu;
label_2ac7ec:
    // 0x2ac7ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac7f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ac7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ac7f4: 0xc0ab13c  jal         func_2AC4F0
    ctx->pc = 0x2AC7F4u;
    SET_GPR_U32(ctx, 31, 0x2AC7FCu);
    ctx->pc = 0x2AC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7F4u;
    // 0x2ac7f8: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC4F0u, 0x2AC7F4u, 0x2AC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7FCu;
label_2ac7fc:
    // 0x2ac7fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ac7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ac800: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ac800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac804: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x2ac804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x2ac808: 0xdc85a9f8  ld          $a1, -0x5608($a0)
    ctx->pc = 0x2ac808u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 4294945272)));
    // 0x2ac80c: 0x8c666630  lw          $a2, 0x6630($v1)
    ctx->pc = 0x2ac80cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5A6630u));
    // 0x2ac810: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC810u;
    {
        const bool branch_taken_0x2ac810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC810u;
        // 0x2ac814: 0x50802d  daddu       $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac810) {
            ctx->pc = 0x2AC828u;
            goto label_2ac828;
        }
    }
    ctx->pc = 0x2AC818u;
    // 0x2ac818: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ac818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ac81c: 0x8c442c18  lw          $a0, 0x2C18($v0)
    ctx->pc = 0x2ac81cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C18u));
    // 0x2ac820: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2ac820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ac824: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ac828:
    // 0x2ac828: 0x527fe  dsrl32      $a0, $a1, 31
    ctx->pc = 0x2ac828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x2ac82c: 0x61078  dsll        $v0, $a2, 1
    ctx->pc = 0x2ac82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 1);
    // 0x2ac830: 0xa4202d  daddu       $a0, $a1, $a0
    ctx->pc = 0x2ac830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2ac834: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x2ac834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2ac838: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x2ac838u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x2ac83c: 0xc0f472e  jal         func_3D1CB8
    ctx->pc = 0x2AC83Cu;
    SET_GPR_U32(ctx, 31, 0x2AC844u);
    ctx->pc = 0x2AC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC83Cu;
    // 0x2ac840: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1CB8u, 0x2AC83Cu, 0x2AC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC844u;
label_2ac844:
    // 0x2ac844: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ac844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac848: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ac848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ac84c: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x2ac84cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac850: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2ac854: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2ac854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2ac858: 0x3a4100a  movz        $v0, $sp, $a0
    ctx->pc = 0x2ac858u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 29));
    // 0x2ac85c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2ac85cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac860: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2ac860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2ac864: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2ac864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ac868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ac868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ac86c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ac86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac870:
    // 0x2ac870: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ac870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac878: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC878u;
        // 0x2ac87c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC880u;
}
