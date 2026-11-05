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

// Function: sub_00192AB0
// Address: 0x192ab0 - 0x192b70
void sub_00192AB0_0x192ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192AB0_0x192ab0");
#endif

    switch (ctx->pc) {
        case 0x192b24u: goto label_192b24;
        case 0x192b40u: goto label_192b40;
        default: break;
    }

    ctx->pc = 0x192ab0u;

    // 0x192ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192ab4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x192ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192ab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x192ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x192abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ac0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x192ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x192ac4: 0x8e051050  lw          $a1, 0x1050($s0)
    ctx->pc = 0x192ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x192ac8: 0x38a20006  xori        $v0, $a1, 0x6
    ctx->pc = 0x192ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
    // 0x192acc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x192ACCu;
    {
        const bool branch_taken_0x192acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ACCu;
        // 0x192ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192acc) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192AD4u;
    // 0x192ad4: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x192ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x192ad8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x192adc: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x192adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x192ae0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x192ae4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x192AE4u;
    {
        const bool branch_taken_0x192ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x192AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AE4u;
        // 0x192ae8: 0xc4540138  lwc1        $f20, 0x138($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae4) {
            ctx->pc = 0x192B10u;
            goto label_192b10;
        }
    }
    ctx->pc = 0x192AECu;
    // 0x192aec: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x192AECu;
    {
        const bool branch_taken_0x192aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x192aec) {
            ctx->pc = 0x192AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192AECu;
            // 0x192af0: 0x8e021004  lw          $v0, 0x1004($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192B14u;
            goto label_192b14;
        }
    }
    ctx->pc = 0x192AF4u;
    // 0x192af4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x192af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192afc: 0x0  nop
    ctx->pc = 0x192afcu;
    // NOP
    // 0x192b00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x192b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b04: 0x0  nop
    ctx->pc = 0x192b04u;
    // NOP
    // 0x192b08: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B08u;
        // 0x192b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B10u;
label_192b10:
    // 0x192b10: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_192b14:
    // 0x192b14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b18: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x192b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x192b1c: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x192B1Cu;
    SET_GPR_U32(ctx, 31, 0x192B24u);
    ctx->pc = 0x192B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B1Cu;
    // 0x192b20: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x192B1Cu, 0x192B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B24u;
label_192b24:
    // 0x192b24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x192B24u;
    {
        const bool branch_taken_0x192b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B24u;
        // 0x192b28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b24) {
            ctx->pc = 0x192B54u;
            goto label_192b54;
        }
    }
    ctx->pc = 0x192B2Cu;
    // 0x192b2c: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x192b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x192b30: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x192b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x192b34: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x192b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x192b38: 0xc072682  jal         func_1C9A08
    ctx->pc = 0x192B38u;
    SET_GPR_U32(ctx, 31, 0x192B40u);
    ctx->pc = 0x192B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B38u;
    // 0x192b3c: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9A08u, 0x192B38u, 0x192B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B40u;
label_192b40:
    // 0x192b40: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x192b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192b44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b48: 0x0  nop
    ctx->pc = 0x192b48u;
    // NOP
    // 0x192b4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x192B4Cu;
    {
        const bool branch_taken_0x192b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B4Cu;
        // 0x192b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b4c) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B54u;
label_192b54:
    // 0x192b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b58:
    // 0x192b58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x192b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x192b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192b60: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x192b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192b64: 0x3e00008  jr          $ra
    ctx->pc = 0x192B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B64u;
        // 0x192b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B6Cu;
    // 0x192b6c: 0x0  nop
    ctx->pc = 0x192b6cu;
    // NOP
    ctx->pc = 0x192b70u;
}
