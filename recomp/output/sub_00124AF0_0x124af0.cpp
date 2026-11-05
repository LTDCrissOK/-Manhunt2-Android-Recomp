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

// Function: sub_00124AF0
// Address: 0x124af0 - 0x124b98
void sub_00124AF0_0x124af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124AF0_0x124af0");
#endif

    switch (ctx->pc) {
        case 0x124b28u: goto label_124b28;
        case 0x124b38u: goto label_124b38;
        case 0x124b4cu: goto label_124b4c;
        case 0x124b6cu: goto label_124b6c;
        default: break;
    }

    ctx->pc = 0x124af0u;

    // 0x124af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124afc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124b04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x124b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124b0c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x124b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124b14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124b1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x124b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b20: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124B20u;
    SET_GPR_U32(ctx, 31, 0x124B28u);
    ctx->pc = 0x124B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B20u;
    // 0x124b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124B20u, 0x124B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B28u;
label_124b28:
    // 0x124b28: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x124B28u;
    {
        const bool branch_taken_0x124b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B28u;
        // 0x124b2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b28) {
            ctx->pc = 0x124B78u;
            goto label_124b78;
        }
    }
    ctx->pc = 0x124B30u;
    // 0x124b30: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124B30u;
    SET_GPR_U32(ctx, 31, 0x124B38u);
    ctx->pc = 0x124B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B30u;
    // 0x124b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124B30u, 0x124B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B38u;
label_124b38:
    // 0x124b38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x124B38u;
    {
        const bool branch_taken_0x124b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B38u;
        // 0x124b3c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b38) {
            ctx->pc = 0x124B74u;
            goto label_124b74;
        }
    }
    ctx->pc = 0x124B40u;
    // 0x124b40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b44: 0xc04789c  jal         func_11E270
    ctx->pc = 0x124B44u;
    SET_GPR_U32(ctx, 31, 0x124B4Cu);
    ctx->pc = 0x124B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B44u;
    // 0x124b48: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E270u, 0x124B44u, 0x124B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B4Cu;
label_124b4c:
    // 0x124b4c: 0x38430009  xori        $v1, $v0, 0x9
    ctx->pc = 0x124b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x124b50: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x124b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x124b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x124b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b5c: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x124b5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x124b60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b64: 0xc042812  jal         func_10A048
    ctx->pc = 0x124B64u;
    SET_GPR_U32(ctx, 31, 0x124B6Cu);
    ctx->pc = 0x124B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B64u;
    // 0x124b68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A048u, 0x124B64u, 0x124B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B6Cu;
label_124b6c:
    // 0x124b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124B6Cu;
    {
        const bool branch_taken_0x124b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B6Cu;
        // 0x124b70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b6c) {
            ctx->pc = 0x124B7Cu;
            goto label_124b7c;
        }
    }
    ctx->pc = 0x124B74u;
label_124b74:
    // 0x124b74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124b78:
    // 0x124b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124b7c:
    // 0x124b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124b84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124b88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124b8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b90: 0x3e00008  jr          $ra
    ctx->pc = 0x124B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B90u;
        // 0x124b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124B98u;
}
