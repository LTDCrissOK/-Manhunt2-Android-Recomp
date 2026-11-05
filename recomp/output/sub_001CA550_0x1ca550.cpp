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

// Function: sub_001CA550
// Address: 0x1ca550 - 0x1ca720
void sub_001CA550_0x1ca550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA550_0x1ca550");
#endif

    switch (ctx->pc) {
        case 0x1ca580u: goto label_1ca580;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca60cu: goto label_1ca60c;
        case 0x1ca61cu: goto label_1ca61c;
        case 0x1ca638u: goto label_1ca638;
        case 0x1ca6c0u: goto label_1ca6c0;
        case 0x1ca6d0u: goto label_1ca6d0;
        case 0x1ca6e0u: goto label_1ca6e0;
        case 0x1ca6f4u: goto label_1ca6f4;
        case 0x1ca708u: goto label_1ca708;
        default: break;
    }

    ctx->pc = 0x1ca550u;

    // 0x1ca550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca558: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca564: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca568: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1ca56c: 0x8c64011c  lw          $a0, 0x11C($v1)
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1ca570: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA570u;
    {
        const bool branch_taken_0x1ca570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA570u;
        // 0x1ca574: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca570) {
            ctx->pc = 0x1CA584u;
            goto label_1ca584;
        }
    }
    ctx->pc = 0x1CA578u;
    // 0x1ca578: 0xc07289c  jal         func_1CA270
    ctx->pc = 0x1CA578u;
    SET_GPR_U32(ctx, 31, 0x1CA580u);
    ctx->pc = 0x1CA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA578u;
    // 0x1ca57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA270u, 0x1CA578u, 0x1CA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA580u;
label_1ca580:
    // 0x1ca580: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1ca584:
    // 0x1ca584: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x1ca584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca588: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca58c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca594: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1ca598: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA598u;
    {
        const bool branch_taken_0x1ca598 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA598u;
        // 0x1ca59c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca598) {
            ctx->pc = 0x1CA5B4u;
            goto label_1ca5b4;
        }
    }
    ctx->pc = 0x1CA5A0u;
    // 0x1ca5a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca5a4: 0x0  nop
    ctx->pc = 0x1ca5a4u;
    // NOP
    // 0x1ca5a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca5ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA5ACu;
    {
        const bool branch_taken_0x1ca5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca5ac) {
            ctx->pc = 0x1CA5D0u;
            goto label_1ca5d0;
        }
    }
    ctx->pc = 0x1CA5B4u;
label_1ca5b4:
    // 0x1ca5b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ca5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ca5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ca5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ca5bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca5c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca5c4: 0x0  nop
    ctx->pc = 0x1ca5c4u;
    // NOP
    // 0x1ca5c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca5cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ca5ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ca5d0:
    // 0x1ca5d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ca5d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca5d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ca5d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca5dc: 0x0  nop
    ctx->pc = 0x1ca5dcu;
    // NOP
    // 0x1ca5e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ca5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ca5e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca5e8: 0x0  nop
    ctx->pc = 0x1ca5e8u;
    // NOP
    // 0x1ca5ec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA5ECu;
    {
        const bool branch_taken_0x1ca5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5ECu;
        // 0x1ca5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5ec) {
            ctx->pc = 0x1CA64Cu;
            goto label_1ca64c;
        }
    }
    ctx->pc = 0x1CA5F4u;
    // 0x1ca5f4: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA5F4u;
    SET_GPR_U32(ctx, 31, 0x1CA5FCu);
    ctx->pc = 0x1CA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5F4u;
    // 0x1ca5f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA5F4u, 0x1CA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5FCu;
label_1ca5fc:
    // 0x1ca5fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA5FCu;
    {
        const bool branch_taken_0x1ca5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5FCu;
        // 0x1ca600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5fc) {
            ctx->pc = 0x1CA614u;
            goto label_1ca614;
        }
    }
    ctx->pc = 0x1CA604u;
    // 0x1ca604: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA604u;
    SET_GPR_U32(ctx, 31, 0x1CA60Cu);
    ctx->pc = 0x1CA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA604u;
    // 0x1ca608: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA604u, 0x1CA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA60Cu;
label_1ca60c:
    // 0x1ca60c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA60Cu;
    {
        const bool branch_taken_0x1ca60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA60Cu;
        // 0x1ca610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca60c) {
            ctx->pc = 0x1CA64Cu;
            goto label_1ca64c;
        }
    }
    ctx->pc = 0x1CA614u;
label_1ca614:
    // 0x1ca614: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA614u;
    SET_GPR_U32(ctx, 31, 0x1CA61Cu);
    ctx->pc = 0x1CA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA614u;
    // 0x1ca618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA614u, 0x1CA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA61Cu;
label_1ca61c:
    // 0x1ca61c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA61Cu;
    {
        const bool branch_taken_0x1ca61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA61Cu;
        // 0x1ca620: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca61c) {
            ctx->pc = 0x1CA62Cu;
            goto label_1ca62c;
        }
    }
    ctx->pc = 0x1CA624u;
    // 0x1ca624: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA624u;
    {
        const bool branch_taken_0x1ca624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA624u;
        // 0x1ca628: 0x8e0200a8  lw          $v0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca624) {
            ctx->pc = 0x1CA644u;
            goto label_1ca644;
        }
    }
    ctx->pc = 0x1CA62Cu;
