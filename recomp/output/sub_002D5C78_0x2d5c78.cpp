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

// Function: sub_002D5C78
// Address: 0x2d5c78 - 0x2d5d30
void sub_002D5C78_0x2d5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5C78_0x2d5c78");
#endif

    switch (ctx->pc) {
        case 0x2d5c78u: goto label_2d5c78;
        case 0x2d5c7cu: goto label_2d5c7c;
        case 0x2d5c80u: goto label_2d5c80;
        case 0x2d5c84u: goto label_2d5c84;
        case 0x2d5c88u: goto label_2d5c88;
        case 0x2d5c8cu: goto label_2d5c8c;
        case 0x2d5c90u: goto label_2d5c90;
        case 0x2d5c94u: goto label_2d5c94;
        case 0x2d5c98u: goto label_2d5c98;
        case 0x2d5c9cu: goto label_2d5c9c;
        case 0x2d5ca0u: goto label_2d5ca0;
        case 0x2d5ca4u: goto label_2d5ca4;
        case 0x2d5ca8u: goto label_2d5ca8;
        case 0x2d5cacu: goto label_2d5cac;
        case 0x2d5cb0u: goto label_2d5cb0;
        case 0x2d5cb4u: goto label_2d5cb4;
        case 0x2d5cb8u: goto label_2d5cb8;
        case 0x2d5cbcu: goto label_2d5cbc;
        case 0x2d5cc0u: goto label_2d5cc0;
        case 0x2d5cc4u: goto label_2d5cc4;
        case 0x2d5cc8u: goto label_2d5cc8;
        case 0x2d5cccu: goto label_2d5ccc;
        case 0x2d5cd0u: goto label_2d5cd0;
        case 0x2d5cd4u: goto label_2d5cd4;
        case 0x2d5cd8u: goto label_2d5cd8;
        case 0x2d5cdcu: goto label_2d5cdc;
        case 0x2d5ce0u: goto label_2d5ce0;
        case 0x2d5ce4u: goto label_2d5ce4;
        case 0x2d5ce8u: goto label_2d5ce8;
        case 0x2d5cecu: goto label_2d5cec;
        case 0x2d5cf0u: goto label_2d5cf0;
        case 0x2d5cf4u: goto label_2d5cf4;
        case 0x2d5cf8u: goto label_2d5cf8;
        case 0x2d5cfcu: goto label_2d5cfc;
        case 0x2d5d00u: goto label_2d5d00;
        case 0x2d5d04u: goto label_2d5d04;
        case 0x2d5d08u: goto label_2d5d08;
        case 0x2d5d0cu: goto label_2d5d0c;
        case 0x2d5d10u: goto label_2d5d10;
        case 0x2d5d14u: goto label_2d5d14;
        case 0x2d5d18u: goto label_2d5d18;
        case 0x2d5d1cu: goto label_2d5d1c;
        case 0x2d5d20u: goto label_2d5d20;
        case 0x2d5d24u: goto label_2d5d24;
        case 0x2d5d28u: goto label_2d5d28;
        case 0x2d5d2cu: goto label_2d5d2c;
        default: break;
    }

    ctx->pc = 0x2d5c78u;

label_2d5c78:
    // 0x2d5c78: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2d5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2d5c7c:
    // 0x2d5c7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d5c80:
    // 0x2d5c80: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2d5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
label_2d5c84:
    // 0x2d5c84: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2d5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_2d5c88:
    // 0x2d5c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d5c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c8c:
    // 0x2d5c8c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2d5c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
label_2d5c90:
    // 0x2d5c90: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x2d5c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
label_2d5c94:
    // 0x2d5c94: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x2d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_2d5c98:
    // 0x2d5c98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2d5c9c:
    // 0x2d5c9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d5ca0:
    // 0x2d5ca0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2d5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2d5ca4:
    // 0x2d5ca4: 0x40f809  jalr        $v0
label_2d5ca8:
    if (ctx->pc == 0x2D5CA8u) {
        ctx->pc = 0x2D5CACu;
        goto label_2d5cac;
    }
    ctx->pc = 0x2D5CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5CACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5CA4u, 0x2D5CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5CACu;
label_2d5cac:
    // 0x2d5cac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d5cb0:
    // 0x2d5cb0: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x2d5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
label_2d5cb4:
    // 0x2d5cb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2d5cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2d5cb8:
    // 0x2d5cb8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d5cbc:
    if (ctx->pc == 0x2D5CBCu) {
        ctx->pc = 0x2D5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CB8u;
        // 0x2d5cbc: 0x27b10100  addiu       $s1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5CC0u;
        goto label_2d5cc0;
    }
    ctx->pc = 0x2D5CB8u;
    {
        const bool branch_taken_0x2d5cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CB8u;
        // 0x2d5cbc: 0x27b10100  addiu       $s1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cb8) {
            ctx->pc = 0x2D5CF4u;
            goto label_2d5cf4;
        }
    }
    ctx->pc = 0x2D5CC0u;
