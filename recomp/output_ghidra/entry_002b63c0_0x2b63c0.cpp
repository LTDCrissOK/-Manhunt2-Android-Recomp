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

// Function: entry_002b63c0
// Address: 0x2b63c0 - 0x2b6414
void entry_002b63c0_0x2b63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b63c0_0x2b63c0");
#endif

    ctx->pc = 0x2b63c0u;

    // 0x2b63c0: 0x0  nop
    ctx->pc = 0x2b63c0u;
    // NOP
    // 0x2b63c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b63c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b63cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b63ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b63d0: 0x0  nop
    ctx->pc = 0x2b63d0u;
    // NOP
    // 0x2b63d4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b63d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b63d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b63d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2b63dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b63e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b63e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b63e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b63e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63e8: 0xc6215900  lwc1        $f1, 0x5900($s1)
    ctx->pc = 0x2b63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b63ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b63ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b63f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b63f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b63f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b63f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b63f8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b63f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b63fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b63fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6400: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6404: 0x0  nop
    ctx->pc = 0x2b6404u;
    // NOP
    // 0x2b6408: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2B6408u;
    {
        const bool branch_taken_0x2b6408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6408u;
        // 0x2b640c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6408) {
            ctx->pc = 0x2B6490u;
            return;
        }
    }
    ctx->pc = 0x2B6410u;
    // 0x2b6410: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6410u;
    SET_GPR_U32(ctx, 31, 0x2B6418u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6410u, 0x2B6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6418u;
}
