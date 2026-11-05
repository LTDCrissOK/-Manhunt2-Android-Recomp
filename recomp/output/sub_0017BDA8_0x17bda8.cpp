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

// Function: sub_0017BDA8
// Address: 0x17bda8 - 0x17be18
void sub_0017BDA8_0x17bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BDA8_0x17bda8");
#endif

    switch (ctx->pc) {
        case 0x17bdccu: goto label_17bdcc;
        case 0x17bddcu: goto label_17bddc;
        case 0x17bde8u: goto label_17bde8;
        case 0x17bdf8u: goto label_17bdf8;
        case 0x17be04u: goto label_17be04;
        default: break;
    }

    ctx->pc = 0x17bda8u;

    // 0x17bda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bdac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bdb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bdb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17bdb8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17bdbc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17bdc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17bdc4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17BDC4u;
    SET_GPR_U32(ctx, 31, 0x17BDCCu);
    ctx->pc = 0x17BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDC4u;
    // 0x17bdc8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17BDC4u, 0x17BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDCCu;
label_17bdcc:
    // 0x17bdcc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17bdd0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x17bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17bdd4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17BDD4u;
    SET_GPR_U32(ctx, 31, 0x17BDDCu);
    ctx->pc = 0x17BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDD4u;
    // 0x17bdd8: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17BDD4u, 0x17BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDDCu;
label_17bddc:
    // 0x17bddc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x17bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x17bde0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17BDE0u;
    SET_GPR_U32(ctx, 31, 0x17BDE8u);
    ctx->pc = 0x17BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDE0u;
    // 0x17bde4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17BDE0u, 0x17BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE8u;
label_17bde8:
    // 0x17bde8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x17bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x17bdec: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x17bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x17bdf0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17BDF0u;
    SET_GPR_U32(ctx, 31, 0x17BDF8u);
    ctx->pc = 0x17BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDF0u;
    // 0x17bdf4: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17BDF0u, 0x17BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDF8u;
label_17bdf8:
    // 0x17bdf8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17bdfc: 0xc05f03e  jal         func_17C0F8
    ctx->pc = 0x17BDFCu;
    SET_GPR_U32(ctx, 31, 0x17BE04u);
    ctx->pc = 0x17BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDFCu;
    // 0x17be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C0F8u, 0x17BDFCu, 0x17BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE04u;
label_17be04:
    // 0x17be04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17be04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17be08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17be0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17be0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be10: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE10u;
        // 0x17be14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE18u;
}
