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

// Function: sub_00348EB8
// Address: 0x348eb8 - 0x348f20
void sub_00348EB8_0x348eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348EB8_0x348eb8");
#endif

    switch (ctx->pc) {
        case 0x348edcu: goto label_348edc;
        case 0x348eecu: goto label_348eec;
        case 0x348ef8u: goto label_348ef8;
        case 0x348f00u: goto label_348f00;
        case 0x348f08u: goto label_348f08;
        default: break;
    }

    ctx->pc = 0x348eb8u;

    // 0x348eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348ec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x348ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ec8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x348ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x348ecc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x348ECCu;
    {
        const bool branch_taken_0x348ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348ecc) {
            ctx->pc = 0x348F00u;
            goto label_348f00;
        }
    }
    ctx->pc = 0x348ED4u;
    // 0x348ed4: 0xc085d4e  jal         func_217538
    ctx->pc = 0x348ED4u;
    SET_GPR_U32(ctx, 31, 0x348EDCu);
    ctx->pc = 0x348ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348ED4u;
    // 0x348ed8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x348ED4u, 0x348EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EDCu;
label_348edc:
    // 0x348edc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x348EDCu;
    {
        const bool branch_taken_0x348edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348edc) {
            ctx->pc = 0x348F00u;
            goto label_348f00;
        }
    }
    ctx->pc = 0x348EE4u;
    // 0x348ee4: 0xc0837b4  jal         func_20DED0
    ctx->pc = 0x348EE4u;
    SET_GPR_U32(ctx, 31, 0x348EECu);
    ctx->pc = 0x348EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EE4u;
    // 0x348ee8: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x348EE4u, 0x348EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EECu;
label_348eec:
    // 0x348eec: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x348eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x348ef0: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x348EF0u;
    SET_GPR_U32(ctx, 31, 0x348EF8u);
    ctx->pc = 0x348EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EF0u;
    // 0x348ef4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x348EF0u, 0x348EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EF8u;
label_348ef8:
    // 0x348ef8: 0xc0c47ba  jal         func_311EE8
    ctx->pc = 0x348EF8u;
    SET_GPR_U32(ctx, 31, 0x348F00u);
    ctx->pc = 0x348EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EF8u;
    // 0x348efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EE8u, 0x348EF8u, 0x348F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F00u;
label_348f00:
    // 0x348f00: 0xc0d5818  jal         func_356060
    ctx->pc = 0x348F00u;
    SET_GPR_U32(ctx, 31, 0x348F08u);
    ctx->pc = 0x356060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356060u, 0x348F00u, 0x348F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F08u;
label_348f08:
    // 0x348f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348f0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348f10: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x348f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x348f14: 0x3e00008  jr          $ra
    ctx->pc = 0x348F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F14u;
        // 0x348f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F1Cu;
    // 0x348f1c: 0x0  nop
    ctx->pc = 0x348f1cu;
    // NOP
    ctx->pc = 0x348f20u;
}
