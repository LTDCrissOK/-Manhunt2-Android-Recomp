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

// Function: sub_00209DB0
// Address: 0x209db0 - 0x209e18
void sub_00209DB0_0x209db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209DB0_0x209db0");
#endif

    switch (ctx->pc) {
        case 0x209e08u: goto label_209e08;
        default: break;
    }

    ctx->pc = 0x209db0u;

    // 0x209db0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209dbc: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x209dc0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x209dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x209dc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209dc8: 0x2405100b  addiu       $a1, $zero, 0x100B
    ctx->pc = 0x209dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4107));
    // 0x209dcc: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x209dccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x209dd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209dd4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x209dd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x209dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209de4: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x209de4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x209de8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x209de8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x209dec: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x209decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x209df0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x209df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x209df4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x209df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x209df8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x209df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x209dfc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x209dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x209e00: 0xc082700  jal         func_209C00
    ctx->pc = 0x209E00u;
    SET_GPR_U32(ctx, 31, 0x209E08u);
    ctx->pc = 0x209E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E00u;
    // 0x209e04: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209E00u, 0x209E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E08u;
label_209e08:
    // 0x209e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x209E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E0Cu;
        // 0x209e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209E14u;
    // 0x209e14: 0x0  nop
    ctx->pc = 0x209e14u;
    // NOP
    ctx->pc = 0x209e18u;
}
