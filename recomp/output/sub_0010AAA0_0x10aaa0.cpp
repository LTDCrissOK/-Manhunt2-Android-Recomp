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

// Function: sub_0010AAA0
// Address: 0x10aaa0 - 0x10ab18
void sub_0010AAA0_0x10aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AAA0_0x10aaa0");
#endif

    switch (ctx->pc) {
        case 0x10aabcu: goto label_10aabc;
        case 0x10aae8u: goto label_10aae8;
        case 0x10ab00u: goto label_10ab00;
        default: break;
    }

    ctx->pc = 0x10aaa0u;

    // 0x10aaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aaa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10aaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10aab4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AAB4u;
    SET_GPR_U32(ctx, 31, 0x10AABCu);
    ctx->pc = 0x10AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAB4u;
    // 0x10aab8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AAB4u, 0x10AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AABCu;
label_10aabc:
    // 0x10aabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10aac0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10aac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10aac4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10aac8: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10aacc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10aad0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10AAD0u;
    {
        const bool branch_taken_0x10aad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAD0u;
        // 0x10aad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aad0) {
            ctx->pc = 0x10AB04u;
            goto label_10ab04;
        }
    }
    ctx->pc = 0x10AAD8u;
    // 0x10aad8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10aadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aae0: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10AAE0u;
    SET_GPR_U32(ctx, 31, 0x10AAE8u);
    ctx->pc = 0x10AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAE0u;
    // 0x10aae4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10AAE0u, 0x10AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAE8u;
label_10aae8:
    // 0x10aae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10aae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaec: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x10aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10aaf0: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AAF0u;
    {
        const bool branch_taken_0x10aaf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10aaf0) {
            ctx->pc = 0x10AAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AAF0u;
            // 0x10aaf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB04u;
            goto label_10ab04;
        }
    }
    ctx->pc = 0x10AAF8u;
    // 0x10aaf8: 0xc044210  jal         func_110840
    ctx->pc = 0x10AAF8u;
    SET_GPR_U32(ctx, 31, 0x10AB00u);
    ctx->pc = 0x10AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAF8u;
    // 0x10aafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110840u, 0x10AAF8u, 0x10AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB00u;
label_10ab00:
    // 0x10ab00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ab00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ab04:
    // 0x10ab04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ab04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ab0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ab0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab10: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB10u;
        // 0x10ab14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB18u;
}
