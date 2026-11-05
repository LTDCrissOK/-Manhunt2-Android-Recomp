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

// Function: sub_0036B6E0
// Address: 0x36b6e0 - 0x36b800
void sub_0036B6E0_0x36b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B6E0_0x36b6e0");
#endif

    switch (ctx->pc) {
        case 0x36b720u: goto label_36b720;
        case 0x36b758u: goto label_36b758;
        case 0x36b77cu: goto label_36b77c;
        case 0x36b7a8u: goto label_36b7a8;
        default: break;
    }

    ctx->pc = 0x36b6e0u;

    // 0x36b6e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36b6ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x36b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36b6f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36b6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36b6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36b6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b700: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36b700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36b704: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36b704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b708: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36b708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36b70c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x36b710: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x36b710u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36b714: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x36b714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36b718: 0xc0db190  jal         func_36C640
    ctx->pc = 0x36B718u;
    SET_GPR_U32(ctx, 31, 0x36B720u);
    ctx->pc = 0x36B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B718u;
    // 0x36b71c: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x36B718u, 0x36B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B720u;
label_36b720:
    // 0x36b720: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x36b720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36b724: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36b728: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x36b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x36b72c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x36b72cu;
    { uint32_t bits = FAST_READ32(0x6BAC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b730: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x36b730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36b734: 0x0  nop
    ctx->pc = 0x36b734u;
    // NOP
    // 0x36b738: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x36B738u;
    {
        const bool branch_taken_0x36b738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B738u;
        // 0x36b73c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b738) {
            ctx->pc = 0x36B7BCu;
            goto label_36b7bc;
        }
    }
    ctx->pc = 0x36B740u;
    // 0x36b740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36b744: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x36b744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x36b748: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x36b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x36b74c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x36b74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x36b750: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x36b750u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x36b754: 0xc68e000c  lwc1        $f14, 0xC($s4)
    ctx->pc = 0x36b754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_36b758:
    // 0x36b758: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36b758u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36b75c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x36b75cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x36b760: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36b760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36b764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b76c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36b770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b774: 0xc0da8ea  jal         func_36A3A8
    ctx->pc = 0x36B774u;
    SET_GPR_U32(ctx, 31, 0x36B77Cu);
    ctx->pc = 0x36B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B774u;
    // 0x36b778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x36B774u, 0x36B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B77Cu;
label_36b77c:
    // 0x36b77c: 0x4617a340  add.s       $f13, $f20, $f23
    ctx->pc = 0x36b77cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x36b780: 0xc68e000c  lwc1        $f14, 0xC($s4)
    ctx->pc = 0x36b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36b784: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36b784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36b788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b78c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b790: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b794: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36b794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b798: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x36b798u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x36b79c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36b79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7a0: 0xc0da8ea  jal         func_36A3A8
    ctx->pc = 0x36B7A0u;
    SET_GPR_U32(ctx, 31, 0x36B7A8u);
    ctx->pc = 0x36B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7A0u;
    // 0x36b7a4: 0x4616a500  add.s       $f20, $f20, $f22 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x36B7A0u, 0x36B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B7A8u;
label_36b7a8:
    // 0x36b7a8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x36b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b7ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x36b7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36b7b0: 0x0  nop
    ctx->pc = 0x36b7b0u;
    // NOP
    // 0x36b7b4: 0x4503ffe8  bc1tl       . + 4 + (-0x18 << 2)
    ctx->pc = 0x36B7B4u;
    {
        const bool branch_taken_0x36b7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36b7b4) {
            ctx->pc = 0x36B7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B7B4u;
            // 0x36b7b8: 0xc68e000c  lwc1        $f14, 0xC($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b758;
        }
    }
    ctx->pc = 0x36B7BCu;
label_36b7bc:
    // 0x36b7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b7c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36b7c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b7c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36b7c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b7cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36b7ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b7d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36b7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36b7d4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x36b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36b7d8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x36b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36b7dc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x36b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36b7e0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36b7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7E4u;
        // 0x36b7e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B7ECu;
    // 0x36b7ec: 0x0  nop
    ctx->pc = 0x36b7ecu;
    // NOP
    // 0x36b7f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36b7f4: 0x0  nop
    ctx->pc = 0x36b7f4u;
    // NOP
    // 0x36b7f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36b7fc: 0x0  nop
    ctx->pc = 0x36b7fcu;
    // NOP
    ctx->pc = 0x36b800u;
}
