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

// Function: sub_001EF1F8
// Address: 0x1ef1f8 - 0x1ef230
void sub_001EF1F8_0x1ef1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF1F8_0x1ef1f8");
#endif

    switch (ctx->pc) {
        case 0x1ef20cu: goto label_1ef20c;
        default: break;
    }

    ctx->pc = 0x1ef1f8u;

    // 0x1ef1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef1fc: 0x248600d0  addiu       $a2, $a0, 0xD0
    ctx->pc = 0x1ef1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1ef200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef204: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1EF204u;
    SET_GPR_U32(ctx, 31, 0x1EF20Cu);
    ctx->pc = 0x1EF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF204u;
    // 0x1ef208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1EF204u, 0x1EF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF20Cu;
label_1ef20c:
    // 0x1ef20c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1ef20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef210: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1ef210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ef214: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1ef214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ef218: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ef218u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ef21c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ef21cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ef220: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1ef220u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ef224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef228: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF228u;
        // 0x1ef22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF230u;
}
