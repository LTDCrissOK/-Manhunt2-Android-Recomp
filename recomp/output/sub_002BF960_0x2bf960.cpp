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

// Function: sub_002BF960
// Address: 0x2bf960 - 0x2bf9d0
void sub_002BF960_0x2bf960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF960_0x2bf960");
#endif

    switch (ctx->pc) {
        case 0x2bf97cu: goto label_2bf97c;
        default: break;
    }

    ctx->pc = 0x2bf960u;

    // 0x2bf960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf964: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf968: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bf968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bf96c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf970: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bf970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bf974: 0xc0b025a  jal         func_2C0968
    ctx->pc = 0x2BF974u;
    SET_GPR_U32(ctx, 31, 0x2BF97Cu);
    ctx->pc = 0x2BF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF974u;
    // 0x2bf978: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0968u, 0x2BF974u, 0x2BF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF97Cu;
label_2bf97c:
    // 0x2bf97c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bf97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf980: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2bf980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf984: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bf984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf988: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bf98c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2bf98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2bf990: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2bf990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf994: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bf998: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bf998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bf99c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bf9a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bf9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf9a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bf9a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bf9ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2bf9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2bf9b0: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x2bf9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bf9b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2bf9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf9b8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2bf9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf9bc: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x2bf9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf9c0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9C4u;
        // 0x2bf9c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF9CCu;
    // 0x2bf9cc: 0x0  nop
    ctx->pc = 0x2bf9ccu;
    // NOP
    ctx->pc = 0x2bf9d0u;
}
