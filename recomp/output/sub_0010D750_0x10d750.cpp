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

// Function: sub_0010D750
// Address: 0x10d750 - 0x10d7d0
void sub_0010D750_0x10d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D750_0x10d750");
#endif

    switch (ctx->pc) {
        case 0x10d774u: goto label_10d774;
        case 0x10d7a0u: goto label_10d7a0;
        case 0x10d7b0u: goto label_10d7b0;
        default: break;
    }

    ctx->pc = 0x10d750u;

    // 0x10d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d764: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10d768: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d76c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10D76Cu;
    SET_GPR_U32(ctx, 31, 0x10D774u);
    ctx->pc = 0x10D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D76Cu;
    // 0x10d770: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10D76Cu, 0x10D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D774u;
label_10d774:
    // 0x10d774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d778: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10d778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10d77c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10d780: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10d780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10d784: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10d788: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10D788u;
    {
        const bool branch_taken_0x10d788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d788) {
            ctx->pc = 0x10D78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D788u;
            // 0x10d78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D7B4u;
            goto label_10d7b4;
        }
    }
    ctx->pc = 0x10D790u;
    // 0x10d790: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10d790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10d794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d798: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10D798u;
    SET_GPR_U32(ctx, 31, 0x10D7A0u);
    ctx->pc = 0x10D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D798u;
    // 0x10d79c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10D798u, 0x10D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7A0u;
label_10d7a0:
    // 0x10d7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7a8: 0xc0440f8  jal         func_1103E0
    ctx->pc = 0x10D7A8u;
    SET_GPR_U32(ctx, 31, 0x10D7B0u);
    ctx->pc = 0x10D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7A8u;
    // 0x10d7ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103E0u, 0x10D7A8u, 0x10D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7B0u;
label_10d7b0:
    // 0x10d7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d7b4:
    // 0x10d7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d7bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d7c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7C4u;
        // 0x10d7c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D7CCu;
    // 0x10d7cc: 0x0  nop
    ctx->pc = 0x10d7ccu;
    // NOP
    ctx->pc = 0x10d7d0u;
}
