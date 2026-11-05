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

// Function: sub_0037A290
// Address: 0x37a290 - 0x37a308
void sub_0037A290_0x37a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A290_0x37a290");
#endif

    switch (ctx->pc) {
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a2d0u: goto label_37a2d0;
        case 0x37a2d4u: goto label_37a2d4;
        case 0x37a2ecu: goto label_37a2ec;
        default: break;
    }

    ctx->pc = 0x37a290u;

    // 0x37a290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a294: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37a294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37a298: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x37a298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x37a29c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x37a29cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x37a2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37a2a4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x37a2a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a2a8: 0x0  nop
    ctx->pc = 0x37a2a8u;
    // NOP
    // 0x37a2ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37a2acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a2b0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x37a2b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37a2b4: 0x0  nop
    ctx->pc = 0x37a2b4u;
    // NOP
label_37a2b8:
    // 0x37a2b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37a2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37a2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37a2c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a2c4: 0x0  nop
    ctx->pc = 0x37a2c4u;
    // NOP
    // 0x37a2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37a2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37a2cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x37a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_37a2d0:
    // 0x37a2d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_37a2d4:
    // 0x37a2d4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x37a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x37a2d8: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x37a2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x37a2dc: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x37a2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x37a2e0: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x37a2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x37a2e4: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37A2E4u;
    SET_GPR_U32(ctx, 31, 0x37A2ECu);
    ctx->pc = 0x37A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2E4u;
    // 0x37a2e8: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37A2E4u, 0x37A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2ECu;
label_37a2ec:
    // 0x37a2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37a2f4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x37a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x37a2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37a2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x37A2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2FCu;
        // 0x37a300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A304u;
    // 0x37a304: 0x0  nop
    ctx->pc = 0x37a304u;
    // NOP
    ctx->pc = 0x37a308u;
}
