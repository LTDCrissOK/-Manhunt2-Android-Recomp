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

// Function: sub_002B7E68
// Address: 0x2b7e68 - 0x2b7ef8
void sub_002B7E68_0x2b7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E68_0x2b7e68");
#endif

    switch (ctx->pc) {
        case 0x2b7e7cu: goto label_2b7e7c;
        case 0x2b7ed8u: goto label_2b7ed8;
        default: break;
    }

    ctx->pc = 0x2b7e68u;

    // 0x2b7e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7e70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b7e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b7e74: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7E74u;
    SET_GPR_U32(ctx, 31, 0x2B7E7Cu);
    ctx->pc = 0x2B7E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E74u;
    // 0x2b7e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7E74u, 0x2B7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E7Cu;
label_2b7e7c:
    // 0x2b7e7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7E7Cu;
    {
        const bool branch_taken_0x2b7e7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E7Cu;
        // 0x2b7e80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e7c) {
            ctx->pc = 0x2B7E98u;
            goto label_2b7e98;
        }
    }
    ctx->pc = 0x2B7E84u;
    // 0x2b7e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7e88: 0x0  nop
    ctx->pc = 0x2b7e88u;
    // NOP
    // 0x2b7e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7E90u;
    {
        const bool branch_taken_0x2b7e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7e90) {
            ctx->pc = 0x2B7EB0u;
            goto label_2b7eb0;
        }
    }
    ctx->pc = 0x2B7E98u;
label_2b7e98:
    // 0x2b7e98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7ea4: 0x0  nop
    ctx->pc = 0x2b7ea4u;
    // NOP
    // 0x2b7ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7eac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b7eb0:
    // 0x2b7eb0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7eb4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ec0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2b7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7ec4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7ec8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7ecc: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b7ed0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7ED0u;
    SET_GPR_U32(ctx, 31, 0x2B7ED8u);
    ctx->pc = 0x2B7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7ED0u;
    // 0x2b7ed4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7ED0u, 0x2B7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7ED8u;
label_2b7ed8:
    // 0x2b7ed8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7edc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b7edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7ee0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b7ee4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EECu;
        // 0x2b7ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7EF4u;
    // 0x2b7ef4: 0x0  nop
    ctx->pc = 0x2b7ef4u;
    // NOP
    ctx->pc = 0x2b7ef8u;
}
