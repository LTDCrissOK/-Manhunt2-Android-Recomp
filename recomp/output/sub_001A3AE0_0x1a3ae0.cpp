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

// Function: sub_001A3AE0
// Address: 0x1a3ae0 - 0x1a3b78
void sub_001A3AE0_0x1a3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3AE0_0x1a3ae0");
#endif

    switch (ctx->pc) {
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        default: break;
    }

    ctx->pc = 0x1a3ae0u;

label_1a3ae0:
    // 0x1a3ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3ae4:
    // 0x1a3ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3ae8:
    // 0x1a3ae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a3aec:
    // 0x1a3aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3af0:
    // 0x1a3af0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3af4:
    // 0x1a3af4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a3af8:
    // 0x1a3af8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3afc:
    // 0x1a3afc: 0x50510019  beql        $v0, $s1, . + 4 + (0x19 << 2)
label_1a3b00:
    if (ctx->pc == 0x1A3B00u) {
        ctx->pc = 0x1A3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AFCu;
        // 0x1a3b00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B04u;
        goto label_1a3b04;
    }
    ctx->pc = 0x1A3AFCu;
    {
        const bool branch_taken_0x1a3afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a3afc) {
            ctx->pc = 0x1A3B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3AFCu;
            // 0x1a3b00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3B64u;
            goto label_1a3b64;
        }
    }
    ctx->pc = 0x1A3B04u;
label_1a3b04:
    // 0x1a3b04: 0xc0691d6  jal         func_1A4758
label_1a3b08:
    if (ctx->pc == 0x1A3B08u) {
        ctx->pc = 0x1A3B0Cu;
        goto label_1a3b0c;
    }
    ctx->pc = 0x1A3B04u;
    SET_GPR_U32(ctx, 31, 0x1A3B0Cu);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A3B04u, 0x1A3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B0Cu;
label_1a3b0c:
    // 0x1a3b0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3b10:
    // 0x1a3b10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3b14:
    if (ctx->pc == 0x1A3B14u) {
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B18u;
        goto label_1a3b18;
    }
    ctx->pc = 0x1A3B10u;
    {
        const bool branch_taken_0x1a3b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b10) {
            ctx->pc = 0x1A3B28u;
            goto label_1a3b28;
        }
    }
    ctx->pc = 0x1A3B18u;
label_1a3b18:
    // 0x1a3b18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3b1c:
    // 0x1a3b1c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3b20:
    // 0x1a3b20: 0x40f809  jalr        $v0
label_1a3b24:
    if (ctx->pc == 0x1A3B24u) {
        ctx->pc = 0x1A3B28u;
        goto label_1a3b28;
    }
    ctx->pc = 0x1A3B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3B28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B20u, 0x1A3B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3B28u;
label_1a3b28:
    // 0x1a3b28: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1a3b2c:
    // 0x1a3b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3b30:
    // 0x1a3b30: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1a3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_1a3b34:
    // 0x1a3b34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a3b38:
    // 0x1a3b38: 0x8c651004  lw          $a1, 0x1004($v1)
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
label_1a3b3c:
    // 0x1a3b3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1a3b40:
    // 0x1a3b40: 0x60f809  jalr        $v1
label_1a3b44:
    if (ctx->pc == 0x1A3B44u) {
        ctx->pc = 0x1A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B40u;
        // 0x1a3b44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B48u;
        goto label_1a3b48;
    }
    ctx->pc = 0x1A3B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A3B48u);
        ctx->pc = 0x1A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B40u;
        // 0x1a3b44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B40u, 0x1A3B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3B48u;
label_1a3b48:
    // 0x1a3b48: 0xc061a16  jal         func_186858
label_1a3b4c:
    if (ctx->pc == 0x1A3B4Cu) {
        ctx->pc = 0x1A3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B48u;
        // 0x1a3b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B50u;
        goto label_1a3b50;
    }
    ctx->pc = 0x1A3B48u;
    SET_GPR_U32(ctx, 31, 0x1A3B50u);
    ctx->pc = 0x1A3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B48u;
    // 0x1a3b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3B48u, 0x1A3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B50u;
label_1a3b50:
    // 0x1a3b50: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a3b54:
    // 0x1a3b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3b58:
    // 0x1a3b58: 0x0  nop
    ctx->pc = 0x1a3b58u;
    // NOP
label_1a3b5c:
    // 0x1a3b5c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a3b60:
    // 0x1a3b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3b64:
    // 0x1a3b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3b68:
    // 0x1a3b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3b6c:
    // 0x1a3b6c: 0x3e00008  jr          $ra
label_1a3b70:
    if (ctx->pc == 0x1A3B70u) {
        ctx->pc = 0x1A3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B6Cu;
        // 0x1a3b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B74u;
        goto label_1a3b74;
    }
    ctx->pc = 0x1A3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B6Cu;
        // 0x1a3b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3B74u;
label_1a3b74:
    // 0x1a3b74: 0x0  nop
    ctx->pc = 0x1a3b74u;
    // NOP
    ctx->pc = 0x1a3b78u;
}
