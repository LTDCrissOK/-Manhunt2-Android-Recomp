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

// Function: sub_00209918
// Address: 0x209918 - 0x209988
void sub_00209918_0x209918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209918_0x209918");
#endif

    switch (ctx->pc) {
        case 0x209940u: goto label_209940;
        case 0x209948u: goto label_209948;
        case 0x209950u: goto label_209950;
        case 0x209968u: goto label_209968;
        default: break;
    }

    ctx->pc = 0x209918u;

    // 0x209918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20991c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209920: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x209920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x209924: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x209928: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x209928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20992c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20992cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209930: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209934: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x209934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x209938: 0xc082700  jal         func_209C00
    ctx->pc = 0x209938u;
    SET_GPR_U32(ctx, 31, 0x209940u);
    ctx->pc = 0x20993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209938u;
    // 0x20993c: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209938u, 0x209940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209940u;
label_209940:
    // 0x209940: 0x2410100f  addiu       $s0, $zero, 0x100F
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4111));
    // 0x209944: 0x0  nop
    ctx->pc = 0x209944u;
    // NOP
label_209948:
    // 0x209948: 0xc08266e  jal         func_2099B8
    ctx->pc = 0x209948u;
    SET_GPR_U32(ctx, 31, 0x209950u);
    ctx->pc = 0x20994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209948u;
    // 0x20994c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099B8u, 0x209948u, 0x209950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209950u;
label_209950:
    // 0x209950: 0x8e222b6c  lw          $v0, 0x2B6C($s1)
    ctx->pc = 0x209950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11116)));
    // 0x209954: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x209954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x209958: 0x1470fffb  bne         $v1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x209958u;
    {
        const bool branch_taken_0x209958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x209958) {
            ctx->pc = 0x209948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209948;
        }
    }
    ctx->pc = 0x209960u;
    // 0x209960: 0xc082824  jal         func_20A090
    ctx->pc = 0x209960u;
    SET_GPR_U32(ctx, 31, 0x209968u);
    ctx->pc = 0x20A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A090u, 0x209960u, 0x209968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209968u;
label_209968:
    // 0x209968: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20996c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20996cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209970: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x209970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209978: 0xa04093d8  sb          $zero, -0x6C28($v0)
    ctx->pc = 0x209978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F93D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F93D8u, _value); } while (0);
    // 0x20997c: 0x3e00008  jr          $ra
    ctx->pc = 0x20997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20997Cu;
        // 0x209980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209984u;
    // 0x209984: 0x0  nop
    ctx->pc = 0x209984u;
    // NOP
    ctx->pc = 0x209988u;
}
