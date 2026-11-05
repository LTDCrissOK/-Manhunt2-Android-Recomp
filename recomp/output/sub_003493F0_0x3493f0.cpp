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

// Function: sub_003493F0
// Address: 0x3493f0 - 0x3494a8
void sub_003493F0_0x3493f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003493F0_0x3493f0");
#endif

    switch (ctx->pc) {
        case 0x34949cu: goto label_34949c;
        default: break;
    }

    ctx->pc = 0x3493f0u;

    // 0x3493f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3493f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3493f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3493f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3493f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3493fc: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x3493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x349400: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x349400u;
    {
        const bool branch_taken_0x349400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349400u;
        // 0x349404: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349400) {
            ctx->pc = 0x3494A0u;
            goto label_3494a0;
        }
    }
    ctx->pc = 0x349408u;
    // 0x349408: 0x90620293  lbu         $v0, 0x293($v1)
    ctx->pc = 0x349408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 659)));
    // 0x34940c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x34940Cu;
    {
        const bool branch_taken_0x34940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34940c) {
            ctx->pc = 0x3494A0u;
            goto label_3494a0;
        }
    }
    ctx->pc = 0x349414u;
    // 0x349414: 0x8c620220  lw          $v0, 0x220($v1)
    ctx->pc = 0x349414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x349418: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x349418u;
    {
        const bool branch_taken_0x349418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349418u;
        // 0x34941c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349418) {
            ctx->pc = 0x349424u;
            goto label_349424;
        }
    }
    ctx->pc = 0x349420u;
    // 0x349420: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x349420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_349424:
    // 0x349424: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x349424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349428: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34942c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x349430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x349430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349434: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x349438: 0x8c67bd48  lw          $a3, -0x42B8($v1)
    ctx->pc = 0x349438u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34943c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x349440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349444: 0x8c46f480  lw          $a2, -0xB80($v0)
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BF480u));
    // 0x349448: 0x8ca80038  lw          $t0, 0x38($a1)
    ctx->pc = 0x349448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x34944c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x349450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x349454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349458: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x34945c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x34945cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x349460: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x349460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x349464: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x349464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34946c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34946cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x349470: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x349470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x349474: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x349474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x349478: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x349478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34947c: 0xa3a40003  sb          $a0, 0x3($sp)
    ctx->pc = 0x34947cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x349480: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349484: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x349488: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x349488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34948c: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x34948cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x349490: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x349490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349494: 0xc0d1116  jal         func_344458
    ctx->pc = 0x349494u;
    SET_GPR_U32(ctx, 31, 0x34949Cu);
    ctx->pc = 0x349498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349494u;
    // 0x349498: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344458u, 0x349494u, 0x34949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34949Cu;
label_34949c:
    // 0x34949c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3494a0:
    // 0x3494a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3494A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3494A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494A0u;
        // 0x3494a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3494A8u;
}
