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

// Function: sub_002BBCD8
// Address: 0x2bbcd8 - 0x2bbfc8
void sub_002BBCD8_0x2bbcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBCD8_0x2bbcd8");
#endif

    switch (ctx->pc) {
        case 0x2bbd28u: goto label_2bbd28;
        case 0x2bbd50u: goto label_2bbd50;
        case 0x2bbd68u: goto label_2bbd68;
        case 0x2bbd80u: goto label_2bbd80;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbdc8u: goto label_2bbdc8;
        case 0x2bbdd8u: goto label_2bbdd8;
        case 0x2bbdf0u: goto label_2bbdf0;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf90u: goto label_2bbf90;
        default: break;
    }

    ctx->pc = 0x2bbcd8u;

    // 0x2bbcd8: 0x27bdfa00  addiu       $sp, $sp, -0x600
    ctx->pc = 0x2bbcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965760));
    // 0x2bbcdc: 0xffb105a8  sd          $s1, 0x5A8($sp)
    ctx->pc = 0x2bbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1448), GPR_U64(ctx, 17));
    // 0x2bbce0: 0xffb205b0  sd          $s2, 0x5B0($sp)
    ctx->pc = 0x2bbce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1456), GPR_U64(ctx, 18));
    // 0x2bbce4: 0xffb005a0  sd          $s0, 0x5A0($sp)
    ctx->pc = 0x2bbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 16));
    // 0x2bbce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bbce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcec: 0xffb305b8  sd          $s3, 0x5B8($sp)
    ctx->pc = 0x2bbcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1464), GPR_U64(ctx, 19));
    // 0x2bbcf0: 0xffb405c0  sd          $s4, 0x5C0($sp)
    ctx->pc = 0x2bbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1472), GPR_U64(ctx, 20));
    // 0x2bbcf4: 0xffb505c8  sd          $s5, 0x5C8($sp)
    ctx->pc = 0x2bbcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1480), GPR_U64(ctx, 21));
    // 0x2bbcf8: 0xffb605d0  sd          $s6, 0x5D0($sp)
    ctx->pc = 0x2bbcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 22));
    // 0x2bbcfc: 0xffb705d8  sd          $s7, 0x5D8($sp)
    ctx->pc = 0x2bbcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1496), GPR_U64(ctx, 23));
    // 0x2bbd00: 0xffbe05e0  sd          $fp, 0x5E0($sp)
    ctx->pc = 0x2bbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1504), GPR_U64(ctx, 30));
    // 0x2bbd04: 0xffbf05e8  sd          $ra, 0x5E8($sp)
    ctx->pc = 0x2bbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1512), GPR_U64(ctx, 31));
    // 0x2bbd08: 0xe7b505f8  swc1        $f21, 0x5F8($sp)
    ctx->pc = 0x2bbd08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1528), bits); }
    // 0x2bbd0c: 0xe7b405f0  swc1        $f20, 0x5F0($sp)
    ctx->pc = 0x2bbd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1520), bits); }
    // 0x2bbd10: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2bbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2bbd14: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2BBD14u;
    {
        const bool branch_taken_0x2bbd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD14u;
        // 0x2bbd18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd14) {
            ctx->pc = 0x2BBF90u;
            goto label_2bbf90;
        }
    }
    ctx->pc = 0x2BBD1Cu;
    // 0x2bbd1c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2bbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bbd20: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2BBD20u;
    SET_GPR_U32(ctx, 31, 0x2BBD28u);
    ctx->pc = 0x2BBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD20u;
    // 0x2bbd24: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2BBD20u, 0x2BBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD28u;
label_2bbd28:
    // 0x2bbd28: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bbd2c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBD2Cu;
    {
        const bool branch_taken_0x2bbd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD2Cu;
        // 0x2bbd30: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd2c) {
            ctx->pc = 0x2BBD70u;
            goto label_2bbd70;
        }
    }
    ctx->pc = 0x2BBD34u;
    // 0x2bbd34: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x2bbd34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2bbd38: 0x2610b3e8  addiu       $s0, $s0, -0x4C18
    ctx->pc = 0x2bbd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947816));
    // 0x2bbd3c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bbd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bbd40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbd44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bbd48: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2BBD48u;
    SET_GPR_U32(ctx, 31, 0x2BBD50u);
    ctx->pc = 0x2BBD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD48u;
    // 0x2bbd4c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2BBD48u, 0x2BBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD50u;
label_2bbd50:
    // 0x2bbd50: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bbd54: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bbd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bbd58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bbd5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2bbd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2bbd60: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2BBD60u;
    SET_GPR_U32(ctx, 31, 0x2BBD68u);
    ctx->pc = 0x2BBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD60u;
    // 0x2bbd64: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2BBD60u, 0x2BBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD68u;
