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

// Function: sub_00197D00
// Address: 0x197d00 - 0x197d88
void sub_00197D00_0x197d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D00_0x197d00");
#endif

    switch (ctx->pc) {
        case 0x197d00u: goto label_197d00;
        case 0x197d04u: goto label_197d04;
        case 0x197d08u: goto label_197d08;
        case 0x197d0cu: goto label_197d0c;
        case 0x197d10u: goto label_197d10;
        case 0x197d14u: goto label_197d14;
        case 0x197d18u: goto label_197d18;
        case 0x197d1cu: goto label_197d1c;
        case 0x197d20u: goto label_197d20;
        case 0x197d24u: goto label_197d24;
        case 0x197d28u: goto label_197d28;
        case 0x197d2cu: goto label_197d2c;
        case 0x197d30u: goto label_197d30;
        case 0x197d34u: goto label_197d34;
        case 0x197d38u: goto label_197d38;
        case 0x197d3cu: goto label_197d3c;
        case 0x197d40u: goto label_197d40;
        case 0x197d44u: goto label_197d44;
        case 0x197d48u: goto label_197d48;
        case 0x197d4cu: goto label_197d4c;
        case 0x197d50u: goto label_197d50;
        case 0x197d54u: goto label_197d54;
        case 0x197d58u: goto label_197d58;
        case 0x197d5cu: goto label_197d5c;
        case 0x197d60u: goto label_197d60;
        case 0x197d64u: goto label_197d64;
        case 0x197d68u: goto label_197d68;
        case 0x197d6cu: goto label_197d6c;
        case 0x197d70u: goto label_197d70;
        case 0x197d74u: goto label_197d74;
        case 0x197d78u: goto label_197d78;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d80u: goto label_197d80;
        case 0x197d84u: goto label_197d84;
        default: break;
    }

    ctx->pc = 0x197d00u;

label_197d00:
    // 0x197d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_197d04:
    // 0x197d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_197d08:
    // 0x197d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x197d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_197d0c:
    // 0x197d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197d10:
    // 0x197d10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197d14:
    // 0x197d14: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_197d18:
    if (ctx->pc == 0x197D18u) {
        ctx->pc = 0x197D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D14u;
        // 0x197d18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D1Cu;
        goto label_197d1c;
    }
    ctx->pc = 0x197D14u;
    {
        const bool branch_taken_0x197d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d14) {
            ctx->pc = 0x197D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D14u;
            // 0x197d18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D7Cu;
            goto label_197d7c;
        }
    }
    ctx->pc = 0x197D1Cu;
label_197d1c:
    // 0x197d1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_197d20:
    // 0x197d20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_197d24:
    if (ctx->pc == 0x197D24u) {
        ctx->pc = 0x197D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D20u;
        // 0x197d24: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D28u;
        goto label_197d28;
    }
    ctx->pc = 0x197D20u;
    {
        const bool branch_taken_0x197d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D20u;
        // 0x197d24: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d20) {
            ctx->pc = 0x197D38u;
            goto label_197d38;
        }
    }
    ctx->pc = 0x197D28u;
label_197d28:
    // 0x197d28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_197d2c:
    // 0x197d2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197d30:
    // 0x197d30: 0x40f809  jalr        $v0
label_197d34:
    if (ctx->pc == 0x197D34u) {
        ctx->pc = 0x197D38u;
        goto label_197d38;
    }
    ctx->pc = 0x197D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197D38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D30u, 0x197D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197D38u;
label_197d38:
    // 0x197d38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_197d3c:
    // 0x197d3c: 0xc061a12  jal         func_186848
label_197d40:
    if (ctx->pc == 0x197D40u) {
        ctx->pc = 0x197D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D3Cu;
        // 0x197d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D44u;
        goto label_197d44;
    }
    ctx->pc = 0x197D3Cu;
    SET_GPR_U32(ctx, 31, 0x197D44u);
    ctx->pc = 0x197D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D3Cu;
    // 0x197d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197D3Cu, 0x197D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D44u;
label_197d44:
    // 0x197d44: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_197d48:
    // 0x197d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197d4c:
    // 0x197d4c: 0xc061a16  jal         func_186858
label_197d50:
    if (ctx->pc == 0x197D50u) {
        ctx->pc = 0x197D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D4Cu;
        // 0x197d50: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D54u;
        goto label_197d54;
    }
    ctx->pc = 0x197D4Cu;
    SET_GPR_U32(ctx, 31, 0x197D54u);
    ctx->pc = 0x197D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D4Cu;
    // 0x197d50: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197D4Cu, 0x197D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D54u;
label_197d54:
    // 0x197d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197d58:
    // 0x197d58: 0xc06ee66  jal         func_1BB998
label_197d5c:
    if (ctx->pc == 0x197D5Cu) {
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D58u;
        // 0x197d5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D60u;
        goto label_197d60;
    }
    ctx->pc = 0x197D58u;
    SET_GPR_U32(ctx, 31, 0x197D60u);
    ctx->pc = 0x197D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D58u;
    // 0x197d5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x197D58u, 0x197D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0xc061a16  jal         func_186858
label_197d64:
    if (ctx->pc == 0x197D64u) {
        ctx->pc = 0x197D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D60u;
        // 0x197d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D68u;
        goto label_197d68;
    }
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D60u;
    // 0x197d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197D60u, 0x197D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D68u;
label_197d68:
    // 0x197d68: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_197d6c:
    // 0x197d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197d70:
    // 0x197d70: 0x0  nop
    ctx->pc = 0x197d70u;
    // NOP
label_197d74:
    // 0x197d74: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x197d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_197d78:
    // 0x197d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197d7c:
    // 0x197d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x197d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_197d80:
    // 0x197d80: 0x3e00008  jr          $ra
label_197d84:
    if (ctx->pc == 0x197D84u) {
        ctx->pc = 0x197D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D80u;
        // 0x197d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D88u;
        goto label_fallthrough_0x197d80;
    }
    ctx->pc = 0x197D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D80u;
        // 0x197d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197d80:
    ctx->pc = 0x197D88u;
}
