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

// Function: sub_003710B8
// Address: 0x3710b8 - 0x371108
void sub_003710B8_0x3710b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003710B8_0x3710b8");
#endif

    ctx->pc = 0x3710b8u;

    // 0x3710b8: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3710b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3710bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3710bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3710c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3710c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3710c4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3710c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3710c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3710c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3710cc: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3710ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3710d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3710d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3710d4: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x3710d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x3710d8: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x3710d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x3710dc: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x3710dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x3710e0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x3710e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x3710e4: 0x6442fff8  daddiu      $v0, $v0, -0x8
    ctx->pc = 0x3710e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967288);
    // 0x3710e8: 0x6463fff8  daddiu      $v1, $v1, -0x8
    ctx->pc = 0x3710e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967288);
    // 0x3710ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3710ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3710f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3710f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3710f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3710f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3710f8: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x3710f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x3710fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3710fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371100: 0x3e00008  jr          $ra
    ctx->pc = 0x371100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371100u;
        // 0x371104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371108u;
}
