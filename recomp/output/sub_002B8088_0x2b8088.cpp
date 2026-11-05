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

// Function: sub_002B8088
// Address: 0x2b8088 - 0x2b8108
void sub_002B8088_0x2b8088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8088_0x2b8088");
#endif

    switch (ctx->pc) {
        case 0x2b809cu: goto label_2b809c;
        case 0x2b80a4u: goto label_2b80a4;
        default: break;
    }

    ctx->pc = 0x2b8088u;

    // 0x2b8088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b808c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8090: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b8094: 0xc0ae042  jal         func_2B8108
    ctx->pc = 0x2B8094u;
    SET_GPR_U32(ctx, 31, 0x2B809Cu);
    ctx->pc = 0x2B8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8094u;
    // 0x2b8098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8108u, 0x2B8094u, 0x2B809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B809Cu;
label_2b809c:
    // 0x2b809c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B809Cu;
    SET_GPR_U32(ctx, 31, 0x2B80A4u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B809Cu, 0x2B80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80A4u;
label_2b80a4:
    // 0x2b80a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B80A4u;
    {
        const bool branch_taken_0x2b80a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80A4u;
        // 0x2b80a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80a4) {
            ctx->pc = 0x2B80C0u;
            goto label_2b80c0;
        }
    }
    ctx->pc = 0x2B80ACu;
    // 0x2b80ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b80acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b80b0: 0x0  nop
    ctx->pc = 0x2b80b0u;
    // NOP
    // 0x2b80b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b80b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b80b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B80B8u;
    {
        const bool branch_taken_0x2b80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b80b8) {
            ctx->pc = 0x2B80D8u;
            goto label_2b80d8;
        }
    }
    ctx->pc = 0x2B80C0u;
label_2b80c0:
    // 0x2b80c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b80c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b80c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b80c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b80cc: 0x0  nop
    ctx->pc = 0x2b80ccu;
    // NOP
    // 0x2b80d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b80d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b80d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b80d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b80d8:
    // 0x2b80d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b80d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b80dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b80dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b80e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b80e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b80e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b80e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b80ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b80ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b80f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b80f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b80f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b80f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b80f8: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b80f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b80fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b80fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8100: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8100u;
        // 0x2b8104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8108u;
}
