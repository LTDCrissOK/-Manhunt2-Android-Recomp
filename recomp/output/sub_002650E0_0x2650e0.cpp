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

// Function: sub_002650E0
// Address: 0x2650e0 - 0x2651b0
void sub_002650E0_0x2650e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002650E0_0x2650e0");
#endif

    switch (ctx->pc) {
        case 0x2650f4u: goto label_2650f4;
        case 0x265120u: goto label_265120;
        case 0x265158u: goto label_265158;
        default: break;
    }

    ctx->pc = 0x2650e0u;

    // 0x2650e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2650e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2650e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2650e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2650e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2650ec: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2650ECu;
    SET_GPR_U32(ctx, 31, 0x2650F4u);
    ctx->pc = 0x2650F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650ECu;
    // 0x2650f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2650ECu, 0x2650F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650F4u;
label_2650f4:
    // 0x2650f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2650f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2650fc: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2650fcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x265100: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x265100u;
    {
        const bool branch_taken_0x265100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x265100) {
            ctx->pc = 0x265104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265100u;
            // 0x265104: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x265108u;
            goto label_265108;
        }
    }
    ctx->pc = 0x265108u;
label_265108:
    // 0x265108: 0x2010  mfhi        $a0
    ctx->pc = 0x265108u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x26510c: 0x54830002  bnel        $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26510Cu;
    {
        const bool branch_taken_0x26510c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26510c) {
            ctx->pc = 0x265110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26510Cu;
            // 0x265110: 0xae000274  sw          $zero, 0x274($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265118u;
            goto label_265118;
        }
    }
    ctx->pc = 0x265114u;
    // 0x265114: 0xae050274  sw          $a1, 0x274($s0)
    ctx->pc = 0x265114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 5));
label_265118:
    // 0x265118: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x265118u;
    SET_GPR_U32(ctx, 31, 0x265120u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x265118u, 0x265120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265120u;
label_265120:
    // 0x265120: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265128: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x265128u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x26512c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26512Cu;
    {
        const bool branch_taken_0x26512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26512c) {
            ctx->pc = 0x265130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26512Cu;
            // 0x265130: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x265134u;
            goto label_265134;
        }
    }
    ctx->pc = 0x265134u;
label_265134:
    // 0x265134: 0xc60002c4  lwc1        $f0, 0x2C4($s0)
    ctx->pc = 0x265134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265138: 0x8e030274  lw          $v1, 0x274($s0)
    ctx->pc = 0x265138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x26513c: 0xc60202c0  lwc1        $f2, 0x2C0($s0)
    ctx->pc = 0x26513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265140: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x265140u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x265144: 0x2010  mfhi        $a0
    ctx->pc = 0x265144u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x265148: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x265148u;
    {
        const bool branch_taken_0x265148 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265148u;
        // 0x26514c: 0xae040288  sw          $a0, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265148) {
            ctx->pc = 0x26519Cu;
            goto label_26519c;
        }
    }
    ctx->pc = 0x265150u;
    // 0x265150: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x265150u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x265154: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_265158:
    // 0x265158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x265158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26515c: 0x0  nop
    ctx->pc = 0x26515cu;
    // NOP
    // 0x265160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x265160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x265164: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x265164u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x265168: 0x0  nop
    ctx->pc = 0x265168u;
    // NOP
    // 0x26516c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26516cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x265170: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x265174: 0x0  nop
    ctx->pc = 0x265174u;
    // NOP
    // 0x265178: 0x0  nop
    ctx->pc = 0x265178u;
    // NOP
    // 0x26517c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26517cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x265180: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x265180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x265184: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x265184u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x265188: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x265188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26518c: 0x8e030274  lw          $v1, 0x274($s0)
    ctx->pc = 0x26518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x265190: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x265190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265194: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x265194u;
    {
        const bool branch_taken_0x265194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265194u;
        // 0x265198: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265194) {
            ctx->pc = 0x265158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265158;
        }
    }
    ctx->pc = 0x26519Cu;
label_26519c:
    // 0x26519c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26519cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2651a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2651a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2651a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2651A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2651A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651A4u;
        // 0x2651a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2651A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2651ACu;
    // 0x2651ac: 0x0  nop
    ctx->pc = 0x2651acu;
    // NOP
    ctx->pc = 0x2651b0u;
}
