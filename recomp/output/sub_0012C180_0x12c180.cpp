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

// Function: sub_0012C180
// Address: 0x12c180 - 0x12c1e8
void sub_0012C180_0x12c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C180_0x12c180");
#endif

    switch (ctx->pc) {
        case 0x12c1a4u: goto label_12c1a4;
        case 0x12c1c0u: goto label_12c1c0;
        default: break;
    }

    ctx->pc = 0x12c180u;

    // 0x12c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c190: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12c194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c198: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c19c: 0xc04b104  jal         func_12C410
    ctx->pc = 0x12C19Cu;
    SET_GPR_U32(ctx, 31, 0x12C1A4u);
    ctx->pc = 0x12C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C19Cu;
    // 0x12c1a0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x12C19Cu, 0x12C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1A4u;
label_12c1a4:
    // 0x12c1a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12c1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c1ac: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C1ACu;
    {
        const bool branch_taken_0x12c1ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1ACu;
        // 0x12c1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1ac) {
            ctx->pc = 0x12C1C8u;
            goto label_12c1c8;
        }
    }
    ctx->pc = 0x12C1B4u;
    // 0x12c1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1b8: 0xc04b07a  jal         func_12C1E8
    ctx->pc = 0x12C1B8u;
    SET_GPR_U32(ctx, 31, 0x12C1C0u);
    ctx->pc = 0x12C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1B8u;
    // 0x12c1bc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C1E8u, 0x12C1B8u, 0x12C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1C0u;
label_12c1c0:
    // 0x12c1c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C1C0u;
    {
        const bool branch_taken_0x12c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1C0u;
        // 0x12c1c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1c0) {
            ctx->pc = 0x12C1D0u;
            goto label_12c1d0;
        }
    }
    ctx->pc = 0x12C1C8u;
label_12c1c8:
    // 0x12c1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c1d0:
    // 0x12c1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c1d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1DCu;
        // 0x12c1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C1E4u;
    // 0x12c1e4: 0x0  nop
    ctx->pc = 0x12c1e4u;
    // NOP
    ctx->pc = 0x12c1e8u;
}