label_2bbd68:
    // 0x2bbd68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BBD68u;
    {
        const bool branch_taken_0x2bbd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD68u;
        // 0x2bbd6c: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd68) {
            ctx->pc = 0x2BBD90u;
            goto label_2bbd90;
        }
    }
    ctx->pc = 0x2BBD70u;
label_2bbd70:
    // 0x2bbd70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bbd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bbd74: 0x2602b3e8  addiu       $v0, $s0, -0x4C18
    ctx->pc = 0x2bbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947816));
    // 0x2bbd78: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2BBD78u;
    SET_GPR_U32(ctx, 31, 0x2BBD80u);
    ctx->pc = 0x2BBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD78u;
    // 0x2bbd7c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2BBD78u, 0x2BBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD80u;
label_2bbd80:
    // 0x2bbd80: 0x8e05b3e8  lw          $a1, -0x4C18($s0)
    ctx->pc = 0x2bbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947816)));
    // 0x2bbd84: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2BBD84u;
    SET_GPR_U32(ctx, 31, 0x2BBD8Cu);
    ctx->pc = 0x2BBD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD84u;
    // 0x2bbd88: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2BBD84u, 0x2BBD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD8Cu;
label_2bbd8c:
    // 0x2bbd8c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2bbd90:
    // 0x2bbd90: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x2bbd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2bbd94: 0xc4416830  lwc1        $f1, 0x6830($v0)
    ctx->pc = 0x2bbd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbd98: 0x24426830  addiu       $v0, $v0, 0x6830
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
    // 0x2bbd9c: 0x24760040  addiu       $s6, $v1, 0x40
    ctx->pc = 0x2bbd9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2bbda0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bbda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbda4: 0xafa00590  sw          $zero, 0x590($sp)
    ctx->pc = 0x2bbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 0));
    // 0x2bbda8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bbda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbdac: 0x0  nop
    ctx->pc = 0x2bbdacu;
    // NOP
    // 0x2bbdb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBDB0u;
    {
        const bool branch_taken_0x2bbdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDB0u;
        // 0x2bbdb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbdb0) {
            ctx->pc = 0x2BBDBCu;
            goto label_2bbdbc;
        }
    }
    ctx->pc = 0x2BBDB8u;
    // 0x2bbdb8: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2bbdb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2bbdbc:
    // 0x2bbdbc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2bbdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2bbdc0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BBDC0u;
    SET_GPR_U32(ctx, 31, 0x2BBDC8u);
    ctx->pc = 0x2BBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDC0u;
    // 0x2bbdc4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BBDC0u, 0x2BBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDC8u;
label_2bbdc8:
    // 0x2bbdc8: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2bbdcc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2bbdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bbdd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BBDD0u;
    SET_GPR_U32(ctx, 31, 0x2BBDD8u);
    ctx->pc = 0x2BBDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDD0u;
    // 0x2bbdd4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BBDD0u, 0x2BBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDD8u;
label_2bbdd8:
    // 0x2bbdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbddc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bbddcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bbde0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bbde0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bbde4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bbde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbde8: 0xc0af994  jal         func_2BE650
    ctx->pc = 0x2BBDE8u;
    SET_GPR_U32(ctx, 31, 0x2BBDF0u);
    ctx->pc = 0x2BBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDE8u;
    // 0x2bbdec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE650u, 0x2BBDE8u, 0x2BBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDF0u;
label_2bbdf0:
    // 0x2bbdf0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2bbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2bbdf4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2bbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbdf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbdfc: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x2bbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2bbe00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbe04: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BBE04u;
    {
        const bool branch_taken_0x2bbe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bbe04) {
            ctx->pc = 0x2BBE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBE04u;
            // 0x2bbe08: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBE64u;
            goto label_2bbe64;
        }
    }
    ctx->pc = 0x2BBE0Cu;
    // 0x2bbe0c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2bbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2bbe10: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2BBE10u;
    {
        const bool branch_taken_0x2bbe10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE10u;
        // 0x2bbe14: 0xafa40590  sw          $a0, 0x590($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe10) {
            ctx->pc = 0x2BBF90u;
            goto label_2bbf90;
        }
    }
    ctx->pc = 0x2BBE18u;
    // 0x2bbe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bbe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe1c: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x2BBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE24u);
    ctx->pc = 0x2BBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE1Cu;
    // 0x2bbe20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x2BBE1Cu, 0x2BBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE24u;
label_2bbe24:
    // 0x2bbe24: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x2bbe24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2bbe28: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2BBE28u;
    {
        const bool branch_taken_0x2bbe28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE28u;
        // 0x2bbe2c: 0x8fa20590  lw          $v0, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe28) {
            ctx->pc = 0x2BBF80u;
            goto label_2bbf80;
        }
    }
    ctx->pc = 0x2BBE30u;
    // 0x2bbe30: 0x8fa50590  lw          $a1, 0x590($sp)
    ctx->pc = 0x2bbe30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2bbe34: 0x0  nop
    ctx->pc = 0x2bbe34u;
    // NOP
