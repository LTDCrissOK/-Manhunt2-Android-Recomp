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

// Function: sub_00274178
// Address: 0x274178 - 0x2741f0
void sub_00274178_0x274178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274178_0x274178");
#endif

    switch (ctx->pc) {
        case 0x2741d4u: goto label_2741d4;
        default: break;
    }

    ctx->pc = 0x274178u;

    // 0x274178: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x274178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27417c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27417cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274180: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x274180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x274184: 0x30431fff  andi        $v1, $v0, 0x1FFF
    ctx->pc = 0x274184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x274188: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x274188u;
    {
        const bool branch_taken_0x274188 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274188u;
        // 0x27418c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274188) {
            ctx->pc = 0x2741A4u;
            goto label_2741a4;
        }
    }
    ctx->pc = 0x274190u;
    // 0x274190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274194: 0x0  nop
    ctx->pc = 0x274194u;
    // NOP
    // 0x274198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27419c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27419Cu;
    {
        const bool branch_taken_0x27419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27419c) {
            ctx->pc = 0x2741C0u;
            goto label_2741c0;
        }
    }
    ctx->pc = 0x2741A4u;
label_2741a4:
    // 0x2741a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2741a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2741a8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2741ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2741acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2741b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2741b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2741b4: 0x0  nop
    ctx->pc = 0x2741b4u;
    // NOP
    // 0x2741b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2741b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2741bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2741bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2741c0:
    // 0x2741c0: 0x3c013a49  lui         $at, 0x3A49
    ctx->pc = 0x2741c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14921 << 16));
    // 0x2741c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2741c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2741c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2741c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2741cc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2741CCu;
    SET_GPR_U32(ctx, 31, 0x2741D4u);
    ctx->pc = 0x2741D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741CCu;
    // 0x2741d0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2741CCu, 0x2741D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741D4u;
label_2741d4:
    // 0x2741d4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2741d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2741d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2741d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2741dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2741dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2741e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2741e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2741e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2741e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2741e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2741E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2741ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741E8u;
        // 0x2741ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2741F0u;
}
