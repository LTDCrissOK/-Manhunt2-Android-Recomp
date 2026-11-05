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

// Function: sub_003E2B10
// Address: 0x3e2b10 - 0x3e2bf0
void sub_003E2B10_0x3e2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2B10_0x3e2b10");
#endif

    switch (ctx->pc) {
        case 0x3e2b70u: goto label_3e2b70;
        case 0x3e2bc0u: goto label_3e2bc0;
        default: break;
    }

    ctx->pc = 0x3e2b10u;

    // 0x3e2b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e2b14: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3e2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3e2b18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3e2b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3e2b1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e2b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e2b20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e2b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b24: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3e2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3e2b28: 0xb42823  subu        $a1, $a1, $s4
    ctx->pc = 0x3e2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3e2b2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e2b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3e2b30: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3e2b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e2b34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3e2b38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3e2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3e2b3c: 0x59883  sra         $s3, $a1, 2
    ctx->pc = 0x3e2b3cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 2));
    // 0x3e2b40: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x3e2b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2b44: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E2B44u;
    {
        const bool branch_taken_0x3e2b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B44u;
        // 0x3e2b48: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b44) {
            ctx->pc = 0x3E2BD0u;
            goto label_3e2bd0;
        }
    }
    ctx->pc = 0x3E2B4Cu;
    // 0x3e2b4c: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x3e2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x3e2b50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e2b54: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e2b58: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x3e2b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3e2b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e2b60: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x3e2b60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e2b64: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x3e2b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2b68: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x3e2b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3e2b6c: 0x0  nop
    ctx->pc = 0x3e2b6cu;
    // NOP
label_3e2b70:
    // 0x3e2b70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e2b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2b7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e2b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2b84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e2b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3e2b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e2b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2b90: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3e2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2b94: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3e2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3e2b98: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2b9c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3e2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2ba0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2ba4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3e2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2ba8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3e2ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2bac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3e2bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2bb0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3e2bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3e2bb4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3e2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2bb8: 0xc0f8a44  jal         func_3E2910
    ctx->pc = 0x3E2BB8u;
    SET_GPR_U32(ctx, 31, 0x3E2BC0u);
    ctx->pc = 0x3E2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2BB8u;
    // 0x3e2bbc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2910u, 0x3E2BB8u, 0x3E2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2BC0u;
label_3e2bc0:
    // 0x3e2bc0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2BC0u;
    {
        const bool branch_taken_0x3e2bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BC0u;
        // 0x3e2bc4: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bc0) {
            ctx->pc = 0x3E2BD0u;
            goto label_3e2bd0;
        }
    }
    ctx->pc = 0x3E2BC8u;
    // 0x3e2bc8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x3E2BC8u;
    {
        const bool branch_taken_0x3e2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BC8u;
        // 0x3e2bcc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bc8) {
            ctx->pc = 0x3E2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2b70;
        }
    }
    ctx->pc = 0x3E2BD0u;
label_3e2bd0:
    // 0x3e2bd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e2bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2bd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e2bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e2bd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3e2bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2bdc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3e2bdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e2be0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3e2be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2be4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3e2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3e2be8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BE8u;
        // 0x3e2bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2BF0u;
}
