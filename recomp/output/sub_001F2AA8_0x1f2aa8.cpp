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

// Function: sub_001F2AA8
// Address: 0x1f2aa8 - 0x1f2cd8
void sub_001F2AA8_0x1f2aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2AA8_0x1f2aa8");
#endif

    switch (ctx->pc) {
        case 0x1f2b30u: goto label_1f2b30;
        case 0x1f2b80u: goto label_1f2b80;
        case 0x1f2b98u: goto label_1f2b98;
        case 0x1f2bc4u: goto label_1f2bc4;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2bf8u: goto label_1f2bf8;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c54u: goto label_1f2c54;
        case 0x1f2cacu: goto label_1f2cac;
        default: break;
    }

    ctx->pc = 0x1f2aa8u;

    // 0x1f2aa8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1f2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1f2aac: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f2ab0: 0x90a39288  lbu         $v1, -0x6D78($a1)
    ctx->pc = 0x1f2ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9288u));
    // 0x1f2ab4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f2ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2abc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f2abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f2ac0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f2ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f2ac4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f2ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2ac8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f2ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f2acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ad0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f2ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f2ad4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f2ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ad8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f2ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f2adc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f2adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ae0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f2ae4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1f2ae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1f2ae8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1f2ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f2aec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f2aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af4: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f2af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2AF8u;
    {
        const bool branch_taken_0x1f2af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AF8u;
        // 0x1f2afc: 0xa0a39288  sb          $v1, -0x6D78($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294939272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2af8) {
            ctx->pc = 0x1F2B08u;
            goto label_1f2b08;
        }
    }
    ctx->pc = 0x1F2B00u;
    // 0x1f2b00: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1f2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f2b04: 0xa2829288  sb          $v0, -0x6D78($s4)
    ctx->pc = 0x1f2b04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294939272), (uint8_t)GPR_U32(ctx, 2));
label_1f2b08:
    // 0x1f2b08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f2b0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f2b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2b10: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x1f2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1f2b14: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f2b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f2b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2b1c: 0x0  nop
    ctx->pc = 0x1f2b1cu;
    // NOP
    // 0x1f2b20: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
    ctx->pc = 0x1F2B20u;
    {
        const bool branch_taken_0x1f2b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2b20) {
            ctx->pc = 0x1F2B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2B20u;
            // 0x1f2b24: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2CB0u;
            goto label_1f2cb0;
        }
    }
    ctx->pc = 0x1F2B28u;
    // 0x1f2b28: 0xc0ba690  jal         func_2E9A40
    ctx->pc = 0x1F2B28u;
    SET_GPR_U32(ctx, 31, 0x1F2B30u);
    ctx->pc = 0x2E9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A40u, 0x1F2B28u, 0x1F2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B30u;
label_1f2b30:
    // 0x1f2b30: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2B30u;
    {
        const bool branch_taken_0x1f2b30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B30u;
        // 0x1f2b34: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b30) {
            ctx->pc = 0x1F2B48u;
            goto label_1f2b48;
        }
    }
    ctx->pc = 0x1F2B38u;
    // 0x1f2b38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f2b3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f2b40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2B40u;
    {
        const bool branch_taken_0x1f2b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B40u;
        // 0x1f2b44: 0x2442ba68  addiu       $v0, $v0, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b40) {
            ctx->pc = 0x1F2B58u;
            goto label_1f2b58;
        }
    }
    ctx->pc = 0x1F2B48u;
label_1f2b48:
    // 0x1f2b48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f2b4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f2b50: 0x2442ba68  addiu       $v0, $v0, -0x4598
    ctx->pc = 0x1f2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949480));
    // 0x1f2b54: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f2b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1f2b58:
    // 0x1f2b58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2b5c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f2b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2b60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2b64: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f2b68: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f2b6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2b70: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f2b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f2b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2b78: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F2B78u;
    SET_GPR_U32(ctx, 31, 0x1F2B80u);
    ctx->pc = 0x1F2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B78u;
    // 0x1f2b7c: 0xa20200fc  sb          $v0, 0xFC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F2B78u, 0x1F2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B80u;
label_1f2b80:
    // 0x1f2b80: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1f2b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2b84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f2b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2b88: 0x0  nop
    ctx->pc = 0x1f2b88u;
    // NOP
    // 0x1f2b8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f2b90: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1F2B90u;
    SET_GPR_U32(ctx, 31, 0x1F2B98u);
    ctx->pc = 0x1F2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B90u;
    // 0x1f2b94: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1F2B90u, 0x1F2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B98u;
