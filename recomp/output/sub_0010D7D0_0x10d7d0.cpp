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

// Function: sub_0010D7D0
// Address: 0x10d7d0 - 0x10d850
void sub_0010D7D0_0x10d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D7D0_0x10d7d0");
#endif

    switch (ctx->pc) {
        case 0x10d7f4u: goto label_10d7f4;
        case 0x10d820u: goto label_10d820;
        case 0x10d830u: goto label_10d830;
        default: break;
    }

    ctx->pc = 0x10d7d0u;

    // 0x10d7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d7d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d7d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d7e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10d7e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10d7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7ec: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10D7ECu;
    SET_GPR_U32(ctx, 31, 0x10D7F4u);
    ctx->pc = 0x10D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7ECu;
    // 0x10d7f0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10D7ECu, 0x10D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7F4u;
label_10d7f4:
    // 0x10d7f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d7f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10d7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10d7fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10d800: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10d800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10d804: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10d808: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10D808u;
    {
        const bool branch_taken_0x10d808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d808) {
            ctx->pc = 0x10D80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D808u;
            // 0x10d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D834u;
            goto label_10d834;
        }
    }
    ctx->pc = 0x10D810u;
    // 0x10d810: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10d810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10d814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d818: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10D818u;
    SET_GPR_U32(ctx, 31, 0x10D820u);
    ctx->pc = 0x10D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D818u;
    // 0x10d81c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10D818u, 0x10D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D820u;
label_10d820:
    // 0x10d820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d828: 0xc044100  jal         func_110400
    ctx->pc = 0x10D828u;
    SET_GPR_U32(ctx, 31, 0x10D830u);
    ctx->pc = 0x10D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D828u;
    // 0x10d82c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110400u, 0x10D828u, 0x10D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D830u;
label_10d830:
    // 0x10d830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d834:
    // 0x10d834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d83c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d83cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10d840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d844: 0x3e00008  jr          $ra
    ctx->pc = 0x10D844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D844u;
        // 0x10d848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D84Cu;
    // 0x10d84c: 0x0  nop
    ctx->pc = 0x10d84cu;
    // NOP
    ctx->pc = 0x10d850u;
}
