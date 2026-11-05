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

// Function: sub_0014B600
// Address: 0x14b600 - 0x14b7c0
void sub_0014B600_0x14b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B600_0x14b600");
#endif

    switch (ctx->pc) {
        case 0x14b650u: goto label_14b650;
        case 0x14b688u: goto label_14b688;
        case 0x14b6f8u: goto label_14b6f8;
        case 0x14b794u: goto label_14b794;
        default: break;
    }

    ctx->pc = 0x14b600u;

    // 0x14b600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14b604: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x14b608: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14b608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b60c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x14b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x14b610: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x14b614: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x14b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x14b618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b61c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x14b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x14b620: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b624: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x14b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x14b628: 0x26250570  addiu       $a1, $s1, 0x570
    ctx->pc = 0x14b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    // 0x14b62c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x14b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x14b630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14b630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b634: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x14b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x14b638: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14b63c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x14b63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x14b640: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14b640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14b644: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14b644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14b648: 0xc041acc  jal         func_106B30
    ctx->pc = 0x14B648u;
    SET_GPR_U32(ctx, 31, 0x14B650u);
    ctx->pc = 0x14B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B648u;
    // 0x14b64c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B30u, 0x14B648u, 0x14B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B650u;
label_14b650:
    // 0x14b650: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b654: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b658: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B658u;
    {
        const bool branch_taken_0x14b658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B658u;
        // 0x14b65c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b658) {
            ctx->pc = 0x14B664u;
            goto label_14b664;
        }
    }
    ctx->pc = 0x14B660u;
    // 0x14b660: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14b664:
    // 0x14b664: 0x5240003b  beql        $s2, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x14B664u;
    {
        const bool branch_taken_0x14b664 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b664) {
            ctx->pc = 0x14B668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B664u;
            // 0x14b668: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B754u;
            goto label_14b754;
        }
    }
    ctx->pc = 0x14B66Cu;
    // 0x14b66c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x14b66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x14b670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14b670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14b674: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14b674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b678: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    // 0x14b67c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x14b67cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x14b680: 0x263305a0  addiu       $s3, $s1, 0x5A0
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x14b684: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_14b688:
    // 0x14b688: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x14b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x14b68c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x14b68cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b690: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14B690u;
    {
        const bool branch_taken_0x14b690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b690) {
            ctx->pc = 0x14B694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B690u;
            // 0x14b694: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B720u;
            goto label_14b720;
        }
    }
    ctx->pc = 0x14B698u;
    // 0x14b698: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x14b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x14b69c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B69Cu;
    {
        const bool branch_taken_0x14b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B69Cu;
        // 0x14b6a0: 0xc6a1a568  lwc1        $f1, -0x5A98($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b69c) {
            ctx->pc = 0x14B6A8u;
            goto label_14b6a8;
        }
    }
    ctx->pc = 0x14B6A4u;
    // 0x14b6a4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x14b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b6a8:
    // 0x14b6a8: 0xc68089d0  lwc1        $f0, -0x7630($s4)
    ctx->pc = 0x14b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b6b0: 0x0  nop
    ctx->pc = 0x14b6b0u;
    // NOP
    // 0x14b6b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14B6B4u;
    {
        const bool branch_taken_0x14b6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b6b4) {
            ctx->pc = 0x14B6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B6B4u;
            // 0x14b6b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B6BCu;
            goto label_14b6bc;
        }
    }
    ctx->pc = 0x14B6BCu;
label_14b6bc:
    // 0x14b6bc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14B6BCu;
    {
        const bool branch_taken_0x14b6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6BCu;
        // 0x14b6c0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6bc) {
            ctx->pc = 0x14B71Cu;
            goto label_14b71c;
        }
    }
    ctx->pc = 0x14B6C4u;
    // 0x14b6c4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x14b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b6c8: 0x26250570  addiu       $a1, $s1, 0x570
    ctx->pc = 0x14b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    // 0x14b6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14b6d4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x14b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b6d8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x14b6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14b6dc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x14b6dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x14b6e0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x14b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b6e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14b6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14b6e8: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x14b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b6ec: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x14b6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14b6f0: 0xc041032  jal         func_1040C8
    ctx->pc = 0x14B6F0u;
    SET_GPR_U32(ctx, 31, 0x14B6F8u);
    ctx->pc = 0x14B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B6F0u;
    // 0x14b6f4: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x14B6F0u, 0x14B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6F8u;
