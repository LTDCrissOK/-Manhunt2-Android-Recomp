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

// Function: sub_00158C48
// Address: 0x158c48 - 0x158ce8
void sub_00158C48_0x158c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158C48_0x158c48");
#endif

    switch (ctx->pc) {
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        case 0x158c80u: goto label_158c80;
        case 0x158c84u: goto label_158c84;
        case 0x158c88u: goto label_158c88;
        case 0x158c8cu: goto label_158c8c;
        case 0x158c90u: goto label_158c90;
        case 0x158c94u: goto label_158c94;
        case 0x158c98u: goto label_158c98;
        case 0x158c9cu: goto label_158c9c;
        case 0x158ca0u: goto label_158ca0;
        case 0x158ca4u: goto label_158ca4;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cacu: goto label_158cac;
        case 0x158cb0u: goto label_158cb0;
        case 0x158cb4u: goto label_158cb4;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cbcu: goto label_158cbc;
        case 0x158cc0u: goto label_158cc0;
        case 0x158cc4u: goto label_158cc4;
        case 0x158cc8u: goto label_158cc8;
        case 0x158cccu: goto label_158ccc;
        case 0x158cd0u: goto label_158cd0;
        case 0x158cd4u: goto label_158cd4;
        case 0x158cd8u: goto label_158cd8;
        case 0x158cdcu: goto label_158cdc;
        case 0x158ce0u: goto label_158ce0;
        case 0x158ce4u: goto label_158ce4;
        default: break;
    }

    ctx->pc = 0x158c48u;

label_158c48:
    // 0x158c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158c4c:
    // 0x158c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158c50:
    // 0x158c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158c54:
    // 0x158c54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158c58:
    // 0x158c58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158c5c:
    // 0x158c5c: 0xc04f26c  jal         func_13C9B0
label_158c60:
    if (ctx->pc == 0x158C60u) {
        ctx->pc = 0x158C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C5Cu;
        // 0x158c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C64u;
        goto label_158c64;
    }
    ctx->pc = 0x158C5Cu;
    SET_GPR_U32(ctx, 31, 0x158C64u);
    ctx->pc = 0x158C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C5Cu;
    // 0x158c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x158C5Cu, 0x158C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C64u;
label_158c64:
    // 0x158c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158c68:
    // 0x158c68: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158c6c:
    // 0x158c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158c70:
    // 0x158c70: 0xc04f33e  jal         func_13CCF8
label_158c74:
    if (ctx->pc == 0x158C74u) {
        ctx->pc = 0x158C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C70u;
        // 0x158c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C78u;
        goto label_158c78;
    }
    ctx->pc = 0x158C70u;
    SET_GPR_U32(ctx, 31, 0x158C78u);
    ctx->pc = 0x158C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C70u;
    // 0x158c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158C70u, 0x158C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C78u;
label_158c78:
    // 0x158c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158c7c:
    // 0x158c7c: 0xc04f0b6  jal         func_13C2D8
label_158c80:
    if (ctx->pc == 0x158C80u) {
        ctx->pc = 0x158C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C7Cu;
        // 0x158c80: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C84u;
        goto label_158c84;
    }
    ctx->pc = 0x158C7Cu;
    SET_GPR_U32(ctx, 31, 0x158C84u);
    ctx->pc = 0x158C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C7Cu;
    // 0x158c80: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158C7Cu, 0x158C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C84u;
label_158c84:
    // 0x158c84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158c88:
    // 0x158c88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_158c8c:
    // 0x158c8c: 0xc046330  jal         func_118CC0
label_158c90:
    if (ctx->pc == 0x158C90u) {
        ctx->pc = 0x158C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C8Cu;
        // 0x158c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C94u;
        goto label_158c94;
    }
    ctx->pc = 0x158C8Cu;
    SET_GPR_U32(ctx, 31, 0x158C94u);
    ctx->pc = 0x158C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C8Cu;
    // 0x158c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x158C8Cu, 0x158C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C94u;
label_158c94:
    // 0x158c94: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_158c98:
    // 0x158c98: 0xc045fea  jal         func_117FA8
label_158c9c:
    if (ctx->pc == 0x158C9Cu) {
        ctx->pc = 0x158C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C98u;
        // 0x158c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CA0u;
        goto label_158ca0;
    }
    ctx->pc = 0x158C98u;
    SET_GPR_U32(ctx, 31, 0x158CA0u);
    ctx->pc = 0x158C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C98u;
    // 0x158c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x158C98u, 0x158CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CA0u;
label_158ca0:
    // 0x158ca0: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_158ca4:
    // 0x158ca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_158ca8:
    if (ctx->pc == 0x158CA8u) {
        ctx->pc = 0x158CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CA4u;
        // 0x158ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CACu;
        goto label_158cac;
    }
    ctx->pc = 0x158CA4u;
    {
        const bool branch_taken_0x158ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CA4u;
        // 0x158ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ca4) {
            ctx->pc = 0x158CB4u;
            goto label_158cb4;
        }
    }
    ctx->pc = 0x158CACu;
label_158cac:
    // 0x158cac: 0xc046058  jal         func_118160
label_158cb0:
    if (ctx->pc == 0x158CB0u) {
        ctx->pc = 0x158CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CACu;
        // 0x158cb0: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CB4u;
        goto label_158cb4;
    }
    ctx->pc = 0x158CACu;
    SET_GPR_U32(ctx, 31, 0x158CB4u);
    ctx->pc = 0x158CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CACu;
    // 0x158cb0: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x158CACu, 0x158CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CB4u;
label_158cb4:
    // 0x158cb4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158cb8:
    // 0x158cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158cbc:
    // 0x158cbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158cc0:
    // 0x158cc0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158cc4:
    // 0x158cc4: 0x40f809  jalr        $v0
label_158cc8:
    if (ctx->pc == 0x158CC8u) {
        ctx->pc = 0x158CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC4u;
        // 0x158cc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CCCu;
        goto label_158ccc;
    }
    ctx->pc = 0x158CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158CCCu);
        ctx->pc = 0x158CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC4u;
        // 0x158cc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158CC4u, 0x158CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158CCCu;
label_158ccc:
    // 0x158ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158cd0:
    // 0x158cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158cd4:
    // 0x158cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158cd8:
    // 0x158cd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158cdc:
    // 0x158cdc: 0x3e00008  jr          $ra
label_158ce0:
    if (ctx->pc == 0x158CE0u) {
        ctx->pc = 0x158CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CDCu;
        // 0x158ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CE4u;
        goto label_158ce4;
    }
    ctx->pc = 0x158CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CDCu;
        // 0x158ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158CE4u;
label_158ce4:
    // 0x158ce4: 0x0  nop
    ctx->pc = 0x158ce4u;
    // NOP
    ctx->pc = 0x158ce8u;
}
