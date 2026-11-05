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

// Function: sub_002607B0
// Address: 0x2607b0 - 0x260820
void sub_002607B0_0x2607b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002607B0_0x2607b0");
#endif

    switch (ctx->pc) {
        case 0x2607d8u: goto label_2607d8;
        case 0x26080cu: goto label_26080c;
        default: break;
    }

    ctx->pc = 0x2607b0u;

    // 0x2607b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2607b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2607b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2607b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2607b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2607b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2607bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2607c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2607c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2607c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2607c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607c8: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2607C8u;
    {
        const bool branch_taken_0x2607c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607C8u;
        // 0x2607cc: 0xae05023c  sw          $a1, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607c8) {
            ctx->pc = 0x26080Cu;
            goto label_26080c;
        }
    }
    ctx->pc = 0x2607D0u;
    // 0x2607d0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2607D0u;
    SET_GPR_U32(ctx, 31, 0x2607D8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2607D0u, 0x2607D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607D8u;
label_2607d8:
    // 0x2607d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2607d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2607dc: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2607DCu;
    {
        const bool branch_taken_0x2607dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2607dc) {
            ctx->pc = 0x2607E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2607DCu;
            // 0x2607e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260810u;
            goto label_260810;
        }
    }
    ctx->pc = 0x2607E4u;
    // 0x2607e4: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x2607e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2607e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2607e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2607ec: 0xc48004f0  lwc1        $f0, 0x4F0($a0)
    ctx->pc = 0x2607ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2607f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2607f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2607f4: 0x0  nop
    ctx->pc = 0x2607f4u;
    // NOP
    // 0x2607f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2607F8u;
    {
        const bool branch_taken_0x2607f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2607FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607F8u;
        // 0x2607fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607f8) {
            ctx->pc = 0x260804u;
            goto label_260804;
        }
    }
    ctx->pc = 0x260800u;
    // 0x260800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260804:
    // 0x260804: 0xc08a15a  jal         func_228568
    ctx->pc = 0x260804u;
    SET_GPR_U32(ctx, 31, 0x26080Cu);
    ctx->pc = 0x260808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260804u;
    // 0x260808: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x260804u, 0x26080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26080Cu;
label_26080c:
    // 0x26080c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26080cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260810:
    // 0x260810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260818: 0x3e00008  jr          $ra
    ctx->pc = 0x260818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260818u;
        // 0x26081c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260820u;
}
