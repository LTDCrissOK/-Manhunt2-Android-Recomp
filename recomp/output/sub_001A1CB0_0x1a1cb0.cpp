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

// Function: sub_001A1CB0
// Address: 0x1a1cb0 - 0x1a1d98
void sub_001A1CB0_0x1a1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1CB0_0x1a1cb0");
#endif

    switch (ctx->pc) {
        case 0x1a1cc4u: goto label_1a1cc4;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1cecu: goto label_1a1cec;
        case 0x1a1d18u: goto label_1a1d18;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d80u: goto label_1a1d80;
        default: break;
    }

    ctx->pc = 0x1a1cb0u;

    // 0x1a1cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a1cbc: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1CBCu;
    SET_GPR_U32(ctx, 31, 0x1A1CC4u);
    ctx->pc = 0x1A1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CBCu;
    // 0x1a1cc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1CBCu, 0x1A1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CC4u;
label_1a1cc4:
    // 0x1a1cc4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1a1cc8: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x1a1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1a1ccc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a1cd0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1a1cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1a1cd4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A1CD4u;
    {
        const bool branch_taken_0x1a1cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD4u;
        // 0x1a1cd8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cd4) {
            ctx->pc = 0x1A1D50u;
            goto label_1a1d50;
        }
    }
    ctx->pc = 0x1A1CDCu;
    // 0x1a1cdc: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A1CDCu;
    SET_GPR_U32(ctx, 31, 0x1A1CE4u);
    ctx->pc = 0x1A1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CDCu;
    // 0x1a1ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A1CDCu, 0x1A1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0xc064d1c  jal         func_193470
    ctx->pc = 0x1A1CE4u;
    SET_GPR_U32(ctx, 31, 0x1A1CECu);
    ctx->pc = 0x1A1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CE4u;
    // 0x1a1ce8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193470u, 0x1A1CE4u, 0x1A1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1CECu;
    {
        const bool branch_taken_0x1a1cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CECu;
        // 0x1a1cf0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cec) {
            ctx->pc = 0x1A1D20u;
            goto label_1a1d20;
        }
    }
    ctx->pc = 0x1A1CF4u;
    // 0x1a1cf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1cf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a1cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1cfc: 0x2443ff00  addiu       $v1, $v0, -0x100
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x1a1d00: 0x9c46ff00  lwu         $a2, -0x100($v0)
    ctx->pc = 0x1a1d00u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294967040)));
    // 0x1a1d04: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a1d04u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d0c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a1d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a1d10: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x1A1D10u;
    SET_GPR_U32(ctx, 31, 0x1A1D18u);
    ctx->pc = 0x1A1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D10u;
    // 0x1a1d14: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A1D10u, 0x1A1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D18u;
label_1a1d18:
    // 0x1a1d18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1D18u;
    {
        const bool branch_taken_0x1a1d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D18u;
        // 0x1a1d1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d18) {
            ctx->pc = 0x1A1D84u;
            goto label_1a1d84;
        }
    }
    ctx->pc = 0x1A1D20u;
label_1a1d20:
    // 0x1a1d20: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1D20u;
    SET_GPR_U32(ctx, 31, 0x1A1D28u);
    ctx->pc = 0x1A1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D20u;
    // 0x1a1d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1D20u, 0x1A1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D28u;
label_1a1d28:
    // 0x1a1d28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d30: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1D30u;
    SET_GPR_U32(ctx, 31, 0x1A1D38u);
    ctx->pc = 0x1A1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D30u;
    // 0x1a1d34: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1D30u, 0x1A1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D38u;
label_1a1d38:
    // 0x1a1d38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d40: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A1D40u;
    SET_GPR_U32(ctx, 31, 0x1A1D48u);
    ctx->pc = 0x1A1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D40u;
    // 0x1a1d44: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A1D40u, 0x1A1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A1D48u;
    {
        const bool branch_taken_0x1a1d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D48u;
        // 0x1a1d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d48) {
            ctx->pc = 0x1A1D84u;
            goto label_1a1d84;
        }
    }
    ctx->pc = 0x1A1D50u;
label_1a1d50:
    // 0x1a1d50: 0x8c62f010  lw          $v0, -0xFF0($v1)
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x1a1d54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a1d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1d58: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1D58u;
    {
        const bool branch_taken_0x1a1d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d58) {
            ctx->pc = 0x1A1D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D58u;
            // 0x1a1d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D84u;
            goto label_1a1d84;
        }
    }
    ctx->pc = 0x1A1D60u;
    // 0x1a1d60: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1a1d64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a1d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1d68: 0xc068766  jal         func_1A1D98
    ctx->pc = 0x1A1D68u;
    SET_GPR_U32(ctx, 31, 0x1A1D70u);
    ctx->pc = 0x1A1D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D68u;
    // 0x1a1d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D98u, 0x1A1D68u, 0x1A1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D70u;
label_1a1d70:
    // 0x1a1d70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D70u;
    {
        const bool branch_taken_0x1a1d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d70) {
            ctx->pc = 0x1A1D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D70u;
            // 0x1a1d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D84u;
            goto label_1a1d84;
        }
    }
    ctx->pc = 0x1A1D78u;
    // 0x1a1d78: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A1D78u;
    SET_GPR_U32(ctx, 31, 0x1A1D80u);
    ctx->pc = 0x1A1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D78u;
    // 0x1a1d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A1D78u, 0x1A1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D80u;
label_1a1d80:
    // 0x1a1d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1d84:
    // 0x1a1d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D8Cu;
        // 0x1a1d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D94u;
    // 0x1a1d94: 0x0  nop
    ctx->pc = 0x1a1d94u;
    // NOP
    ctx->pc = 0x1a1d98u;
}
