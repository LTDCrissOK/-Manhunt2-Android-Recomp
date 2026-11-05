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

// Function: sub_00296548
// Address: 0x296548 - 0x2965d8
void sub_00296548_0x296548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296548_0x296548");
#endif

    switch (ctx->pc) {
        case 0x296594u: goto label_296594;
        case 0x2965c0u: goto label_2965c0;
        default: break;
    }

    ctx->pc = 0x296548u;

    // 0x296548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29654c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x296550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29655c: 0x9222006d  lbu         $v0, 0x6D($s1)
    ctx->pc = 0x29655cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
    // 0x296560: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x296560u;
    {
        const bool branch_taken_0x296560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296560u;
        // 0x296564: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296560) {
            ctx->pc = 0x2965C4u;
            goto label_2965c4;
        }
    }
    ctx->pc = 0x296568u;
    // 0x296568: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x29656c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x29656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296570: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x296570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x296574: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x296574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29657c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x29657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296580: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x296580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x296584: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x296584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x296588: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x296588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29658c: 0xc0a59b8  jal         func_2966E0
    ctx->pc = 0x29658Cu;
    SET_GPR_U32(ctx, 31, 0x296594u);
    ctx->pc = 0x296590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29658Cu;
    // 0x296590: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2966E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2966E0u, 0x29658Cu, 0x296594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296594u;
label_296594:
    // 0x296594: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x296594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x296598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29659c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x29659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2965a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965a4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2965a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2965a8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2965a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2965ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2965acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2965b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2965b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2965b4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2965b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2965b8: 0xc0a59ea  jal         func_2967A8
    ctx->pc = 0x2965B8u;
    SET_GPR_U32(ctx, 31, 0x2965C0u);
    ctx->pc = 0x2965BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965B8u;
    // 0x2965bc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2967A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2967A8u, 0x2965B8u, 0x2965C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965C0u;
label_2965c0:
    // 0x2965c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2965c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2965c4:
    // 0x2965c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2965c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2965c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2965cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2965CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965CCu;
        // 0x2965d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2965CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2965D4u;
    // 0x2965d4: 0x0  nop
    ctx->pc = 0x2965d4u;
    // NOP
    ctx->pc = 0x2965d8u;
}
