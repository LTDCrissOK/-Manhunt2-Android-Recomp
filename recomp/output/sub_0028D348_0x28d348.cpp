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

// Function: sub_0028D348
// Address: 0x28d348 - 0x28d3f8
void sub_0028D348_0x28d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D348_0x28d348");
#endif

    switch (ctx->pc) {
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3d0u: goto label_28d3d0;
        default: break;
    }

    ctx->pc = 0x28d348u;

    // 0x28d348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d34c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28d350: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x28d350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28d354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d35c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x28d35cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x28d360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28d364: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28D364u;
    {
        const bool branch_taken_0x28d364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D364u;
        // 0x28d368: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d364) {
            ctx->pc = 0x28D3D8u;
            goto label_28d3d8;
        }
    }
    ctx->pc = 0x28D36Cu;
    // 0x28d36c: 0x8c860188  lw          $a2, 0x188($a0)
    ctx->pc = 0x28d36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x28d370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d374: 0x908501b8  lbu         $a1, 0x1B8($a0)
    ctx->pc = 0x28d374u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x28d378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d37c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x28d37cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x28d380: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x28d380u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x28d384: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D384u;
    {
        const bool branch_taken_0x28d384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D384u;
        // 0x28d388: 0xa6102b  sltu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d384) {
            ctx->pc = 0x28D3D8u;
            goto label_28d3d8;
        }
    }
    ctx->pc = 0x28D38Cu;
    // 0x28d38c: 0xac800188  sw          $zero, 0x188($a0)
    ctx->pc = 0x28d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 0));
    // 0x28d390: 0xa2300a  movz        $a2, $a1, $v0
    ctx->pc = 0x28d390u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x28d394: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28d398: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x28d398u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28d39c: 0x0  nop
    ctx->pc = 0x28d39cu;
    // NOP
    // 0x28d3a0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x28d3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x28d3a4: 0xc460a7c4  lwc1        $f0, -0x583C($v1)
    ctx->pc = 0x28d3a4u;
    { uint32_t bits = FAST_READ32(0x3FA7C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28d3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d3ac: 0x0  nop
    ctx->pc = 0x28d3acu;
    // NOP
    // 0x28d3b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28D3B0u;
    {
        const bool branch_taken_0x28d3b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d3b0) {
            ctx->pc = 0x28D3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3B0u;
            // 0x28d3b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3B8u;
            goto label_28d3b8;
        }
    }
    ctx->pc = 0x28D3B8u;
label_28d3b8:
    // 0x28d3b8: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28d3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d3c0:
    // 0x28d3c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28d3c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d3c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x28d3c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x28d3c8: 0xc0a3576  jal         func_28D5D8
    ctx->pc = 0x28D3C8u;
    SET_GPR_U32(ctx, 31, 0x28D3D0u);
    ctx->pc = 0x28D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3C8u;
    // 0x28d3cc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D5D8u, 0x28D3C8u, 0x28D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3D0u;
label_28d3d0:
    // 0x28d3d0: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D3D0u;
    {
        const bool branch_taken_0x28d3d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3D0u;
        // 0x28d3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3d0) {
            ctx->pc = 0x28D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d3c0;
        }
    }
    ctx->pc = 0x28D3D8u;
label_28d3d8:
    // 0x28d3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d3dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28d3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28d3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d3e4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x28d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28d3e8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x28d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3ECu;
        // 0x28d3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D3F4u;
    // 0x28d3f4: 0x0  nop
    ctx->pc = 0x28d3f4u;
    // NOP
    ctx->pc = 0x28d3f8u;
}
