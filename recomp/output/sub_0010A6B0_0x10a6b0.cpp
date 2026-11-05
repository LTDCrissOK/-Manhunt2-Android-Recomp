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

// Function: sub_0010A6B0
// Address: 0x10a6b0 - 0x10a720
void sub_0010A6B0_0x10a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A6B0_0x10a6b0");
#endif

    switch (ctx->pc) {
        case 0x10a6ccu: goto label_10a6cc;
        case 0x10a6f8u: goto label_10a6f8;
        case 0x10a704u: goto label_10a704;
        default: break;
    }

    ctx->pc = 0x10a6b0u;

    // 0x10a6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a6b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a6c4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A6C4u;
    SET_GPR_U32(ctx, 31, 0x10A6CCu);
    ctx->pc = 0x10A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6C4u;
    // 0x10a6c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A6C4u, 0x10A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6CCu;
label_10a6cc:
    // 0x10a6cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a6d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a6d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a6d8: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a6dc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a6e0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10A6E0u;
    {
        const bool branch_taken_0x10a6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E0u;
        // 0x10a6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e0) {
            ctx->pc = 0x10A70Cu;
            goto label_10a70c;
        }
    }
    ctx->pc = 0x10A6E8u;
    // 0x10a6e8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a6ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6f0: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A6F0u;
    SET_GPR_U32(ctx, 31, 0x10A6F8u);
    ctx->pc = 0x10A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6F0u;
    // 0x10a6f4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A6F0u, 0x10A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6F8u;
label_10a6f8:
    // 0x10a6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6fc: 0xc044164  jal         func_110590
    ctx->pc = 0x10A6FCu;
    SET_GPR_U32(ctx, 31, 0x10A704u);
    ctx->pc = 0x10A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6FCu;
    // 0x10a700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110590u, 0x10A6FCu, 0x10A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A704u;
label_10a704:
    // 0x10a704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A704u;
    {
        const bool branch_taken_0x10a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A704u;
        // 0x10a708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a704) {
            ctx->pc = 0x10A710u;
            goto label_10a710;
        }
    }
    ctx->pc = 0x10A70Cu;
label_10a70c:
    // 0x10a70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a710:
    // 0x10a710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a718: 0x3e00008  jr          $ra
    ctx->pc = 0x10A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A718u;
        // 0x10a71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A720u;
}
