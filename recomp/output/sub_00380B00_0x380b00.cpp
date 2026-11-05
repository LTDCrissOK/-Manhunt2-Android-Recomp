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

// Function: sub_00380B00
// Address: 0x380b00 - 0x380b80
void sub_00380B00_0x380b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380B00_0x380b00");
#endif

    switch (ctx->pc) {
        case 0x380b08u: goto label_380b08;
        case 0x380b20u: goto label_380b20;
        case 0x380b24u: goto label_380b24;
        case 0x380b2cu: goto label_380b2c;
        case 0x380b34u: goto label_380b34;
        case 0x380b40u: goto label_380b40;
        case 0x380b48u: goto label_380b48;
        case 0x380b54u: goto label_380b54;
        case 0x380b64u: goto label_380b64;
        case 0x380b68u: goto label_380b68;
        default: break;
    }

    ctx->pc = 0x380b00u;

    // 0x380b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x380b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_380b08:
    // 0x380b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x380b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380b0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x380b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380b14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x380b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x380b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x380b1c: 0xc0e023a  jal         func_3808E8
label_380b20:
    if (ctx->pc == 0x380B20u) {
        ctx->pc = 0x380B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B1Cu;
        // 0x380b20: 0x26510030  addiu       $s1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380B24u;
        goto label_380b24;
    }
    ctx->pc = 0x380B1Cu;
    SET_GPR_U32(ctx, 31, 0x380B24u);
    ctx->pc = 0x380B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B1Cu;
    // 0x380b20: 0x26510030  addiu       $s1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808E8u, 0x380B1Cu, 0x380B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B24u;
label_380b24:
    // 0x380b24: 0xc0e023a  jal         func_3808E8
    ctx->pc = 0x380B24u;
    SET_GPR_U32(ctx, 31, 0x380B2Cu);
    ctx->pc = 0x380B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B24u;
    // 0x380b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808E8u, 0x380B24u, 0x380B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B2Cu;
label_380b2c:
    // 0x380b2c: 0xc0e028c  jal         func_380A30
    ctx->pc = 0x380B2Cu;
    SET_GPR_U32(ctx, 31, 0x380B34u);
    ctx->pc = 0x380B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B2Cu;
    // 0x380b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A30u, 0x380B2Cu, 0x380B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B34u;
label_380b34:
    // 0x380b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x380b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b38: 0xc0e026c  jal         func_3809B0
    ctx->pc = 0x380B38u;
    SET_GPR_U32(ctx, 31, 0x380B40u);
    ctx->pc = 0x380B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B38u;
    // 0x380b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809B0u, 0x380B38u, 0x380B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B40u;
label_380b40:
    // 0x380b40: 0xc0e028c  jal         func_380A30
    ctx->pc = 0x380B40u;
    SET_GPR_U32(ctx, 31, 0x380B48u);
    ctx->pc = 0x380B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B40u;
    // 0x380b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A30u, 0x380B40u, 0x380B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B48u;
label_380b48:
    // 0x380b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b4c: 0xc0e026a  jal         func_3809A8
    ctx->pc = 0x380B4Cu;
    SET_GPR_U32(ctx, 31, 0x380B54u);
    ctx->pc = 0x380B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B4Cu;
    // 0x380b50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809A8u, 0x380B4Cu, 0x380B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B54u;
label_380b54:
    // 0x380b54: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380B54u;
    {
        const bool branch_taken_0x380b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B54u;
        // 0x380b58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b54) {
            ctx->pc = 0x380B68u;
            goto label_380b68;
        }
    }
    ctx->pc = 0x380B5Cu;
    // 0x380b5c: 0xc0e02a6  jal         func_380A98
    ctx->pc = 0x380B5Cu;
    SET_GPR_U32(ctx, 31, 0x380B64u);
    ctx->pc = 0x380B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B5Cu;
    // 0x380b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A98u, 0x380B5Cu, 0x380B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B64u;
label_380b64:
    // 0x380b64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x380b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_380b68:
    // 0x380b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x380b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x380b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380b74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x380b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x380b78: 0x3e00008  jr          $ra
    ctx->pc = 0x380B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B78u;
        // 0x380b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380B80u;
}
