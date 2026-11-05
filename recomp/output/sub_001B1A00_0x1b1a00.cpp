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

// Function: sub_001B1A00
// Address: 0x1b1a00 - 0x1b1a88
void sub_001B1A00_0x1b1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1A00_0x1b1a00");
#endif

    switch (ctx->pc) {
        case 0x1b1a50u: goto label_1b1a50;
        default: break;
    }

    ctx->pc = 0x1b1a00u;

    // 0x1b1a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1a14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b1a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1a18: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b1a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b1a1c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b1a20: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1b1a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1b1a24: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1A24u;
    {
        const bool branch_taken_0x1b1a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A24u;
        // 0x1b1a28: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a24) {
            ctx->pc = 0x1B1A68u;
            goto label_1b1a68;
        }
    }
    ctx->pc = 0x1B1A2Cu;
    // 0x1b1a2c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1b1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1a30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1a34: 0x0  nop
    ctx->pc = 0x1b1a34u;
    // NOP
    // 0x1b1a38: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b1a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1a3c: 0x0  nop
    ctx->pc = 0x1b1a3cu;
    // NOP
    // 0x1b1a40: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A40u;
    {
        const bool branch_taken_0x1b1a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1a40) {
            ctx->pc = 0x1B1A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A40u;
            // 0x1b1a44: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A54u;
            goto label_1b1a54;
        }
    }
    ctx->pc = 0x1B1A48u;
    // 0x1b1a48: 0xc07575a  jal         func_1D5D68
    ctx->pc = 0x1B1A48u;
    SET_GPR_U32(ctx, 31, 0x1B1A50u);
    ctx->pc = 0x1B1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A48u;
    // 0x1b1a4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D68u, 0x1B1A48u, 0x1B1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A50u;
label_1b1a50:
    // 0x1b1a50: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1b1a54:
    // 0x1b1a54: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b1a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1a58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b1a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1a5c: 0x0  nop
    ctx->pc = 0x1b1a5cu;
    // NOP
    // 0x1b1a60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B1A60u;
    {
        const bool branch_taken_0x1b1a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1a60) {
            ctx->pc = 0x1B1A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A60u;
            // 0x1b1a64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A68u;
            goto label_1b1a68;
        }
    }
    ctx->pc = 0x1B1A68u;
label_1b1a68:
    // 0x1b1a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b1a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a78: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b1a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A7Cu;
        // 0x1b1a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1A84u;
    // 0x1b1a84: 0x0  nop
    ctx->pc = 0x1b1a84u;
    // NOP
    ctx->pc = 0x1b1a88u;
}
