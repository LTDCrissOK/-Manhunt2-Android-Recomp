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

// Function: sub_002018D8
// Address: 0x2018d8 - 0x201970
void sub_002018D8_0x2018d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018D8_0x2018d8");
#endif

    switch (ctx->pc) {
        case 0x2018e8u: goto label_2018e8;
        default: break;
    }

    ctx->pc = 0x2018d8u;

    // 0x2018d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2018dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2018dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2018e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2018e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2018e8:
    // 0x2018e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2018e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2018ec: 0x54480001  bnel        $v0, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2018ECu;
    {
        const bool branch_taken_0x2018ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2018ec) {
            ctx->pc = 0x2018F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2018ECu;
            // 0x2018f0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2018F4u;
            goto label_2018f4;
        }
    }
    ctx->pc = 0x2018F4u;
label_2018f4:
    // 0x2018f4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2018f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2018f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2018f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2018fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2018fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201900: 0x0  nop
    ctx->pc = 0x201900u;
    // NOP
    // 0x201904: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x201904u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201908: 0x0  nop
    ctx->pc = 0x201908u;
    // NOP
    // 0x20190c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20190Cu;
    {
        const bool branch_taken_0x20190c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20190c) {
            ctx->pc = 0x201910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20190Cu;
            // 0x201910: 0xe4c00010  swc1        $f0, 0x10($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x201914u;
            goto label_201914;
        }
    }
    ctx->pc = 0x201914u;
label_201914:
    // 0x201914: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x201914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201918: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x201918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20191c: 0x0  nop
    ctx->pc = 0x20191cu;
    // NOP
    // 0x201920: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x201920u;
    {
        const bool branch_taken_0x201920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201920) {
            ctx->pc = 0x201924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201920u;
            // 0x201924: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x201928u;
            goto label_201928;
        }
    }
    ctx->pc = 0x201928u;
label_201928:
    // 0x201928: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x201928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20192c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20192cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x201930: 0x4e1ffed  bgez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x201930u;
    {
        const bool branch_taken_0x201930 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x201934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201930u;
        // 0x201934: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201930) {
            ctx->pc = 0x2018E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2018e8;
        }
    }
    ctx->pc = 0x201938u;
    // 0x201938: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x20193c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201940: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x201940u;
    {
        const bool branch_taken_0x201940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201940) {
            ctx->pc = 0x201944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201940u;
            // 0x201944: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201948u;
            goto label_201948;
        }
    }
    ctx->pc = 0x201948u;
label_201948:
    // 0x201948: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x201948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20194c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20194cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201950: 0x0  nop
    ctx->pc = 0x201950u;
    // NOP
    // 0x201954: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x201954u;
    {
        const bool branch_taken_0x201954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201954) {
            ctx->pc = 0x201958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201954u;
            // 0x201958: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20195Cu;
            goto label_20195c;
        }
    }
    ctx->pc = 0x20195Cu;
label_20195c:
    // 0x20195c: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x20195cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x201960: 0x54a30001  bnel        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x201960u;
    {
        const bool branch_taken_0x201960 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x201960) {
            ctx->pc = 0x201964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201960u;
            // 0x201964: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201968u;
            goto label_201968;
        }
    }
    ctx->pc = 0x201968u;
label_201968:
    // 0x201968: 0x3e00008  jr          $ra
    ctx->pc = 0x201968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201970u;
}
