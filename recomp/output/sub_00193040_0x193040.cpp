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

// Function: sub_00193040
// Address: 0x193040 - 0x1930e0
void sub_00193040_0x193040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193040_0x193040");
#endif

    switch (ctx->pc) {
        case 0x193054u: goto label_193054;
        default: break;
    }

    ctx->pc = 0x193040u;

    // 0x193040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19304c: 0xc064b7a  jal         func_192DE8
    ctx->pc = 0x19304Cu;
    SET_GPR_U32(ctx, 31, 0x193054u);
    ctx->pc = 0x193050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19304Cu;
    // 0x193050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192DE8u, 0x19304Cu, 0x193054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193054u;
label_193054:
    // 0x193054: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x193054u;
    {
        const bool branch_taken_0x193054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193054u;
        // 0x193058: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193054) {
            ctx->pc = 0x1930C8u;
            goto label_1930c8;
        }
    }
    ctx->pc = 0x19305Cu;
    // 0x19305c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x193060: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193060u;
    {
        const bool branch_taken_0x193060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x193064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193060u;
        // 0x193064: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193060) {
            ctx->pc = 0x19307Cu;
            goto label_19307c;
        }
    }
    ctx->pc = 0x193068u;
    // 0x193068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19306c: 0x0  nop
    ctx->pc = 0x19306cu;
    // NOP
    // 0x193070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x193074u;
    {
        const bool branch_taken_0x193074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193074) {
            ctx->pc = 0x193094u;
            goto label_193094;
        }
    }
    ctx->pc = 0x19307Cu;
label_19307c:
    // 0x19307c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x193084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193088: 0x0  nop
    ctx->pc = 0x193088u;
    // NOP
    // 0x19308c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193090: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193094:
    // 0x193094: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x193098: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x193098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19309c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19309cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1930a0: 0x8e031004  lw          $v1, 0x1004($s0)
    ctx->pc = 0x1930a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x1930a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1930a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1930a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1930a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1930ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1930acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1930b0: 0xc46006dc  lwc1        $f0, 0x6DC($v1)
    ctx->pc = 0x1930b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1930b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1930b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1930b8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1930b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1930bc: 0x0  nop
    ctx->pc = 0x1930bcu;
    // NOP
    // 0x1930c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1930C0u;
    {
        const bool branch_taken_0x1930c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1930C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C0u;
        // 0x1930c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930c0) {
            ctx->pc = 0x1930CCu;
            goto label_1930cc;
        }
    }
    ctx->pc = 0x1930C8u;
label_1930c8:
    // 0x1930c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1930c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1930cc:
    // 0x1930cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1930ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1930d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1930d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1930d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1930D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1930D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D4u;
        // 0x1930d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1930DCu;
    // 0x1930dc: 0x0  nop
    ctx->pc = 0x1930dcu;
    // NOP
    ctx->pc = 0x1930e0u;
}
