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

// Function: sub_00216868
// Address: 0x216868 - 0x2168f8
void sub_00216868_0x216868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216868_0x216868");
#endif

    switch (ctx->pc) {
        case 0x216880u: goto label_216880;
        case 0x216888u: goto label_216888;
        case 0x216890u: goto label_216890;
        case 0x216898u: goto label_216898;
        case 0x2168a8u: goto label_2168a8;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168d4u: goto label_2168d4;
        default: break;
    }

    ctx->pc = 0x216868u;

    // 0x216868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21686c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216878: 0xc08660a  jal         func_219828
    ctx->pc = 0x216878u;
    SET_GPR_U32(ctx, 31, 0x216880u);
    ctx->pc = 0x219828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219828u, 0x216878u, 0x216880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216880u;
label_216880:
    // 0x216880: 0xc086682  jal         func_219A08
    ctx->pc = 0x216880u;
    SET_GPR_U32(ctx, 31, 0x216888u);
    ctx->pc = 0x219A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219A08u, 0x216880u, 0x216888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216888u;
label_216888:
    // 0x216888: 0xc086730  jal         func_219CC0
    ctx->pc = 0x216888u;
    SET_GPR_U32(ctx, 31, 0x216890u);
    ctx->pc = 0x219CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC0u, 0x216888u, 0x216890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216890u;
label_216890:
    // 0x216890: 0xc086552  jal         func_219548
    ctx->pc = 0x216890u;
    SET_GPR_U32(ctx, 31, 0x216898u);
    ctx->pc = 0x219548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219548u, 0x216890u, 0x216898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216898u;
label_216898:
    // 0x216898: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216898u;
    {
        const bool branch_taken_0x216898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216898u;
        // 0x21689c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216898) {
            ctx->pc = 0x2168E0u;
            goto label_2168e0;
        }
    }
    ctx->pc = 0x2168A0u;
    // 0x2168a0: 0xc085ffe  jal         func_217FF8
    ctx->pc = 0x2168A0u;
    SET_GPR_U32(ctx, 31, 0x2168A8u);
    ctx->pc = 0x217FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217FF8u, 0x2168A0u, 0x2168A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168A8u;
label_2168a8:
    // 0x2168a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2168A8u;
    {
        const bool branch_taken_0x2168a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A8u;
        // 0x2168ac: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168a8) {
            ctx->pc = 0x2168DCu;
            goto label_2168dc;
        }
    }
    ctx->pc = 0x2168B0u;
    // 0x2168b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2168b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2168b4: 0x9203b44c  lbu         $v1, -0x4BB4($s0)
    ctx->pc = 0x2168b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294947916)));
    // 0x2168b8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2168b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x2168bc: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x2168bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x2168c0: 0xc085f94  jal         func_217E50
    ctx->pc = 0x2168C0u;
    SET_GPR_U32(ctx, 31, 0x2168C8u);
    ctx->pc = 0x2168C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168C0u;
    // 0x2168c4: 0xa2238d50  sb          $v1, -0x72B0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294937936), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E50u, 0x2168C0u, 0x2168C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168C8u;
label_2168c8:
    // 0x2168c8: 0x92228d50  lbu         $v0, -0x72B0($s1)
    ctx->pc = 0x2168c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294937936)));
    // 0x2168cc: 0xc087282  jal         func_21CA08
    ctx->pc = 0x2168CCu;
    SET_GPR_U32(ctx, 31, 0x2168D4u);
    ctx->pc = 0x2168D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168CCu;
    // 0x2168d0: 0xa202b44c  sb          $v0, -0x4BB4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA08u, 0x2168CCu, 0x2168D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168D4u;
label_2168d4:
    // 0x2168d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2168D4u;
    {
        const bool branch_taken_0x2168d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168D4u;
        // 0x2168d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168d4) {
            ctx->pc = 0x2168E0u;
            goto label_2168e0;
        }
    }
    ctx->pc = 0x2168DCu;
label_2168dc:
    // 0x2168dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2168dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2168e0:
    // 0x2168e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2168e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2168e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2168e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2168e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2168e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2168ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2168ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2168F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168ECu;
        // 0x2168f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2168ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2168F4u;
    // 0x2168f4: 0x0  nop
    ctx->pc = 0x2168f4u;
    // NOP
    ctx->pc = 0x2168f8u;
}