label_2bbe38:
    // 0x2bbe38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bbe3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bbe40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bbe44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bbe44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe48: 0xc0f90b4  jal         func_3E42D0
    ctx->pc = 0x2BBE48u;
    SET_GPR_U32(ctx, 31, 0x2BBE50u);
    ctx->pc = 0x2BBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE48u;
    // 0x2bbe4c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E42D0u, 0x2BBE48u, 0x2BBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE50u;
label_2bbe50:
    // 0x2bbe50: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2bbe50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbe54: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BBE54u;
    {
        const bool branch_taken_0x2bbe54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE54u;
        // 0x2bbe58: 0x8fa50590  lw          $a1, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe54) {
            ctx->pc = 0x2BBE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbe38;
        }
    }
    ctx->pc = 0x2BBE5Cu;
    // 0x2bbe5c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2BBE5Cu;
    {
        const bool branch_taken_0x2bbe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE5Cu;
        // 0x2bbe60: 0x8fa20590  lw          $v0, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe5c) {
            ctx->pc = 0x2BBF80u;
            goto label_2bbf80;
        }
    }
    ctx->pc = 0x2BBE64u;
label_2bbe64:
    // 0x2bbe64: 0x27b504c0  addiu       $s5, $sp, 0x4C0
    ctx->pc = 0x2bbe64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x2bbe68: 0xafa004cc  sw          $zero, 0x4CC($sp)
    ctx->pc = 0x2bbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1228), GPR_U32(ctx, 0));
    // 0x2bbe6c: 0xafa004c8  sw          $zero, 0x4C8($sp)
    ctx->pc = 0x2bbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 0));
    // 0x2bbe70: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x2bbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
    // 0x2bbe74: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BBE74u;
    {
        const bool branch_taken_0x2bbe74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE74u;
        // 0x2bbe78: 0xafa004c0  sw          $zero, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe74) {
            ctx->pc = 0x2BBF30u;
            goto label_2bbf30;
        }
    }
    ctx->pc = 0x2BBE7Cu;
    // 0x2bbe7c: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x2bbe7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bbe80: 0x241e0040  addiu       $fp, $zero, 0x40
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bbe84: 0x2657000c  addiu       $s7, $s2, 0xC
    ctx->pc = 0x2bbe84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2bbe88:
    // 0x2bbe88: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BBE88u;
    SET_GPR_U32(ctx, 31, 0x2BBE90u);
    ctx->pc = 0x2BBE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE88u;
    // 0x2bbe8c: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BBE88u, 0x2BBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE90u;
label_2bbe90:
    // 0x2bbe90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BBE90u;
    SET_GPR_U32(ctx, 31, 0x2BBE98u);
    ctx->pc = 0x2BBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE90u;
    // 0x2bbe94: 0x27a40570  addiu       $a0, $sp, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BBE90u, 0x2BBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE98u;
label_2bbe98:
    // 0x2bbe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbe9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bbe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbea0: 0xa3a204fc  sb          $v0, 0x4FC($sp)
    ctx->pc = 0x2bbea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1276), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bbea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bbea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbea8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bbea8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bbeac: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2bbeacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2bbeb0: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2bbeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbeb4: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x2bbeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbeb8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2bbeb8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2bbebc: 0xc0afa0e  jal         func_2BE838
    ctx->pc = 0x2BBEBCu;
    SET_GPR_U32(ctx, 31, 0x2BBEC4u);
    ctx->pc = 0x2BBEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEBCu;
    // 0x2bbec0: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE838u, 0x2BBEBCu, 0x2BBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEC4u;
label_2bbec4:
    // 0x2bbec4: 0x83a204fc  lb          $v0, 0x4FC($sp)
    ctx->pc = 0x2bbec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1276)));
    // 0x2bbec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bbecc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2bbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbed0: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2bbed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bbed4: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x2bbed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2bbed8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbedc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bbee0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2bbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bbee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bbee8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2bbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bbeec: 0x147e000c  bne         $v1, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x2BBEECu;
    {
        const bool branch_taken_0x2bbeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x2BBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEECu;
        // 0x2bbef0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbeec) {
            ctx->pc = 0x2BBF20u;
            goto label_2bbf20;
        }
    }
    ctx->pc = 0x2BBEF4u;
    // 0x2bbef4: 0x2e41021  addu        $v0, $s7, $a0
    ctx->pc = 0x2bbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2bbef8: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x2bbef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2bbefc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbf00: 0x27a50590  addiu       $a1, $sp, 0x590
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x2bbf04: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2bbf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bbf08: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2bbf08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bbf0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bbf10: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2bbf10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf14: 0xc0aeff2  jal         func_2BBFC8
    ctx->pc = 0x2BBF14u;
    SET_GPR_U32(ctx, 31, 0x2BBF1Cu);
    ctx->pc = 0x2BBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF14u;
    // 0x2bbf18: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBFC8u, 0x2BBF14u, 0x2BBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF1Cu;
