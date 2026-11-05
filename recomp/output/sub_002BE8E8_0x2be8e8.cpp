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

// Function: sub_002BE8E8
// Address: 0x2be8e8 - 0x2be9d8
void sub_002BE8E8_0x2be8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE8E8_0x2be8e8");
#endif

    switch (ctx->pc) {
        case 0x2be934u: goto label_2be934;
        case 0x2be96cu: goto label_2be96c;
        case 0x2be984u: goto label_2be984;
        case 0x2be9a8u: goto label_2be9a8;
        default: break;
    }

    ctx->pc = 0x2be8e8u;

    // 0x2be8e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2be8ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2be8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2be8f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2be8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2be8f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2be8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8f8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2be8f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2be8fc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2be8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2be900: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2be900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2be904: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2be904u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2be908: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2be908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2be90c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2be90cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2be910: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x2be910u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2be914: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be918: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2be918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2be91c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2be91cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2be920: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2be920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2be924: 0x4615b501  sub.s       $f20, $f22, $f21
    ctx->pc = 0x2be924u;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x2be928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be92c: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BE92Cu;
    SET_GPR_U32(ctx, 31, 0x2BE934u);
    ctx->pc = 0x2BE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE92Cu;
    // 0x2be930: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BE92Cu, 0x2BE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE934u;
label_2be934:
    // 0x2be934: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE934u;
    {
        const bool branch_taken_0x2be934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE934u;
        // 0x2be938: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be934) {
            ctx->pc = 0x2BE944u;
            goto label_2be944;
        }
    }
    ctx->pc = 0x2BE93Cu;
    // 0x2be93c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BE93Cu;
    {
        const bool branch_taken_0x2be93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE93Cu;
        // 0x2be940: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be93c) {
            ctx->pc = 0x2BE9A8u;
            goto label_2be9a8;
        }
    }
    ctx->pc = 0x2BE944u;
label_2be944:
    // 0x2be944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be948: 0x0  nop
    ctx->pc = 0x2be948u;
    // NOP
    // 0x2be94c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2be94cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be950: 0x0  nop
    ctx->pc = 0x2be950u;
    // NOP
    // 0x2be954: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2BE954u;
    {
        const bool branch_taken_0x2be954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE954u;
        // 0x2be958: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be954) {
            ctx->pc = 0x2BE994u;
            goto label_2be994;
        }
    }
    ctx->pc = 0x2BE95Cu;
    // 0x2be95c: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x2be95cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    // 0x2be960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be964: 0xc0b014e  jal         func_2C0538
    ctx->pc = 0x2BE964u;
    SET_GPR_U32(ctx, 31, 0x2BE96Cu);
    ctx->pc = 0x2BE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE964u;
    // 0x2be968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0538u, 0x2BE964u, 0x2BE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE96Cu;
label_2be96c:
    // 0x2be96c: 0x4614ab40  add.s       $f13, $f21, $f20
    ctx->pc = 0x2be96cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2be970: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2be970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2be974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be978: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2be978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2be97c: 0xc0b014e  jal         func_2C0538
    ctx->pc = 0x2BE97Cu;
    SET_GPR_U32(ctx, 31, 0x2BE984u);
    ctx->pc = 0x2BE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE97Cu;
    // 0x2be980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0538u, 0x2BE97Cu, 0x2BE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE984u;
label_2be984:
    // 0x2be984: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2be984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be988: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be98c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE98Cu;
    {
        const bool branch_taken_0x2be98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE98Cu;
        // 0x2be990: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be98c) {
            ctx->pc = 0x2BE9ACu;
            goto label_2be9ac;
        }
    }
    ctx->pc = 0x2BE994u;
label_2be994:
    // 0x2be994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be998: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2be998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2be99c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2be99cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2be9a0: 0xc0b014e  jal         func_2C0538
    ctx->pc = 0x2BE9A0u;
    SET_GPR_U32(ctx, 31, 0x2BE9A8u);
    ctx->pc = 0x2BE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9A0u;
    // 0x2be9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0538u, 0x2BE9A0u, 0x2BE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9A8u;
label_2be9a8:
    // 0x2be9a8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2be9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2be9ac:
    // 0x2be9ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2be9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be9b0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2be9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2be9b4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2be9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be9b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2be9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2be9bc: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x2be9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2be9c0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2be9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2be9c4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2be9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be9c8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2be9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9CCu;
        // 0x2be9d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE9D4u;
    // 0x2be9d4: 0x0  nop
    ctx->pc = 0x2be9d4u;
    // NOP
    ctx->pc = 0x2be9d8u;
}
