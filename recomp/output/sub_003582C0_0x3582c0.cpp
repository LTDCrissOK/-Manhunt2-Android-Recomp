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

// Function: sub_003582C0
// Address: 0x3582c0 - 0x358348
void sub_003582C0_0x3582c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003582C0_0x3582c0");
#endif

    ctx->pc = 0x3582c0u;

    // 0x3582c0: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3582c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3582C4u;
    {
        const bool branch_taken_0x3582c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3582C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582C4u;
        // 0x3582c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582c4) {
            ctx->pc = 0x3582D0u;
            goto label_3582d0;
        }
    }
    ctx->pc = 0x3582CCu;
    // 0x3582cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3582ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3582d0:
    // 0x3582d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3582d4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x3582d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3582d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3582d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3582dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3582dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3582e0: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x3582e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3582e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3582e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3582e8: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x3582e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3582ec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3582f0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x3582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x3582f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3582F4u;
    {
        const bool branch_taken_0x3582f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3582F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582F4u;
        // 0x3582f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582f4) {
            ctx->pc = 0x358310u;
            goto label_358310;
        }
    }
    ctx->pc = 0x3582FCu;
    // 0x3582fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3582fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358300: 0x0  nop
    ctx->pc = 0x358300u;
    // NOP
    // 0x358304: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x358304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x358308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x358308u;
    {
        const bool branch_taken_0x358308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358308) {
            ctx->pc = 0x358328u;
            goto label_358328;
        }
    }
    ctx->pc = 0x358310u;
label_358310:
    // 0x358310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x358314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x358314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x358318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x358318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35831c: 0x0  nop
    ctx->pc = 0x35831cu;
    // NOP
    // 0x358320: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x358320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x358324: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x358324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_358328:
    // 0x358328: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x35832c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x35832cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x358330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x358330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358334: 0x0  nop
    ctx->pc = 0x358334u;
    // NOP
    // 0x358338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x358338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35833c: 0x3e00008  jr          $ra
    ctx->pc = 0x35833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35833Cu;
        // 0x358340: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358344u;
    // 0x358344: 0x0  nop
    ctx->pc = 0x358344u;
    // NOP
    ctx->pc = 0x358348u;
}
