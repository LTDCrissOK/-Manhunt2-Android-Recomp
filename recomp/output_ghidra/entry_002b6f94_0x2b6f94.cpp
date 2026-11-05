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

// Function: entry_002b6f94
// Address: 0x2b6f94 - 0x2b6fe8
void entry_002b6f94_0x2b6f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f94_0x2b6f94");
#endif

    switch (ctx->pc) {
        case 0x2b6fd8u: goto label_2b6fd8;
        default: break;
    }

    ctx->pc = 0x2b6f94u;

    // 0x2b6f94: 0x0  nop
    ctx->pc = 0x2b6f94u;
    // NOP
    // 0x2b6f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6fa4: 0x0  nop
    ctx->pc = 0x2b6fa4u;
    // NOP
    // 0x2b6fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6fac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b6facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b6fb0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6fb4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fc0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2b6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b6fc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b6fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6fc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6fcc: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b6fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b6fd0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6FD0u;
    SET_GPR_U32(ctx, 31, 0x2B6FD8u);
    ctx->pc = 0x2B6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FD0u;
    // 0x2b6fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6FD0u, 0x2B6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FD8u;
label_2b6fd8:
    // 0x2b6fd8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b6fdc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2b6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b6fe0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B6FE0u;
    {
        const bool branch_taken_0x2b6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE0u;
        // 0x2b6fe4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe0) {
            ctx->pc = 0x2B7068u;
            return;
        }
    }
    ctx->pc = 0x2B6FE8u;
}
