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

// Function: sub_0017C188
// Address: 0x17c188 - 0x17c1f8
void sub_0017C188_0x17c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C188_0x17c188");
#endif

    switch (ctx->pc) {
        case 0x17c1acu: goto label_17c1ac;
        case 0x17c1b8u: goto label_17c1b8;
        case 0x17c1ccu: goto label_17c1cc;
        case 0x17c1e4u: goto label_17c1e4;
        default: break;
    }

    ctx->pc = 0x17c188u;

    // 0x17c188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c18c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17c190: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c198: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x17c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17c19c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17C19Cu;
    {
        const bool branch_taken_0x17c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c19c) {
            ctx->pc = 0x17C1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C19Cu;
            // 0x17c1a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1E8u;
            goto label_17c1e8;
        }
    }
    ctx->pc = 0x17C1A4u;
    // 0x17c1a4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17C1A4u;
    SET_GPR_U32(ctx, 31, 0x17C1ACu);
    ctx->pc = 0x17C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1A4u;
    // 0x17c1a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17C1A4u, 0x17C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1ACu;
label_17c1ac:
    // 0x17c1ac: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x17c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17c1b0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17C1B0u;
    SET_GPR_U32(ctx, 31, 0x17C1B8u);
    ctx->pc = 0x17C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1B0u;
    // 0x17c1b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17C1B0u, 0x17C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1B8u;
label_17c1b8:
    // 0x17c1b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C1B8u;
    {
        const bool branch_taken_0x17c1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c1b8) {
            ctx->pc = 0x17C1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C1B8u;
            // 0x17c1bc: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C1C0u;
    // 0x17c1c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17C1C4u;
    SET_GPR_U32(ctx, 31, 0x17C1CCu);
    ctx->pc = 0x17C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1C4u;
    // 0x17c1c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17C1C4u, 0x17C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1CCu;
label_17c1cc:
    // 0x17c1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C1CCu;
    {
        const bool branch_taken_0x17c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1CCu;
        // 0x17c1d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1cc) {
            ctx->pc = 0x17C1E8u;
            goto label_17c1e8;
        }
    }
    ctx->pc = 0x17C1D4u;
label_17c1d4:
    // 0x17c1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1d8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17c1dc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17C1DCu;
    SET_GPR_U32(ctx, 31, 0x17C1E4u);
    ctx->pc = 0x17C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1DCu;
    // 0x17c1e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17C1DCu, 0x17C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1E4u;
label_17c1e4:
    // 0x17c1e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c1e8:
    // 0x17c1e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17C1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1ECu;
        // 0x17c1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C1F4u;
    // 0x17c1f4: 0x0  nop
    ctx->pc = 0x17c1f4u;
    // NOP
    ctx->pc = 0x17c1f8u;
}