label_2bbf1c:
    // 0x2bbf1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bbf1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbf20:
    // 0x2bbf20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2bbf24: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2bbf24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbf28: 0x1600ffd7  bnez        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2BBF28u;
    {
        const bool branch_taken_0x2bbf28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf28) {
            ctx->pc = 0x2BBE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbe88;
        }
    }
    ctx->pc = 0x2BBF30u;
label_2bbf30:
    // 0x2bbf30: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2bbf30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2bbf34: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2bbf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf38: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x2bbf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bbf3c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2bbf3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbf40:
    // 0x2bbf40: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bbf40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbf44: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBF44u;
    {
        const bool branch_taken_0x2bbf44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF44u;
        // 0x2bbf48: 0x27a50590  addiu       $a1, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf44) {
            ctx->pc = 0x2BBF68u;
            goto label_2bbf68;
        }
    }
    ctx->pc = 0x2BBF4Cu;
    // 0x2bbf4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bbf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbf50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bbf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf54: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2bbf54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bbf58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bbf5c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2bbf5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf60: 0xc0aeff2  jal         func_2BBFC8
    ctx->pc = 0x2BBF60u;
    SET_GPR_U32(ctx, 31, 0x2BBF68u);
    ctx->pc = 0x2BBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF60u;
    // 0x2bbf64: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBFC8u, 0x2BBF60u, 0x2BBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF68u;
label_2bbf68:
    // 0x2bbf68: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2bbf68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2bbf6c: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x2bbf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2bbf70: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2bbf70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2bbf74: 0x661fff2  bgez        $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2BBF74u;
    {
        const bool branch_taken_0x2bbf74 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2BBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF74u;
        // 0x2bbf78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf74) {
            ctx->pc = 0x2BBF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbf40;
        }
    }
    ctx->pc = 0x2BBF7Cu;
    // 0x2bbf7c: 0x8fa20590  lw          $v0, 0x590($sp)
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_2bbf80:
    // 0x2bbf80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBF80u;
    {
        const bool branch_taken_0x2bbf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF80u;
        // 0x2bbf84: 0xdfb005a0  ld          $s0, 0x5A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf80) {
            ctx->pc = 0x2BBF94u;
            goto label_2bbf94;
        }
    }
    ctx->pc = 0x2BBF88u;
    // 0x2bbf88: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x2BBF88u;
    SET_GPR_U32(ctx, 31, 0x2BBF90u);
    ctx->pc = 0x2BBF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF88u;
    // 0x2bbf8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x2BBF88u, 0x2BBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF90u;
label_2bbf90:
    // 0x2bbf90: 0xdfb005a0  ld          $s0, 0x5A0($sp)
    ctx->pc = 0x2bbf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
label_2bbf94:
    // 0x2bbf94: 0xdfb105a8  ld          $s1, 0x5A8($sp)
    ctx->pc = 0x2bbf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1448)));
    // 0x2bbf98: 0xdfb205b0  ld          $s2, 0x5B0($sp)
    ctx->pc = 0x2bbf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2bbf9c: 0xdfb305b8  ld          $s3, 0x5B8($sp)
    ctx->pc = 0x2bbf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1464)));
    // 0x2bbfa0: 0xdfb405c0  ld          $s4, 0x5C0($sp)
    ctx->pc = 0x2bbfa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x2bbfa4: 0xdfb505c8  ld          $s5, 0x5C8($sp)
    ctx->pc = 0x2bbfa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1480)));
    // 0x2bbfa8: 0xdfb605d0  ld          $s6, 0x5D0($sp)
    ctx->pc = 0x2bbfa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2bbfac: 0xdfb705d8  ld          $s7, 0x5D8($sp)
    ctx->pc = 0x2bbfacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1496)));
    // 0x2bbfb0: 0xdfbe05e0  ld          $fp, 0x5E0($sp)
    ctx->pc = 0x2bbfb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x2bbfb4: 0xdfbf05e8  ld          $ra, 0x5E8($sp)
    ctx->pc = 0x2bbfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x2bbfb8: 0xc7b505f8  lwc1        $f21, 0x5F8($sp)
    ctx->pc = 0x2bbfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bbfbc: 0xc7b405f0  lwc1        $f20, 0x5F0($sp)
    ctx->pc = 0x2bbfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bbfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFC0u;
        // 0x2bbfc4: 0x27bd0600  addiu       $sp, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBFC8u;
}
