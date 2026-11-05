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

// Function: sub_00375B50
// Address: 0x375b50 - 0x375c58
void sub_00375B50_0x375b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375B50_0x375b50");
#endif

    switch (ctx->pc) {
        case 0x375c34u: goto label_375c34;
        case 0x375c40u: goto label_375c40;
        default: break;
    }

    ctx->pc = 0x375b50u;

    // 0x375b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375b54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x375b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x375b58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x375b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x375b5c: 0x24438170  addiu       $v1, $v0, -0x7E90
    ctx->pc = 0x375b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x375b60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x375b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x375b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b68: 0xdc448170  ld          $a0, -0x7E90($v0)
    ctx->pc = 0x375b68u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x478170u));
    // 0x375b6c: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x375b6cu;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x478178u));
    // 0x375b70: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x375b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x375b74: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x375b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x375b78: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x375b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x375b7c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x375B7Cu;
    {
        const bool branch_taken_0x375b7c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x375B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B7Cu;
        // 0x375b80: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b7c) {
            ctx->pc = 0x375B98u;
            goto label_375b98;
        }
    }
    ctx->pc = 0x375B84u;
    // 0x375b84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x375b84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b88: 0x0  nop
    ctx->pc = 0x375b88u;
    // NOP
    // 0x375b8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x375b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x375b90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x375B90u;
    {
        const bool branch_taken_0x375b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B90u;
        // 0x375b94: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b90) {
            ctx->pc = 0x375BB8u;
            goto label_375bb8;
        }
    }
    ctx->pc = 0x375B98u;
label_375b98:
    // 0x375b98: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x375b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x375b9c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x375b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x375ba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x375ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375ba8: 0x0  nop
    ctx->pc = 0x375ba8u;
    // NOP
    // 0x375bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x375bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x375bb0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x375bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x375bb4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x375bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_375bb8:
    // 0x375bb8: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x375BB8u;
    {
        const bool branch_taken_0x375bb8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x375BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BB8u;
        // 0x375bbc: 0x61182  srl         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375bb8) {
            ctx->pc = 0x375BD4u;
            goto label_375bd4;
        }
    }
    ctx->pc = 0x375BC0u;
    // 0x375bc0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x375bc0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375bc4: 0x0  nop
    ctx->pc = 0x375bc4u;
    // NOP
    // 0x375bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x375bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x375bcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x375BCCu;
    {
        const bool branch_taken_0x375bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BCCu;
        // 0x375bd0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375bcc) {
            ctx->pc = 0x375BF8u;
            goto label_375bf8;
        }
    }
    ctx->pc = 0x375BD4u;
label_375bd4:
    // 0x375bd4: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x375bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x375bd8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x375bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x375bdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x375be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375be4: 0x0  nop
    ctx->pc = 0x375be4u;
    // NOP
    // 0x375be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x375be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x375bec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x375becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x375bf0: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x375bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x375bf4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x375bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_375bf8:
    // 0x375bf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x375bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x375bfc: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x375bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x375c00: 0x83600  sll         $a2, $t0, 24
    ctx->pc = 0x375c00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x375c04: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x375c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x375c08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x375c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375c0c: 0x52ac2  srl         $a1, $a1, 11
    ctx->pc = 0x375c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 11));
    // 0x375c10: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x375c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x375c14: 0x3a43821  addu        $a3, $sp, $a0
    ctx->pc = 0x375c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x375c18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x375c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x375c1c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x375c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x375c20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x375c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x375c24: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x375c24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x375c28: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x375c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x375c2c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x375C2Cu;
    SET_GPR_U32(ctx, 31, 0x375C34u);
    ctx->pc = 0x375C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C2Cu;
    // 0x375c30: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x375C2Cu, 0x375C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C34u;
label_375c34:
    // 0x375c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c38: 0xc0dd25e  jal         func_374978
    ctx->pc = 0x375C38u;
    SET_GPR_U32(ctx, 31, 0x375C40u);
    ctx->pc = 0x375C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C38u;
    // 0x375c3c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374978u, 0x375C38u, 0x375C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C40u;
label_375c40:
    // 0x375c40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x375c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375c44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x375c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x375c48: 0x3e00008  jr          $ra
    ctx->pc = 0x375C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C48u;
        // 0x375c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C50u;
    // 0x375c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x375c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x375c54: 0x0  nop
    ctx->pc = 0x375c54u;
    // NOP
    ctx->pc = 0x375c58u;
}
