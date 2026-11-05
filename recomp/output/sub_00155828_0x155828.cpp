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

// Function: sub_00155828
// Address: 0x155828 - 0x1559b0
void sub_00155828_0x155828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155828_0x155828");
#endif

    switch (ctx->pc) {
        case 0x15589cu: goto label_15589c;
        case 0x1558b4u: goto label_1558b4;
        case 0x1558ccu: goto label_1558cc;
        case 0x15591cu: goto label_15591c;
        case 0x155984u: goto label_155984;
        default: break;
    }

    ctx->pc = 0x155828u;

    // 0x155828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15582c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15582cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x155830: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x155830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x155834: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x155834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155838: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x155838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15583c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15583cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155840: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x155840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x155844: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x155844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x155848: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x155848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15584c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x155850: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x155850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x155854: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155858: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x155858u;
    {
        const bool branch_taken_0x155858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155858u;
        // 0x15585c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155858) {
            ctx->pc = 0x155990u;
            goto label_155990;
        }
    }
    ctx->pc = 0x155860u;
    // 0x155860: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x155860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x155864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15586c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x155870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155874: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x155874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x155878: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x155878u;
    {
        const bool branch_taken_0x155878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155878u;
        // 0x15587c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155878) {
            ctx->pc = 0x155990u;
            goto label_155990;
        }
    }
    ctx->pc = 0x155880u;
    // 0x155880: 0x8e240660  lw          $a0, 0x660($s1)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x155884: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155884u;
    {
        const bool branch_taken_0x155884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155884) {
            ctx->pc = 0x1558A4u;
            goto label_1558a4;
        }
    }
    ctx->pc = 0x15588Cu;
    // 0x15588c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x155890: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x155890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x155894: 0xc0414a2  jal         func_105288
    ctx->pc = 0x155894u;
    SET_GPR_U32(ctx, 31, 0x15589Cu);
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x155894u, 0x15589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15589Cu;
label_15589c:
    // 0x15589c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15589Cu;
    {
        const bool branch_taken_0x15589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15589c) {
            ctx->pc = 0x1558B4u;
            goto label_1558b4;
        }
    }
    ctx->pc = 0x1558A4u;
label_1558a4:
    // 0x1558a4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1558a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1558a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1558a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1558ac: 0xc04549a  jal         func_115268
    ctx->pc = 0x1558ACu;
    SET_GPR_U32(ctx, 31, 0x1558B4u);
    ctx->pc = 0x1558B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558ACu;
    // 0x1558b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115268u, 0x1558ACu, 0x1558B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558B4u;
label_1558b4:
    // 0x1558b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558B4u;
    {
        const bool branch_taken_0x1558b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558b4) {
            ctx->pc = 0x1558C4u;
            goto label_1558c4;
        }
    }
    ctx->pc = 0x1558BCu;
    // 0x1558bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1558bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1558c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1558c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1558c4:
    // 0x1558c4: 0xc09c98c  jal         func_272630
    ctx->pc = 0x1558C4u;
    SET_GPR_U32(ctx, 31, 0x1558CCu);
    ctx->pc = 0x1558C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558C4u;
    // 0x1558c8: 0x8e240660  lw          $a0, 0x660($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272630u, 0x1558C4u, 0x1558CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558CCu;
label_1558cc:
    // 0x1558cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558CCu;
    {
        const bool branch_taken_0x1558cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558CCu;
        // 0x1558d0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558cc) {
            ctx->pc = 0x1558DCu;
            goto label_1558dc;
        }
    }
    ctx->pc = 0x1558D4u;
    // 0x1558d4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1558d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1558d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1558d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1558dc:
    // 0x1558dc: 0x26439a08  addiu       $v1, $s2, -0x65F8
    ctx->pc = 0x1558dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x1558e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1558e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1558e8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1558e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1558ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558ECu;
    {
        const bool branch_taken_0x1558ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1558ec) {
            ctx->pc = 0x1558F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1558ECu;
            // 0x1558f0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1558FCu;
            goto label_1558fc;
        }
    }
    ctx->pc = 0x1558F4u;
    // 0x1558f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1558F4u;
    {
        const bool branch_taken_0x1558f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558F4u;
        // 0x1558f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558f4) {
            ctx->pc = 0x155904u;
            goto label_155904;
        }
    }
    ctx->pc = 0x1558FCu;
label_1558fc:
    // 0x1558fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1558fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155900: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_155904:
    // 0x155904: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x155904u;
    {
        const bool branch_taken_0x155904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155904u;
        // 0x155908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155904) {
            ctx->pc = 0x15598Cu;
            goto label_15598c;
        }
    }
    ctx->pc = 0x15590Cu;
    // 0x15590c: 0x8e260660  lw          $a2, 0x660($s1)
    ctx->pc = 0x15590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x155910: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x155910u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x155914: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x155914u;
    SET_GPR_U32(ctx, 31, 0x15591Cu);
    ctx->pc = 0x155918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155914u;
    // 0x155918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x155914u, 0x15591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15591Cu;
label_15591c:
    // 0x15591c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155920: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x155920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x155924: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x155924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x155928: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x155928u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15592c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15592cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x155930: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x155930u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x155934: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x155934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155938: 0x0  nop
    ctx->pc = 0x155938u;
    // NOP
    // 0x15593c: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x15593Cu;
    {
        const bool branch_taken_0x15593c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15593c) {
            ctx->pc = 0x155940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15593Cu;
            // 0x155940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155990u;
            goto label_155990;
        }
    }
    ctx->pc = 0x155944u;
    // 0x155944: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x155944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15594c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15594cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x155950: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x155950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155958: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x155958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15595c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x15595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155960: 0x8e250660  lw          $a1, 0x660($s1)
    ctx->pc = 0x155960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x155964: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x155964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x155968: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x155968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15596c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155970: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x155970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x155974: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x155974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155978: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x155978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15597c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x15597Cu;
    SET_GPR_U32(ctx, 31, 0x155984u);
    ctx->pc = 0x155980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15597Cu;
    // 0x155980: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x15597Cu, 0x155984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155984u;
label_155984:
    // 0x155984: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155984u;
    {
        const bool branch_taken_0x155984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155984u;
        // 0x155988: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155984) {
            ctx->pc = 0x155990u;
            goto label_155990;
        }
    }
    ctx->pc = 0x15598Cu;
label_15598c:
    // 0x15598c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15598cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155990:
    // 0x155990: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x155990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155994: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x155994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155998: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x155998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15599c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1559a0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1559a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1559a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1559A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A4u;
        // 0x1559a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1559A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1559ACu;
    // 0x1559ac: 0x0  nop
    ctx->pc = 0x1559acu;
    // NOP
    ctx->pc = 0x1559b0u;
}
