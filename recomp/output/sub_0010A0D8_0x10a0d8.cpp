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

// Function: sub_0010A0D8
// Address: 0x10a0d8 - 0x10a168
void sub_0010A0D8_0x10a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A0D8_0x10a0d8");
#endif

    switch (ctx->pc) {
        case 0x10a104u: goto label_10a104;
        case 0x10a130u: goto label_10a130;
        case 0x10a144u: goto label_10a144;
        default: break;
    }

    ctx->pc = 0x10a0d8u;

    // 0x10a0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a0e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a0ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a0f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a0f8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10a0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0fc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A0FCu;
    SET_GPR_U32(ctx, 31, 0x10A104u);
    ctx->pc = 0x10A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0FCu;
    // 0x10a100: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A0FCu, 0x10A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A104u;
label_10a104:
    // 0x10a104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a108: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a10c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a110: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a114: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a118: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10A118u;
    {
        const bool branch_taken_0x10a118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a118) {
            ctx->pc = 0x10A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A118u;
            // 0x10a11c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A148u;
            goto label_10a148;
        }
    }
    ctx->pc = 0x10A120u;
    // 0x10a120: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a128: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A128u;
    SET_GPR_U32(ctx, 31, 0x10A130u);
    ctx->pc = 0x10A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A128u;
    // 0x10a12c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A128u, 0x10A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A130u;
label_10a130:
    // 0x10a130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a138: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10a138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a13c: 0xc044120  jal         func_110480
    ctx->pc = 0x10A13Cu;
    SET_GPR_U32(ctx, 31, 0x10A144u);
    ctx->pc = 0x10A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A13Cu;
    // 0x10a140: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110480u, 0x10A13Cu, 0x10A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A144u;
label_10a144:
    // 0x10a144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a148:
    // 0x10a148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a154: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a15c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A15Cu;
        // 0x10a160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A164u;
    // 0x10a164: 0x0  nop
    ctx->pc = 0x10a164u;
    // NOP
    ctx->pc = 0x10a168u;
}
