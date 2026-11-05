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

// Function: sub_00177730
// Address: 0x177730 - 0x177760
void sub_00177730_0x177730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177730_0x177730");
#endif

    switch (ctx->pc) {
        case 0x177744u: goto label_177744;
        case 0x177750u: goto label_177750;
        default: break;
    }

    ctx->pc = 0x177730u;

    // 0x177730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177734: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x177734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x177738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17773c: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x17773Cu;
    SET_GPR_U32(ctx, 31, 0x177744u);
    ctx->pc = 0x177740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17773Cu;
    // 0x177740: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x17773Cu, 0x177744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177744u;
label_177744:
    // 0x177744: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177744u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177748: 0xc05e492  jal         func_179248
    ctx->pc = 0x177748u;
    SET_GPR_U32(ctx, 31, 0x177750u);
    ctx->pc = 0x17774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177748u;
    // 0x17774c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179248u, 0x177748u, 0x177750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177750u;
label_177750:
    // 0x177750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177754: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x177754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177758: 0x3e00008  jr          $ra
    ctx->pc = 0x177758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177758u;
        // 0x17775c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177760u;
}
