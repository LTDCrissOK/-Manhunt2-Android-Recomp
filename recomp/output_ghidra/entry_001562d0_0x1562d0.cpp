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

// Function: entry_001562d0
// Address: 0x1562d0 - 0x1562fa
void entry_001562d0_0x1562d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001562d0_0x1562d0");
#endif

    switch (ctx->pc) {
        case 0x1562d8u: goto label_1562d8;
        default: break;
    }

    ctx->pc = 0x1562d0u;

    // 0x1562d0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1562D0u;
    SET_GPR_U32(ctx, 31, 0x1562D8u);
    ctx->pc = 0x1562D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562D0u;
    // 0x1562d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1562D0u, 0x1562D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562D8u;
label_1562d8:
    // 0x1562d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1562d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1562dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1562dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1562e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1562e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1562e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1562e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1562e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1562e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1562ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1562ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1562f0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1562f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1562f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1562f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1562f8: 0x0  nop
    ctx->pc = 0x1562f8u;
    // NOP
    ctx->pc = 0x1562fau;
}
