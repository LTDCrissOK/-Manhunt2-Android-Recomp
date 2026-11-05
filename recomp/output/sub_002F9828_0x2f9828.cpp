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

// Function: sub_002F9828
// Address: 0x2f9828 - 0x2f98b8
void sub_002F9828_0x2f9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9828_0x2f9828");
#endif

    switch (ctx->pc) {
        case 0x2f98acu: goto label_2f98ac;
        default: break;
    }

    ctx->pc = 0x2f9828u;

    // 0x2f9828: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2f9828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f982c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f982cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9830: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2f9830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f9834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9838: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2f9838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f983c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f9840: 0x2442b970  addiu       $v0, $v0, -0x4690
    ctx->pc = 0x2f9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x2f9844: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x2f9844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2f9848: 0xc48c00d0  lwc1        $f12, 0xD0($a0)
    ctx->pc = 0x2f9848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f984c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f9850: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2f9850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9854: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x2f9854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2f9858: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2f9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f985c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F985Cu;
    {
        const bool branch_taken_0x2f985c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F985Cu;
        // 0x2f9860: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f985c) {
            ctx->pc = 0x2F9878u;
            goto label_2f9878;
        }
    }
    ctx->pc = 0x2F9864u;
    // 0x2f9864: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2f9864u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9868: 0x0  nop
    ctx->pc = 0x2f9868u;
    // NOP
    // 0x2f986c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f986cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f9870: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9870u;
    {
        const bool branch_taken_0x2f9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9870) {
            ctx->pc = 0x2F9894u;
            goto label_2f9894;
        }
    }
    ctx->pc = 0x2F9878u;
label_2f9878:
    // 0x2f9878: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2f9878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2f987c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2f987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2f9880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f9880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f9884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9888: 0x0  nop
    ctx->pc = 0x2f9888u;
    // NOP
    // 0x2f988c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f988cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f9890: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f9890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f9894:
    // 0x2f9894: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f9894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9898: 0x0  nop
    ctx->pc = 0x2f9898u;
    // NOP
    // 0x2f989c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F989Cu;
    {
        const bool branch_taken_0x2f989c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f989c) {
            ctx->pc = 0x2F98A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F989Cu;
            // 0x2f98a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F98A4u;
label_2f98a4:
    // 0x2f98a4: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x2F98A4u;
    SET_GPR_U32(ctx, 31, 0x2F98ACu);
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2F98A4u, 0x2F98ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F98ACu;
label_2f98ac:
    // 0x2f98ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f98acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f98b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F98B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F98B0u;
        // 0x2f98b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F98B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F98B8u;
}
