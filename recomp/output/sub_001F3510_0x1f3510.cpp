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

// Function: sub_001F3510
// Address: 0x1f3510 - 0x1f36d0
void sub_001F3510_0x1f3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3510_0x1f3510");
#endif

    switch (ctx->pc) {
        case 0x1f3570u: goto label_1f3570;
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35c8u: goto label_1f35c8;
        case 0x1f35e8u: goto label_1f35e8;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3608u: goto label_1f3608;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f36a0u: goto label_1f36a0;
        default: break;
    }

    ctx->pc = 0x1f3510u;

    // 0x1f3510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f3514: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f3514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f3518: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1f3518u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1f351c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f3520: 0x9263928b  lbu         $v1, -0x6D75($s3)
    ctx->pc = 0x1f3520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F928Bu));
    // 0x1f3524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3528: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f352c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3530: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1f3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1f3534: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f3534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f3538: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f3538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f353c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f3540: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f3540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f3548: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f3548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f354c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f354cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f3550: 0x2c420017  sltiu       $v0, $v0, 0x17
    ctx->pc = 0x1f3550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1f3554: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f3554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f3558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3558u;
    {
        const bool branch_taken_0x1f3558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3558u;
        // 0x1f355c: 0xa263928b  sb          $v1, -0x6D75($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294939275), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3558) {
            ctx->pc = 0x1F3568u;
            goto label_1f3568;
        }
    }
    ctx->pc = 0x1F3560u;
    // 0x1f3560: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1f3564: 0xa262928b  sb          $v0, -0x6D75($s3)
    ctx->pc = 0x1f3564u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294939275), (uint8_t)GPR_U32(ctx, 2));
label_1f3568:
    // 0x1f3568: 0xc07ca9e  jal         func_1F2A78
    ctx->pc = 0x1F3568u;
    SET_GPR_U32(ctx, 31, 0x1F3570u);
    ctx->pc = 0x1F356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3568u;
    // 0x1f356c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2A78u, 0x1F3568u, 0x1F3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3570u;
label_1f3570:
    // 0x1f3570: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3574: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F3574u;
    {
        const bool branch_taken_0x1f3574 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3574u;
        // 0x1f3578: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3574) {
            ctx->pc = 0x1F36A0u;
            goto label_1f36a0;
        }
    }
    ctx->pc = 0x1F357Cu;
    // 0x1f357c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f357cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f3580: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1f3580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3584: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f3584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f3588: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f358c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f358cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3590: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3594: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F3594u;
    SET_GPR_U32(ctx, 31, 0x1F359Cu);
    ctx->pc = 0x1F3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3594u;
    // 0x1f3598: 0x26110130  addiu       $s1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F3594u, 0x1F359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F359Cu;
label_1f359c:
    // 0x1f359c: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f359cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f35a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f35a4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f35a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f35a8: 0x0  nop
    ctx->pc = 0x1f35a8u;
    // NOP
    // 0x1f35ac: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f35acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f35b0: 0x93b40028  lbu         $s4, 0x28($sp)
    ctx->pc = 0x1f35b0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f35b4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F35B4u;
    {
        const bool branch_taken_0x1f35b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35B4u;
        // 0x1f35b8: 0x4615ad02  mul.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35b4) {
            ctx->pc = 0x1F35E8u;
            goto label_1f35e8;
        }
    }
    ctx->pc = 0x1F35BCu;
    // 0x1f35bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35c0: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F35C0u;
    SET_GPR_U32(ctx, 31, 0x1F35C8u);
    ctx->pc = 0x1F35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35C0u;
    // 0x1f35c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F35C0u, 0x1F35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35C8u;
label_1f35c8:
    // 0x1f35c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f35c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f35cc: 0x0  nop
    ctx->pc = 0x1f35ccu;
    // NOP
    // 0x1f35d0: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1F35D0u;
    {
        const bool branch_taken_0x1f35d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35D0u;
        // 0x1f35d4: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35d0) {
            ctx->pc = 0x1F36A0u;
            goto label_1f36a0;
        }
    }
    ctx->pc = 0x1F35D8u;
    // 0x1f35d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f35d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f35dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f35e0: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F35E0u;
    SET_GPR_U32(ctx, 31, 0x1F35E8u);
    ctx->pc = 0x1F35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35E0u;
    // 0x1f35e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F35E0u, 0x1F35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35E8u;
label_1f35e8:
    // 0x1f35e8: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f35ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f35ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f35f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f35f4: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F35F4u;
    SET_GPR_U32(ctx, 31, 0x1F35FCu);
    ctx->pc = 0x1F35F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35F4u;
    // 0x1f35f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F35F4u, 0x1F35FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35FCu;
label_1f35fc:
    // 0x1f35fc: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f35fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3600: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F3600u;
    SET_GPR_U32(ctx, 31, 0x1F3608u);
    ctx->pc = 0x1F3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3600u;
    // 0x1f3604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F3600u, 0x1F3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3608u;
label_1f3608:
    // 0x1f3608: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f3608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f360c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f3610: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f3610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f3614: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f361c: 0x0  nop
    ctx->pc = 0x1f361cu;
    // NOP
    // 0x1f3620: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3624: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f3624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3628: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f3628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f362c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f362cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3634: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f3634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3638: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f3638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f363c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f363cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f3640: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f3640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f3644: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f3644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3648: 0x9263928b  lbu         $v1, -0x6D75($s3)
    ctx->pc = 0x1f3648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939275)));
    // 0x1f364c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f3650: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f3650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f3654: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x1f3654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3658: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x1f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x1f365c: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1F365Cu;
    SET_GPR_U32(ctx, 31, 0x1F3664u);
    ctx->pc = 0x1F3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F365Cu;
    // 0x1f3660: 0xae060104  sw          $a2, 0x104($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1F365Cu, 0x1F3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3664u;
label_1f3664:
    // 0x1f3664: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f366c: 0xa214011c  sb          $s4, 0x11C($s0)
    ctx->pc = 0x1f366cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 20));
    // 0x1f3670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3674: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f3674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f3678: 0xe6150120  swc1        $f21, 0x120($s0)
    ctx->pc = 0x1f3678u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f367c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f3680: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f3684: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f3684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3688: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f368c: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1f368cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1f3690: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1f3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1f3694: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f3694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f3698: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F3698u;
    SET_GPR_U32(ctx, 31, 0x1F36A0u);
    ctx->pc = 0x1F369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3698u;
    // 0x1f369c: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F3698u, 0x1F36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36A0u;
label_1f36a0:
    // 0x1f36a0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f36a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f36a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f36a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f36a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f36ac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f36acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f36b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f36b4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1f36b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f36b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f36bc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f36c0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f36c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f36c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F36C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36C4u;
        // 0x1f36c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F36C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F36CCu;
    // 0x1f36cc: 0x0  nop
    ctx->pc = 0x1f36ccu;
    // NOP
    ctx->pc = 0x1f36d0u;
}
