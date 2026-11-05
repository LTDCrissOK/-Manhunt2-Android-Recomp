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

// Function: sub_002CAE40
// Address: 0x2cae40 - 0x2caef0
void sub_002CAE40_0x2cae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAE40_0x2cae40");
#endif

    switch (ctx->pc) {
        case 0x2cae54u: goto label_2cae54;
        case 0x2cae9cu: goto label_2cae9c;
        case 0x2caed8u: goto label_2caed8;
        default: break;
    }

    ctx->pc = 0x2cae40u;

    // 0x2cae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cae44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cae48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cae4c: 0xc0a21d4  jal         func_288750
    ctx->pc = 0x2CAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2CAE54u);
    ctx->pc = 0x2CAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE4Cu;
    // 0x2cae50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288750u, 0x2CAE4Cu, 0x2CAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE54u;
label_2cae54:
    // 0x2cae54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cae54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cae58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cae58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cae5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cae5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cae60: 0xc461cfa4  lwc1        $f1, -0x305C($v1)
    ctx->pc = 0x2cae60u;
    { uint32_t bits = FAST_READ32(0x66CFA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cae64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cae64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cae68: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x2cae68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x2cae6c: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x2cae6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x2cae70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2cae70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cae74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae78: 0x0  nop
    ctx->pc = 0x2cae78u;
    // NOP
    // 0x2cae7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cae7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cae80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2cae80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2cae84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2cae84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2cae88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2cae88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2cae8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cae8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cae90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cae90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cae94: 0xc0b2d50  jal         func_2CB540
    ctx->pc = 0x2CAE94u;
    SET_GPR_U32(ctx, 31, 0x2CAE9Cu);
    ctx->pc = 0x2CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB540u, 0x2CAE94u, 0x2CAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE9Cu;
label_2cae9c:
    // 0x2cae9c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2cae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2caea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2caea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2caea4: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x2caea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2caea8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caeac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2caeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2caeb0: 0x246903ff  addiu       $t1, $v1, 0x3FF
    ctx->pc = 0x2caeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x2caeb4: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x2caeb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x2caeb8: 0x8e0a0050  lw          $t2, 0x50($s0)
    ctx->pc = 0x2caeb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2caebc: 0x94a83  sra         $t1, $t1, 10
    ctx->pc = 0x2caebcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x2caec0: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x2caec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x2caec4: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x2caec4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x2caec8: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x2caec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2caecc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2caeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caed0: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CAED0u;
    SET_GPR_U32(ctx, 31, 0x2CAED8u);
    ctx->pc = 0x2CAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAED0u;
    // 0x2caed4: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CAED0u, 0x2CAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAED8u;
label_2caed8:
    // 0x2caed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caedc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2caedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2caee0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2caee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2caee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEE8u;
        // 0x2caeec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAEF0u;
}
