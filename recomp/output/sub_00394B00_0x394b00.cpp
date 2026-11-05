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

// Function: sub_00394B00
// Address: 0x394b00 - 0x394bc0
void sub_00394B00_0x394b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394B00_0x394b00");
#endif

    switch (ctx->pc) {
        case 0x394b3cu: goto label_394b3c;
        case 0x394b50u: goto label_394b50;
        case 0x394b58u: goto label_394b58;
        case 0x394b74u: goto label_394b74;
        case 0x394b88u: goto label_394b88;
        case 0x394ba0u: goto label_394ba0;
        default: break;
    }

    ctx->pc = 0x394b00u;

    // 0x394b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x394b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x394b10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x394b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394b1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x394b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x394b20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x394b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x394b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b28: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x394B28u;
    {
        const bool branch_taken_0x394b28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B28u;
        // 0x394b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b28) {
            ctx->pc = 0x394B48u;
            goto label_394b48;
        }
    }
    ctx->pc = 0x394B30u;
    // 0x394b30: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394b34: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394B34u;
    SET_GPR_U32(ctx, 31, 0x394B3Cu);
    ctx->pc = 0x394B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B34u;
    // 0x394b38: 0x2484a840  addiu       $a0, $a0, -0x57C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394B34u, 0x394B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B3Cu;
label_394b3c:
    // 0x394b3c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x394B3Cu;
    {
        const bool branch_taken_0x394b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B3Cu;
        // 0x394b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b3c) {
            ctx->pc = 0x394BA4u;
            goto label_394ba4;
        }
    }
    ctx->pc = 0x394B44u;
    // 0x394b44: 0x0  nop
    ctx->pc = 0x394b44u;
    // NOP
label_394b48:
    // 0x394b48: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394B48u;
    SET_GPR_U32(ctx, 31, 0x394B50u);
    ctx->pc = 0x394B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B48u;
    // 0x394b4c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394B48u, 0x394B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B50u;
label_394b50:
    // 0x394b50: 0xc0e525a  jal         func_394968
    ctx->pc = 0x394B50u;
    SET_GPR_U32(ctx, 31, 0x394B58u);
    ctx->pc = 0x394968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394968u, 0x394B50u, 0x394B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B58u;
label_394b58:
    // 0x394b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x394b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x394b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x394B64u;
    {
        const bool branch_taken_0x394b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B64u;
        // 0x394b68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b64) {
            ctx->pc = 0x394B88u;
            goto label_394b88;
        }
    }
    ctx->pc = 0x394B6Cu;
    // 0x394b6c: 0xc0e5280  jal         func_394A00
    ctx->pc = 0x394B6Cu;
    SET_GPR_U32(ctx, 31, 0x394B74u);
    ctx->pc = 0x394A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394A00u, 0x394B6Cu, 0x394B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B74u;
label_394b74:
    // 0x394b74: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394B74u;
    {
        const bool branch_taken_0x394b74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x394B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B74u;
        // 0x394b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b74) {
            ctx->pc = 0x394B8Cu;
            goto label_394b8c;
        }
    }
    ctx->pc = 0x394B7Cu;
    // 0x394b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b80: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394B80u;
    SET_GPR_U32(ctx, 31, 0x394B88u);
    ctx->pc = 0x394B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B80u;
    // 0x394b84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394B80u, 0x394B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B88u;
label_394b88:
    // 0x394b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x394b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394b8c:
    // 0x394b8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x394b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x394b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394b98: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394B98u;
    SET_GPR_U32(ctx, 31, 0x394BA0u);
    ctx->pc = 0x394B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B98u;
    // 0x394b9c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394B98u, 0x394BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394BA0u;
label_394ba0:
    // 0x394ba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x394ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394ba4:
    // 0x394ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x394bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394bb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x394bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x394bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x394BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BB4u;
        // 0x394bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394BBCu;
    // 0x394bbc: 0x0  nop
    ctx->pc = 0x394bbcu;
    // NOP
    ctx->pc = 0x394bc0u;
}
