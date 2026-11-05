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

// Function: sub_002FC8F8
// Address: 0x2fc8f8 - 0x2fc978
void sub_002FC8F8_0x2fc8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC8F8_0x2fc8f8");
#endif

    switch (ctx->pc) {
        case 0x2fc958u: goto label_2fc958;
        default: break;
    }

    ctx->pc = 0x2fc8f8u;

    // 0x2fc8f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2fc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2fc8fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc900: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2fc900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2fc904: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC904u;
    {
        const bool branch_taken_0x2fc904 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC904u;
        // 0x2fc908: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc904) {
            ctx->pc = 0x2FC920u;
            goto label_2fc920;
        }
    }
    ctx->pc = 0x2FC90Cu;
    // 0x2fc90c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc910: 0x0  nop
    ctx->pc = 0x2fc910u;
    // NOP
    // 0x2fc914: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fc914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fc918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC918u;
    {
        const bool branch_taken_0x2fc918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc918) {
            ctx->pc = 0x2FC93Cu;
            goto label_2fc93c;
        }
    }
    ctx->pc = 0x2FC920u;
label_2fc920:
    // 0x2fc920: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2fc920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2fc924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fc928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fc928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fc92c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc930: 0x0  nop
    ctx->pc = 0x2fc930u;
    // NOP
    // 0x2fc934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fc934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fc938: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2fc938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2fc93c:
    // 0x2fc93c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2fc93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2fc940: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2fc940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2fc944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc948: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc94c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fc94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc950: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2FC950u;
    SET_GPR_U32(ctx, 31, 0x2FC958u);
    ctx->pc = 0x2FC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC950u;
    // 0x2fc954: 0xe440b818  swc1        $f0, -0x47E8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294948888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2FC950u, 0x2FC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC958u;
label_2fc958:
    // 0x2fc958: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc95c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2fc95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2fc960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc968: 0xac82b81c  sw          $v0, -0x47E4($a0)
    ctx->pc = 0x2fc968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FB81Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB81Cu, _value); } while (0);
    // 0x2fc96c: 0xa0a3b820  sb          $v1, -0x47E0($a1)
    ctx->pc = 0x2fc96cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FB820u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB820u, _value); } while (0);
    // 0x2fc970: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC970u;
        // 0x2fc974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC978u;
}