label_2d5cc0:
    // 0x2d5cc0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2d5cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
label_2d5cc4:
    // 0x2d5cc4: 0x26100f38  addiu       $s0, $s0, 0xF38
    ctx->pc = 0x2d5cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3896));
label_2d5cc8:
    // 0x2d5cc8: 0xc075e16  jal         func_1D7858
label_2d5ccc:
    if (ctx->pc == 0x2D5CCCu) {
        ctx->pc = 0x2D5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CC8u;
        // 0x2d5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5CD0u;
        goto label_2d5cd0;
    }
    ctx->pc = 0x2D5CC8u;
    SET_GPR_U32(ctx, 31, 0x2D5CD0u);
    ctx->pc = 0x2D5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CC8u;
    // 0x2d5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x2D5CC8u, 0x2D5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CD0u;
label_2d5cd0:
    // 0x2d5cd0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2d5cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2d5cd4:
    // 0x2d5cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5cd8:
    // 0x2d5cd8: 0xc0efefa  jal         func_3BFBE8
label_2d5cdc:
    if (ctx->pc == 0x2D5CDCu) {
        ctx->pc = 0x2D5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CD8u;
        // 0x2d5cdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5CE0u;
        goto label_2d5ce0;
    }
    ctx->pc = 0x2D5CD8u;
    SET_GPR_U32(ctx, 31, 0x2D5CE0u);
    ctx->pc = 0x2D5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CD8u;
    // 0x2d5cdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2D5CD8u, 0x2D5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CE0u;
label_2d5ce0:
    // 0x2d5ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ce4:
    // 0x2d5ce4: 0xc0d7412  jal         func_35D048
label_2d5ce8:
    if (ctx->pc == 0x2D5CE8u) {
        ctx->pc = 0x2D5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CE4u;
        // 0x2d5ce8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5CECu;
        goto label_2d5cec;
    }
    ctx->pc = 0x2D5CE4u;
    SET_GPR_U32(ctx, 31, 0x2D5CECu);
    ctx->pc = 0x2D5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CE4u;
    // 0x2d5ce8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D5CE4u, 0x2D5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CECu;
label_2d5cec:
    // 0x2d5cec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2d5cf0:
    if (ctx->pc == 0x2D5CF0u) {
        ctx->pc = 0x2D5CF4u;
        goto label_2d5cf4;
    }
    ctx->pc = 0x2D5CECu;
    {
        const bool branch_taken_0x2d5cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5cec) {
            ctx->pc = 0x2D5D0Cu;
            goto label_2d5d0c;
        }
    }
    ctx->pc = 0x2D5CF4u;
label_2d5cf4:
    // 0x2d5cf4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_2d5cf8:
    // 0x2d5cf8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2d5cfc:
    // 0x2d5cfc: 0x8c4621e0  lw          $a2, 0x21E0($v0)
    ctx->pc = 0x2d5cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
label_2d5d00:
    // 0x2d5d00: 0x24a50f58  addiu       $a1, $a1, 0xF58
    ctx->pc = 0x2d5d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3928));
label_2d5d04:
    // 0x2d5d04: 0xc0efefa  jal         func_3BFBE8
label_2d5d08:
    if (ctx->pc == 0x2D5D08u) {
        ctx->pc = 0x2D5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D04u;
        // 0x2d5d08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D0Cu;
        goto label_2d5d0c;
    }
    ctx->pc = 0x2D5D04u;
    SET_GPR_U32(ctx, 31, 0x2D5D0Cu);
    ctx->pc = 0x2D5D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D04u;
    // 0x2d5d08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2D5D04u, 0x2D5D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D0Cu;
label_2d5d0c:
    // 0x2d5d0c: 0xc0c87be  jal         func_321EF8
label_2d5d10:
    if (ctx->pc == 0x2D5D10u) {
        ctx->pc = 0x2D5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D0Cu;
        // 0x2d5d10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D14u;
        goto label_2d5d14;
    }
    ctx->pc = 0x2D5D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D5D14u);
    ctx->pc = 0x2D5D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D0Cu;
    // 0x2d5d10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EF8u, 0x2D5D0Cu, 0x2D5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D14u;
label_2d5d14:
    // 0x2d5d14: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2d5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_2d5d18:
    // 0x2d5d18: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2d5d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2d5d1c:
    // 0x2d5d1c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x2d5d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2d5d20:
    // 0x2d5d20: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2d5d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2d5d24:
    // 0x2d5d24: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x2d5d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_2d5d28:
    // 0x2d5d28: 0x3e00008  jr          $ra
label_2d5d2c:
    if (ctx->pc == 0x2D5D2Cu) {
        ctx->pc = 0x2D5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D28u;
        // 0x2d5d2c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D30u;
        goto label_fallthrough_0x2d5d28;
    }
    ctx->pc = 0x2D5D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D28u;
        // 0x2d5d2c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5d28:
    ctx->pc = 0x2D5D30u;
}
