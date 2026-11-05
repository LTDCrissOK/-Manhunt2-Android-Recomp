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

// Function: sub_003DD820
// Address: 0x3dd820 - 0x3dd948
void sub_003DD820_0x3dd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD820_0x3dd820");
#endif

    switch (ctx->pc) {
        case 0x3dd840u: goto label_3dd840;
        default: break;
    }

    ctx->pc = 0x3dd820u;

    // 0x3dd820: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3dd820u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd824: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3dd824u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dd828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dd82c: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x3dd82cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd830: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3dd830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dd834: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x3dd834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd838: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3dd838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3dd83c: 0x0  nop
    ctx->pc = 0x3dd83cu;
    // NOP
label_3dd840:
    // 0x3dd840: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3dd840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd844: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3dd844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3dd848: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3dd848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3dd84c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3dd84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd850: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3dd850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3dd854: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3dd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd858: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3dd858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3dd85c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3dd85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd860: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3dd864: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3dd864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3dd868: 0x1485fff5  bne         $a0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3DD868u;
    {
        const bool branch_taken_0x3dd868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3DD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD868u;
        // 0x3dd86c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd868) {
            ctx->pc = 0x3DD840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd840;
        }
    }
    ctx->pc = 0x3DD870u;
    // 0x3dd870: 0x91a20040  lbu         $v0, 0x40($t5)
    ctx->pc = 0x3dd870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 64)));
    // 0x3dd874: 0x25c50040  addiu       $a1, $t6, 0x40
    ctx->pc = 0x3dd874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x3dd878: 0x25a60040  addiu       $a2, $t5, 0x40
    ctx->pc = 0x3dd878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x3dd87c: 0x25c80060  addiu       $t0, $t6, 0x60
    ctx->pc = 0x3dd87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
    // 0x3dd880: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x3dd880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dd884: 0x25a70060  addiu       $a3, $t5, 0x60
    ctx->pc = 0x3dd884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x3dd888: 0x25c90070  addiu       $t1, $t6, 0x70
    ctx->pc = 0x3dd888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x3dd88c: 0x25aa0070  addiu       $t2, $t5, 0x70
    ctx->pc = 0x3dd88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x3dd890: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3dd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dd894: 0x25cc0090  addiu       $t4, $t6, 0x90
    ctx->pc = 0x3dd894u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 144));
    // 0x3dd898: 0x25ab0090  addiu       $t3, $t5, 0x90
    ctx->pc = 0x3dd898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x3dd89c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x3dd89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd8a0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3dd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3dd8a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dd8a8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3dd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3dd8ac: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3dd8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3dd8b0: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x3dd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x3dd8b4: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x3dd8b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3dd8b8: 0xa0c30010  sb          $v1, 0x10($a2)
    ctx->pc = 0x3dd8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dd8bc: 0xc5c00060  lwc1        $f0, 0x60($t6)
    ctx->pc = 0x3dd8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd8c0: 0xe5a00060  swc1        $f0, 0x60($t5)
    ctx->pc = 0x3dd8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x3dd8c4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3dd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd8c8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x3dd8c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3dd8cc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3dd8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd8d0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x3dd8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3dd8d4: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x3dd8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd8d8: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x3dd8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x3dd8dc: 0x91a40070  lbu         $a0, 0x70($t5)
    ctx->pc = 0x3dd8dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 112)));
    // 0x3dd8e0: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x3dd8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dd8e4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3dd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3dd8e8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x3dd8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x3dd8ec: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3dd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3dd8f0: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x3dd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x3dd8f4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x3dd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3dd8f8: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x3dd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x3dd8fc: 0x91240010  lbu         $a0, 0x10($t1)
    ctx->pc = 0x3dd8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3dd900: 0xa1440010  sb          $a0, 0x10($t2)
    ctx->pc = 0x3dd900u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dd904: 0xc5c00090  lwc1        $f0, 0x90($t6)
    ctx->pc = 0x3dd904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd908: 0xe5a00090  swc1        $f0, 0x90($t5)
    ctx->pc = 0x3dd908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 144), bits); }
    // 0x3dd90c: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x3dd90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd910: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x3dd910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x3dd914: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x3dd914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd918: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x3dd918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x3dd91c: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x3dd91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd920: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x3dd920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x3dd924: 0xc5c000a0  lwc1        $f0, 0xA0($t6)
    ctx->pc = 0x3dd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd928: 0xe5a000a0  swc1        $f0, 0xA0($t5)
    ctx->pc = 0x3dd928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x3dd92c: 0x8dc300a4  lw          $v1, 0xA4($t6)
    ctx->pc = 0x3dd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 164)));
    // 0x3dd930: 0xada300a4  sw          $v1, 0xA4($t5)
    ctx->pc = 0x3dd930u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 164), GPR_U32(ctx, 3));
    // 0x3dd934: 0x8dc400a8  lw          $a0, 0xA8($t6)
    ctx->pc = 0x3dd934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 168)));
    // 0x3dd938: 0xada400a8  sw          $a0, 0xA8($t5)
    ctx->pc = 0x3dd938u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 168), GPR_U32(ctx, 4));
    // 0x3dd93c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD93Cu;
        // 0x3dd940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD944u;
    // 0x3dd944: 0x0  nop
    ctx->pc = 0x3dd944u;
    // NOP
    ctx->pc = 0x3dd948u;
}
