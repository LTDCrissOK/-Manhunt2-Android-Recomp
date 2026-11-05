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

// Function: sub_001B1090
// Address: 0x1b1090 - 0x1b1140
void sub_001B1090_0x1b1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1090_0x1b1090");
#endif

    ctx->pc = 0x1b1090u;

    // 0x1b1090: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1b1094: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1b1098: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1b1098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1b109c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B109Cu;
    {
        const bool branch_taken_0x1b109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B109Cu;
        // 0x1b10a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b109c) {
            ctx->pc = 0x1B1120u;
            goto label_1b1120;
        }
    }
    ctx->pc = 0x1B10A4u;
    // 0x1b10a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b10a8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b10ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B10ACu;
    {
        const bool branch_taken_0x1b10ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10ACu;
        // 0x1b10b0: 0xc4a306e0  lwc1        $f3, 0x6E0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10ac) {
            ctx->pc = 0x1B10C8u;
            goto label_1b10c8;
        }
    }
    ctx->pc = 0x1B10B4u;
    // 0x1b10b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b10b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b10b8: 0x0  nop
    ctx->pc = 0x1b10b8u;
    // NOP
    // 0x1b10bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b10bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b10c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B10C0u;
    {
        const bool branch_taken_0x1b10c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b10c0) {
            ctx->pc = 0x1B10E4u;
            goto label_1b10e4;
        }
    }
    ctx->pc = 0x1B10C8u;
label_1b10c8:
    // 0x1b10c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b10cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b10ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b10d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b10d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b10d8: 0x0  nop
    ctx->pc = 0x1b10d8u;
    // NOP
    // 0x1b10dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b10dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b10e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b10e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b10e4:
    // 0x1b10e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b10e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b10e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b10e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b10ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b10ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b10f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b10f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b10f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b10f8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1b10f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b10fc: 0x0  nop
    ctx->pc = 0x1b10fcu;
    // NOP
    // 0x1b1100: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1100u;
    {
        const bool branch_taken_0x1b1100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1100u;
        // 0x1b1104: 0x46030041  sub.s       $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1100) {
            ctx->pc = 0x1B1120u;
            goto label_1b1120;
        }
    }
    ctx->pc = 0x1B1108u;
    // 0x1b1108: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1b1108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x1b110c: 0xc4404dd0  lwc1        $f0, 0x4DD0($v0)
    ctx->pc = 0x1b110cu;
    { uint32_t bits = FAST_READ32(0x594DD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1110: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1114: 0x0  nop
    ctx->pc = 0x1b1114u;
    // NOP
    // 0x1b1118: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B1118u;
    {
        const bool branch_taken_0x1b1118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1118) {
            ctx->pc = 0x1B111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1118u;
            // 0x1b111c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1120u;
            goto label_1b1120;
        }
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1120u;
    {
        const bool branch_taken_0x1b1120 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1120) {
            ctx->pc = 0x1B1134u;
            goto label_1b1134;
        }
    }
    ctx->pc = 0x1B1128u;
    // 0x1b1128: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b112c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1b112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1b1130: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1134:
    // 0x1b1134: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B113Cu;
    // 0x1b113c: 0x0  nop
    ctx->pc = 0x1b113cu;
    // NOP
    ctx->pc = 0x1b1140u;
}
