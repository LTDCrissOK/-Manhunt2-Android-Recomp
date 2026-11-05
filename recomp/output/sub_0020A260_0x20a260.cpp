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

// Function: sub_0020A260
// Address: 0x20a260 - 0x20a2b8
void sub_0020A260_0x20a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A260_0x20a260");
#endif

    switch (ctx->pc) {
        case 0x20a2a8u: goto label_20a2a8;
        default: break;
    }

    ctx->pc = 0x20a260u;

    // 0x20a260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a26c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a270: 0x24054006  addiu       $a1, $zero, 0x4006
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16390));
    // 0x20a274: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x20a274u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x20a278: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x20a27c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x20a27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x20a280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a284: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a28c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a290: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x20a290u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x20a294: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20a294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20a298: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a29c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a2a0: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A2A0u;
    SET_GPR_U32(ctx, 31, 0x20A2A8u);
    ctx->pc = 0x20A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2A0u;
    // 0x20a2a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A2A0u, 0x20A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2A8u;
label_20a2a8:
    // 0x20a2a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x20A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ACu;
        // 0x20a2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A2B4u;
    // 0x20a2b4: 0x0  nop
    ctx->pc = 0x20a2b4u;
    // NOP
    ctx->pc = 0x20a2b8u;
}