label_1ca62c:
    // 0x1ca62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca630: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA630u;
    SET_GPR_U32(ctx, 31, 0x1CA638u);
    ctx->pc = 0x1CA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA630u;
    // 0x1ca634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA630u, 0x1CA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA638u;
label_1ca638:
    // 0x1ca638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA638u;
    {
        const bool branch_taken_0x1ca638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA638u;
        // 0x1ca63c: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca638) {
            ctx->pc = 0x1CA64Cu;
            goto label_1ca64c;
        }
    }
    ctx->pc = 0x1CA640u;
    // 0x1ca640: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1ca640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1ca644:
    // 0x1ca644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca648: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1ca648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_1ca64c:
    // 0x1ca64c: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1ca64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca650: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca658: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1ca65c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA65Cu;
    {
        const bool branch_taken_0x1ca65c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA65Cu;
        // 0x1ca660: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca65c) {
            ctx->pc = 0x1CA678u;
            goto label_1ca678;
        }
    }
    ctx->pc = 0x1CA664u;
    // 0x1ca664: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca668: 0x0  nop
    ctx->pc = 0x1ca668u;
    // NOP
    // 0x1ca66c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA670u;
    {
        const bool branch_taken_0x1ca670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca670) {
            ctx->pc = 0x1CA694u;
            goto label_1ca694;
        }
    }
    ctx->pc = 0x1CA678u;
label_1ca678:
    // 0x1ca678: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ca67c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ca67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ca680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca684: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca688: 0x0  nop
    ctx->pc = 0x1ca688u;
    // NOP
    // 0x1ca68c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca690: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ca690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ca694:
    // 0x1ca694: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ca698: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ca69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca6a0: 0x0  nop
    ctx->pc = 0x1ca6a0u;
    // NOP
    // 0x1ca6a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ca6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ca6a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca6ac: 0x0  nop
    ctx->pc = 0x1ca6acu;
    // NOP
    // 0x1ca6b0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA6B0u;
    {
        const bool branch_taken_0x1ca6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6B0u;
        // 0x1ca6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6b0) {
            ctx->pc = 0x1CA708u;
            goto label_1ca708;
        }
    }
    ctx->pc = 0x1CA6B8u;
    // 0x1ca6b8: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA6B8u;
    SET_GPR_U32(ctx, 31, 0x1CA6C0u);
    ctx->pc = 0x1CA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6B8u;
    // 0x1ca6bc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA6B8u, 0x1CA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6C0u;
label_1ca6c0:
    // 0x1ca6c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA6C0u;
    {
        const bool branch_taken_0x1ca6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6C0u;
        // 0x1ca6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6c0) {
            ctx->pc = 0x1CA6D8u;
            goto label_1ca6d8;
        }
    }
    ctx->pc = 0x1CA6C8u;
    // 0x1ca6c8: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA6C8u;
    SET_GPR_U32(ctx, 31, 0x1CA6D0u);
    ctx->pc = 0x1CA6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6C8u;
    // 0x1ca6cc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA6C8u, 0x1CA6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6D0u;
label_1ca6d0:
    // 0x1ca6d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA6D0u;
    {
        const bool branch_taken_0x1ca6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6D0u;
        // 0x1ca6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6d0) {
            ctx->pc = 0x1CA708u;
            goto label_1ca708;
        }
    }
    ctx->pc = 0x1CA6D8u;
label_1ca6d8:
    // 0x1ca6d8: 0xc0f752e  jal         func_3DD4B8
    ctx->pc = 0x1CA6D8u;
    SET_GPR_U32(ctx, 31, 0x1CA6E0u);
    ctx->pc = 0x1CA6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6D8u;
    // 0x1ca6dc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4B8u, 0x1CA6D8u, 0x1CA6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6E0u;
label_1ca6e0:
    // 0x1ca6e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA6E0u;
    {
        const bool branch_taken_0x1ca6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6E0u;
        // 0x1ca6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6e0) {
            ctx->pc = 0x1CA6FCu;
            goto label_1ca6fc;
        }
    }
    ctx->pc = 0x1CA6E8u;
    // 0x1ca6e8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ca6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca6ec: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA6ECu;
    SET_GPR_U32(ctx, 31, 0x1CA6F4u);
    ctx->pc = 0x1CA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6ECu;
    // 0x1ca6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA6ECu, 0x1CA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6F4u;
label_1ca6f4:
    // 0x1ca6f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA6F4u;
    {
        const bool branch_taken_0x1ca6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6F4u;
        // 0x1ca6f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6f4) {
            ctx->pc = 0x1CA70Cu;
            goto label_1ca70c;
        }
    }
    ctx->pc = 0x1CA6FCu;
label_1ca6fc:
    // 0x1ca6fc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1ca6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ca700: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA700u;
    SET_GPR_U32(ctx, 31, 0x1CA708u);
    ctx->pc = 0x1CA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA700u;
    // 0x1ca704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA700u, 0x1CA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA708u;
label_1ca708:
    // 0x1ca708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca70c:
    // 0x1ca70c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca714: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA714u;
        // 0x1ca718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA71Cu;
    // 0x1ca71c: 0x0  nop
    ctx->pc = 0x1ca71cu;
    // NOP
    ctx->pc = 0x1ca720u;
}