label_1f2b98:
    // 0x1f2b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f2ba0: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f2ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f2ba4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f2ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f2ba8: 0x0  nop
    ctx->pc = 0x1f2ba8u;
    // NOP
    // 0x1f2bac: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f2bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f2bb0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2BB0u;
    {
        const bool branch_taken_0x1f2bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BB0u;
        // 0x1f2bb4: 0x4615ad02  mul.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bb0) {
            ctx->pc = 0x1F2BE4u;
            goto label_1f2be4;
        }
    }
    ctx->pc = 0x1F2BB8u;
    // 0x1f2bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bbc: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F2BBCu;
    SET_GPR_U32(ctx, 31, 0x1F2BC4u);
    ctx->pc = 0x1F2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BBCu;
    // 0x1f2bc0: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F2BBCu, 0x1F2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BC4u;
label_1f2bc4:
    // 0x1f2bc4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f2bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2bc8: 0x0  nop
    ctx->pc = 0x1f2bc8u;
    // NOP
    // 0x1f2bcc: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x1F2BCCu;
    {
        const bool branch_taken_0x1f2bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BCCu;
        // 0x1f2bd0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bcc) {
            ctx->pc = 0x1F2CACu;
            goto label_1f2cac;
        }
    }
    ctx->pc = 0x1F2BD4u;
    // 0x1f2bd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bd8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f2bd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f2bdc: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F2BDCu;
    SET_GPR_U32(ctx, 31, 0x1F2BE4u);
    ctx->pc = 0x1F2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BDCu;
    // 0x1f2be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F2BDCu, 0x1F2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BE4u;
label_1f2be4:
    // 0x1f2be4: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f2be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bec: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f2becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f2bf0: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F2BF0u;
    SET_GPR_U32(ctx, 31, 0x1F2BF8u);
    ctx->pc = 0x1F2BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BF0u;
    // 0x1f2bf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F2BF0u, 0x1F2BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BF8u;
label_1f2bf8:
    // 0x1f2bf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2bfc: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F2BFCu;
    {
        const bool branch_taken_0x1f2bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BFCu;
        // 0x1f2c00: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bfc) {
            ctx->pc = 0x1F2CACu;
            goto label_1f2cac;
        }
    }
    ctx->pc = 0x1F2C04u;
    // 0x1f2c04: 0x92839288  lbu         $v1, -0x6D78($s4)
    ctx->pc = 0x1f2c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294939272)));
    // 0x1f2c08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2c0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c14: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1f2c18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2c1c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f2c20: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f2c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f2c24: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x1f2c24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2c28: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1f2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1f2c2c: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1F2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C34u);
    ctx->pc = 0x1F2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C2Cu;
    // 0x1f2c30: 0xae050104  sw          $a1, 0x104($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1F2C2Cu, 0x1F2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C34u;
label_1f2c34:
    // 0x1f2c34: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f2c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c3c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1f2c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1f2c40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f2c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f2c44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2c48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f2c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2c4c: 0xc07dd88  jal         func_1F7620
    ctx->pc = 0x1F2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C54u);
    ctx->pc = 0x1F2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C4Cu;
    // 0x1f2c50: 0xe6010108  swc1        $f1, 0x108($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7620u, 0x1F2C4Cu, 0x1F2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C54u;
label_1f2c54:
    // 0x1f2c54: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f2c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f2c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f2c60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2c64: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1f2c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f2c68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f2c68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2c6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2c70: 0xa211011c  sb          $s1, 0x11C($s0)
    ctx->pc = 0x1f2c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f2c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c78: 0xe6150120  swc1        $f21, 0x120($s0)
    ctx->pc = 0x1f2c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f2c7c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f2c80: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f2c84: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f2c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2c88: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f2c8c: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1f2c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1f2c90: 0xae050150  sw          $a1, 0x150($s0)
    ctx->pc = 0x1f2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 5));
    // 0x1f2c94: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1f2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1f2c98: 0xe602016c  swc1        $f2, 0x16C($s0)
    ctx->pc = 0x1f2c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f2c9c: 0xa2030170  sb          $v1, 0x170($s0)
    ctx->pc = 0x1f2c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2ca0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f2ca4: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F2CA4u;
    SET_GPR_U32(ctx, 31, 0x1F2CACu);
    ctx->pc = 0x1F2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CA4u;
    // 0x1f2ca8: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F2CA4u, 0x1F2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CACu;
label_1f2cac:
    // 0x1f2cac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f2cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2cb0:
    // 0x1f2cb0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f2cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2cb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f2cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2cb8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f2cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f2cbc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f2cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2cc0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f2cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f2cc4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1f2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f2cc8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f2cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f2ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CCCu;
        // 0x1f2cd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2CD4u;
    // 0x1f2cd4: 0x0  nop
    ctx->pc = 0x1f2cd4u;
    // NOP
    ctx->pc = 0x1f2cd8u;
}
