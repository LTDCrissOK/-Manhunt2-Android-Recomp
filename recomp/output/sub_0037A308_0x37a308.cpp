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

// Function: sub_0037A308
// Address: 0x37a308 - 0x37a378
void sub_0037A308_0x37a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A308_0x37a308");
#endif

    switch (ctx->pc) {
        case 0x37a35cu: goto label_37a35c;
        default: break;
    }

    ctx->pc = 0x37a308u;

    // 0x37a308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a30c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37a30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37a310: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37a310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37a314: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x37a314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x37a318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37a31c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37a31cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a320: 0x0  nop
    ctx->pc = 0x37a320u;
    // NOP
    // 0x37a324: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37a324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a328: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x37a328u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37a32c: 0x0  nop
    ctx->pc = 0x37a32cu;
    // NOP
    // 0x37a330: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37a330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37a334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a338: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37a338u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a33c: 0x0  nop
    ctx->pc = 0x37a33cu;
    // NOP
    // 0x37a340: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37a340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37a344: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37a348: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x37a348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x37a34c: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x37a34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x37a350: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x37a350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x37a354: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37A354u;
    SET_GPR_U32(ctx, 31, 0x37A35Cu);
    ctx->pc = 0x37A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A354u;
    // 0x37a358: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37A354u, 0x37A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A35Cu;
label_37a35c:
    // 0x37a35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37a364: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x37a364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x37a368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37a368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x37A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A36Cu;
        // 0x37a370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A374u;
    // 0x37a374: 0x0  nop
    ctx->pc = 0x37a374u;
    // NOP
    ctx->pc = 0x37a378u;
}
