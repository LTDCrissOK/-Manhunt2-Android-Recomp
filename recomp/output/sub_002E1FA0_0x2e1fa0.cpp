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

// Function: sub_002E1FA0
// Address: 0x2e1fa0 - 0x2e2018
void sub_002E1FA0_0x2e1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1FA0_0x2e1fa0");
#endif

    switch (ctx->pc) {
        case 0x2e2008u: goto label_2e2008;
        default: break;
    }

    ctx->pc = 0x2e1fa0u;

    // 0x2e1fa0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1fa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1fa8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2e1fac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1FACu;
    {
        const bool branch_taken_0x2e1fac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FACu;
        // 0x2e1fb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fac) {
            ctx->pc = 0x2E1FC8u;
            goto label_2e1fc8;
        }
    }
    ctx->pc = 0x2E1FB4u;
    // 0x2e1fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1fb8: 0x0  nop
    ctx->pc = 0x2e1fb8u;
    // NOP
    // 0x2e1fbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1fc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1FC0u;
    {
        const bool branch_taken_0x2e1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fc0) {
            ctx->pc = 0x2E1FE4u;
            goto label_2e1fe4;
        }
    }
    ctx->pc = 0x2E1FC8u;
label_2e1fc8:
    // 0x2e1fc8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e1fcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1fd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1fd8: 0x0  nop
    ctx->pc = 0x2e1fd8u;
    // NOP
    // 0x2e1fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1fe0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e1fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e1fe4:
    // 0x2e1fe4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e1fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e1fe8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e1fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e1fec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1ff0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e1ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ff8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2e1ff8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2e1ffc: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x2e1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2e2000: 0xc0b891a  jal         func_2E2468
    ctx->pc = 0x2E2000u;
    SET_GPR_U32(ctx, 31, 0x2E2008u);
    ctx->pc = 0x2E2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2000u;
    // 0x2e2004: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2468u, 0x2E2000u, 0x2E2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2008u;
label_2e2008:
    // 0x2e2008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e200c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2e200cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e2010: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2010u;
        // 0x2e2014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2018u;
}
