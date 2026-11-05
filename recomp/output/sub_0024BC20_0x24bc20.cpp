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

// Function: sub_0024BC20
// Address: 0x24bc20 - 0x24bcf8
void sub_0024BC20_0x24bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BC20_0x24bc20");
#endif

    switch (ctx->pc) {
        case 0x24bc60u: goto label_24bc60;
        case 0x24bc7cu: goto label_24bc7c;
        case 0x24bc98u: goto label_24bc98;
        case 0x24bca4u: goto label_24bca4;
        case 0x24bcb8u: goto label_24bcb8;
        case 0x24bcc0u: goto label_24bcc0;
        case 0x24bcccu: goto label_24bccc;
        case 0x24bce0u: goto label_24bce0;
        default: break;
    }

    ctx->pc = 0x24bc20u;

    // 0x24bc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24bc24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bc28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24bc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc30: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24bc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24bc34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bc38: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x24bc38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24bc3c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x24bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x24bc40: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24BC40u;
    {
        const bool branch_taken_0x24bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC40u;
        // 0x24bc44: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc40) {
            ctx->pc = 0x24BCCCu;
            goto label_24bccc;
        }
    }
    ctx->pc = 0x24BC48u;
    // 0x24bc48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24bc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24bc4c: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x24bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x24bc50: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x24bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x24bc54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24bc54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24bc58: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x24BC58u;
    SET_GPR_U32(ctx, 31, 0x24BC60u);
    ctx->pc = 0x24BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC58u;
    // 0x24bc5c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x24BC58u, 0x24BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC60u;
label_24bc60:
    // 0x24bc60: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x24bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x24bc64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24bc68: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x24bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x24bc6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24bc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24bc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bc74: 0xc046642  jal         func_119908
    ctx->pc = 0x24BC74u;
    SET_GPR_U32(ctx, 31, 0x24BC7Cu);
    ctx->pc = 0x24BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC74u;
    // 0x24bc78: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x24BC74u, 0x24BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC7Cu;
label_24bc7c:
    // 0x24bc7c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x24bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc80: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x24bc80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc84: 0x0  nop
    ctx->pc = 0x24bc84u;
    // NOP
    // 0x24bc88: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24BC88u;
    {
        const bool branch_taken_0x24bc88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC88u;
        // 0x24bc8c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc88) {
            ctx->pc = 0x24BCACu;
            goto label_24bcac;
        }
    }
    ctx->pc = 0x24BC90u;
    // 0x24bc90: 0xc069b4e  jal         func_1A6D38
    ctx->pc = 0x24BC90u;
    SET_GPR_U32(ctx, 31, 0x24BC98u);
    ctx->pc = 0x24BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC90u;
    // 0x24bc94: 0x24050578  addiu       $a1, $zero, 0x578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D38u, 0x24BC90u, 0x24BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC98u;
label_24bc98:
    // 0x24bc98: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24bc9c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24BC9Cu;
    SET_GPR_U32(ctx, 31, 0x24BCA4u);
    ctx->pc = 0x24BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC9Cu;
    // 0x24bca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24BC9Cu, 0x24BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCA4u;
label_24bca4:
    // 0x24bca4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24BCA4u;
    {
        const bool branch_taken_0x24bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCA4u;
        // 0x24bca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bca4) {
            ctx->pc = 0x24BCD0u;
            goto label_24bcd0;
        }
    }
    ctx->pc = 0x24BCACu;
label_24bcac:
    // 0x24bcac: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x24bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x24bcb0: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x24BCB0u;
    SET_GPR_U32(ctx, 31, 0x24BCB8u);
    ctx->pc = 0x24BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCB0u;
    // 0x24bcb4: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x24BCB0u, 0x24BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCB8u;
label_24bcb8:
    // 0x24bcb8: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x24BCB8u;
    SET_GPR_U32(ctx, 31, 0x24BCC0u);
    ctx->pc = 0x24BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCB8u;
    // 0x24bcbc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x24BCB8u, 0x24BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCC0u;
label_24bcc0:
    // 0x24bcc0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24bcc4: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24BCC4u;
    SET_GPR_U32(ctx, 31, 0x24BCCCu);
    ctx->pc = 0x24BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCC4u;
    // 0x24bcc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24BCC4u, 0x24BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCCCu;
label_24bccc:
    // 0x24bccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24bcd0:
    // 0x24bcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcd4: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x24bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x24bcd8: 0xc09309e  jal         func_24C278
    ctx->pc = 0x24BCD8u;
    SET_GPR_U32(ctx, 31, 0x24BCE0u);
    ctx->pc = 0x24BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCD8u;
    // 0x24bcdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C278u, 0x24BCD8u, 0x24BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCE0u;
label_24bce0:
    // 0x24bce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bcec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x24BCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCF0u;
        // 0x24bcf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BCF8u;
}