label_14b6f8:
    // 0x14b6f8: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x14b6f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x14b6fc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B6FCu;
    {
        const bool branch_taken_0x14b6fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6FCu;
        // 0x14b700: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6fc) {
            ctx->pc = 0x14B720u;
            goto label_14b720;
        }
    }
    ctx->pc = 0x14B704u;
    // 0x14b704: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b708: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14b70c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x14b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x14b710: 0x92230620  lbu         $v1, 0x620($s1)
    ctx->pc = 0x14b710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b718: 0xa2230620  sb          $v1, 0x620($s1)
    ctx->pc = 0x14b718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 3));
label_14b71c:
    // 0x14b71c: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
label_14b720:
    // 0x14b720: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14b720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14b724: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B724u;
    {
        const bool branch_taken_0x14b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B724u;
        // 0x14b728: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b724) {
            ctx->pc = 0x14B750u;
            goto label_14b750;
        }
    }
    ctx->pc = 0x14B72Cu;
    // 0x14b72c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b730: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B730u;
    {
        const bool branch_taken_0x14b730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B730u;
        // 0x14b734: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b730) {
            ctx->pc = 0x14B748u;
            goto label_14b748;
        }
    }
    ctx->pc = 0x14B738u;
    // 0x14b738: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x14b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14b73c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B73Cu;
    {
        const bool branch_taken_0x14b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B73Cu;
        // 0x14b740: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b73c) {
            ctx->pc = 0x14B748u;
            goto label_14b748;
        }
    }
    ctx->pc = 0x14B744u;
    // 0x14b744: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14b748:
    // 0x14b748: 0x5640ffcf  bnel        $s2, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x14B748u;
    {
        const bool branch_taken_0x14b748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b748) {
            ctx->pc = 0x14B74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B748u;
            // 0x14b74c: 0x8e220560  lw          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b688;
        }
    }
    ctx->pc = 0x14B750u;
label_14b750:
    // 0x14b750: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
label_14b754:
    // 0x14b754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14b754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b758: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B758u;
    {
        const bool branch_taken_0x14b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B758u;
        // 0x14b75c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b758) {
            ctx->pc = 0x14B784u;
            goto label_14b784;
        }
    }
    ctx->pc = 0x14B760u;
    // 0x14b760: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b764: 0x8e240560  lw          $a0, 0x560($s1)
    ctx->pc = 0x14b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x14b768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b76c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14b770: 0xac4405a0  sw          $a0, 0x5A0($v0)
    ctx->pc = 0x14b770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1440), GPR_U32(ctx, 4));
    // 0x14b774: 0x92230620  lbu         $v1, 0x620($s1)
    ctx->pc = 0x14b774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b77c: 0xa2230620  sb          $v1, 0x620($s1)
    ctx->pc = 0x14b77cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b780: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x14b780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14b784:
    // 0x14b784: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B784u;
    {
        const bool branch_taken_0x14b784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B784u;
        // 0x14b788: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b784) {
            ctx->pc = 0x14B798u;
            goto label_14b798;
        }
    }
    ctx->pc = 0x14B78Cu;
    // 0x14b78c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x14B78Cu;
    SET_GPR_U32(ctx, 31, 0x14B794u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x14B78Cu, 0x14B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B794u;
label_14b794:
    // 0x14b794: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x14b794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14b798:
    // 0x14b798: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x14b798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14b79c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x14b79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b7a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x14b7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14b7a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x14b7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b7a8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x14b7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x14b7ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b7b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x14b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7B4u;
        // 0x14b7b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B7BCu;
    // 0x14b7bc: 0x0  nop
    ctx->pc = 0x14b7bcu;
    // NOP
    ctx->pc = 0x14b7c0u;
}
