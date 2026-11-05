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

// Function: sub_00294C68
// Address: 0x294c68 - 0x294d50
void sub_00294C68_0x294c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294C68_0x294c68");
#endif

    switch (ctx->pc) {
        case 0x294c9cu: goto label_294c9c;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cb4u: goto label_294cb4;
        case 0x294cc0u: goto label_294cc0;
        case 0x294cccu: goto label_294ccc;
        case 0x294ce0u: goto label_294ce0;
        case 0x294cf8u: goto label_294cf8;
        case 0x294d04u: goto label_294d04;
        case 0x294d10u: goto label_294d10;
        case 0x294d20u: goto label_294d20;
        case 0x294d2cu: goto label_294d2c;
        case 0x294d3cu: goto label_294d3c;
        default: break;
    }

    ctx->pc = 0x294c68u;

    // 0x294c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294c6c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x294c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x294c70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x294c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x294c74: 0x90622c0c  lbu         $v0, 0x2C0C($v1)
    ctx->pc = 0x294c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x482C0Cu));
    // 0x294c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x294c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x294c80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x294C80u;
    {
        const bool branch_taken_0x294c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C80u;
        // 0x294c84: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c80) {
            ctx->pc = 0x294CE8u;
            goto label_294ce8;
        }
    }
    ctx->pc = 0x294C88u;
    // 0x294c88: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x294c88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x294c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c90: 0x2610b860  addiu       $s0, $s0, -0x47A0
    ctx->pc = 0x294c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948960));
    // 0x294c94: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294C94u;
    SET_GPR_U32(ctx, 31, 0x294C9Cu);
    ctx->pc = 0x294C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C94u;
    // 0x294c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294C94u, 0x294C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C9Cu;
label_294c9c:
    // 0x294c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x294c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ca0: 0xc0a789c  jal         func_29E270
    ctx->pc = 0x294CA0u;
    SET_GPR_U32(ctx, 31, 0x294CA8u);
    ctx->pc = 0x294CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CA0u;
    // 0x294ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x294CA0u, 0x294CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CA8u;
label_294ca8:
    // 0x294ca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x294CACu;
    SET_GPR_U32(ctx, 31, 0x294CB4u);
    ctx->pc = 0x294CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CACu;
    // 0x294cb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x294CACu, 0x294CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CB4u;
label_294cb4:
    // 0x294cb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cb8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294CB8u;
    SET_GPR_U32(ctx, 31, 0x294CC0u);
    ctx->pc = 0x294CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CB8u;
    // 0x294cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294CB8u, 0x294CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CC0u;
label_294cc0:
    // 0x294cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cc4: 0xc0a7ab0  jal         func_29EAC0
    ctx->pc = 0x294CC4u;
    SET_GPR_U32(ctx, 31, 0x294CCCu);
    ctx->pc = 0x294CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CC4u;
    // 0x294cc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x294CC4u, 0x294CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CCCu;
label_294ccc:
    // 0x294ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294cd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cd4: 0xa043006c  sb          $v1, 0x6C($v0)
    ctx->pc = 0x294cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x294cd8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x294CD8u;
    SET_GPR_U32(ctx, 31, 0x294CE0u);
    ctx->pc = 0x294CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CD8u;
    // 0x294cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x294CD8u, 0x294CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CE0u;
label_294ce0:
    // 0x294ce0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x294CE0u;
    {
        const bool branch_taken_0x294ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CE0u;
        // 0x294ce4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ce0) {
            ctx->pc = 0x294D40u;
            goto label_294d40;
        }
    }
    ctx->pc = 0x294CE8u;
label_294ce8:
    // 0x294ce8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x294ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x294cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cf0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294CF0u;
    SET_GPR_U32(ctx, 31, 0x294CF8u);
    ctx->pc = 0x294CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CF0u;
    // 0x294cf4: 0x24a5b870  addiu       $a1, $a1, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294CF0u, 0x294CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CF8u;
label_294cf8:
    // 0x294cf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cfc: 0xc0a789c  jal         func_29E270
    ctx->pc = 0x294CFCu;
    SET_GPR_U32(ctx, 31, 0x294D04u);
    ctx->pc = 0x294D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CFCu;
    // 0x294d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x294CFCu, 0x294D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D04u;
label_294d04:
    // 0x294d04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d08: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x294D08u;
    SET_GPR_U32(ctx, 31, 0x294D10u);
    ctx->pc = 0x294D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D08u;
    // 0x294d0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x294D08u, 0x294D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D10u;
label_294d10:
    // 0x294d10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x294d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d18: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x294D18u;
    SET_GPR_U32(ctx, 31, 0x294D20u);
    ctx->pc = 0x294D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D18u;
    // 0x294d1c: 0x24a5b860  addiu       $a1, $a1, -0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x294D18u, 0x294D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D20u;
label_294d20:
    // 0x294d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d24: 0xc0a7ab0  jal         func_29EAC0
    ctx->pc = 0x294D24u;
    SET_GPR_U32(ctx, 31, 0x294D2Cu);
    ctx->pc = 0x294D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D24u;
    // 0x294d28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x294D24u, 0x294D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D2Cu;
label_294d2c:
    // 0x294d2c: 0xa040006c  sb          $zero, 0x6C($v0)
    ctx->pc = 0x294d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x294d30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d34: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x294D34u;
    SET_GPR_U32(ctx, 31, 0x294D3Cu);
    ctx->pc = 0x294D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D34u;
    // 0x294d38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x294D34u, 0x294D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D3Cu;
label_294d3c:
    // 0x294d3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x294d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_294d40:
    // 0x294d40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x294d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x294d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d48: 0x3e00008  jr          $ra
    ctx->pc = 0x294D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D48u;
        // 0x294d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D50u;
}
