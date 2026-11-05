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

// Function: sub_00370438
// Address: 0x370438 - 0x3704a8
void sub_00370438_0x370438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370438_0x370438");
#endif

    switch (ctx->pc) {
        case 0x370448u: goto label_370448;
        default: break;
    }

    ctx->pc = 0x370438u;

    // 0x370438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37043c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370440: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x370440u;
    SET_GPR_U32(ctx, 31, 0x370448u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x370440u, 0x370448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370448u;
label_370448:
    // 0x370448: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x370448u;
    {
        const bool branch_taken_0x370448 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370448u;
        // 0x37044c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370448) {
            ctx->pc = 0x370464u;
            goto label_370464;
        }
    }
    ctx->pc = 0x370450u;
    // 0x370450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x370450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x370454: 0x0  nop
    ctx->pc = 0x370454u;
    // NOP
    // 0x370458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x370458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37045c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37045Cu;
    {
        const bool branch_taken_0x37045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37045c) {
            ctx->pc = 0x37047Cu;
            goto label_37047c;
        }
    }
    ctx->pc = 0x370464u;
label_370464:
    // 0x370464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x370464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x370468: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x370468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37046c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37046cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x370470: 0x0  nop
    ctx->pc = 0x370470u;
    // NOP
    // 0x370474: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x370474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x370478: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x370478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37047c:
    // 0x37047c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x37047cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x370480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x370480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x370488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37048c: 0x3e00008  jr          $ra
    ctx->pc = 0x37048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37048Cu;
        // 0x370490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37048Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370494u;
    // 0x370494: 0x0  nop
    ctx->pc = 0x370494u;
    // NOP
    // 0x370498: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37049c: 0x0  nop
    ctx->pc = 0x37049cu;
    // NOP
    // 0x3704a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3704a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3704a4: 0x0  nop
    ctx->pc = 0x3704a4u;
    // NOP
    ctx->pc = 0x3704a8u;
}
