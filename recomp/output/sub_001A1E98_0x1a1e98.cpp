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

// Function: sub_001A1E98
// Address: 0x1a1e98 - 0x1a1f68
void sub_001A1E98_0x1a1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1E98_0x1a1e98");
#endif

    switch (ctx->pc) {
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1f08u: goto label_1a1f08;
        case 0x1a1f28u: goto label_1a1f28;
        case 0x1a1f48u: goto label_1a1f48;
        case 0x1a1f54u: goto label_1a1f54;
        default: break;
    }

    ctx->pc = 0x1a1e98u;

    // 0x1a1e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a1ea4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1EA4u;
    SET_GPR_U32(ctx, 31, 0x1A1EACu);
    ctx->pc = 0x1A1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EA4u;
    // 0x1a1ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1EA4u, 0x1A1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EACu;
label_1a1eac:
    // 0x1a1eac: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1A1EACu;
    SET_GPR_U32(ctx, 31, 0x1A1EB4u);
    ctx->pc = 0x1A1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EACu;
    // 0x1a1eb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1A1EACu, 0x1A1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EB4u;
label_1a1eb4:
    // 0x1a1eb4: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1EB4u;
    SET_GPR_U32(ctx, 31, 0x1A1EBCu);
    ctx->pc = 0x1A1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EB4u;
    // 0x1a1eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1EB4u, 0x1A1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EBCu;
label_1a1ebc:
    // 0x1a1ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ec0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1a1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1a1ec4: 0xc064d1c  jal         func_193470
    ctx->pc = 0x1A1EC4u;
    SET_GPR_U32(ctx, 31, 0x1A1ECCu);
    ctx->pc = 0x1A1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EC4u;
    // 0x1a1ec8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193470u, 0x1A1EC4u, 0x1A1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1ECCu;
label_1a1ecc:
    // 0x1a1ecc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1ECCu;
    {
        const bool branch_taken_0x1a1ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ECCu;
        // 0x1a1ed0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ecc) {
            ctx->pc = 0x1A1F10u;
            goto label_1a1f10;
        }
    }
    ctx->pc = 0x1A1ED4u;
    // 0x1a1ed4: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1ED4u;
    SET_GPR_U32(ctx, 31, 0x1A1EDCu);
    ctx->pc = 0x1A1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1ED4u;
    // 0x1a1ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1ED4u, 0x1A1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EDCu;
label_1a1edc:
    // 0x1a1edc: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1a1ee0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1ee4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a1ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1ee8: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x1a1eec: 0x9c66ff00  lwu         $a2, -0x100($v1)
    ctx->pc = 0x1a1eecu;
    SET_GPR_ZE32(ctx, 6, FAST_READ32(0x43FF00u));
    // 0x1a1ef0: 0x9c850004  lwu         $a1, 0x4($a0)
    ctx->pc = 0x1a1ef0u;
    SET_GPR_ZE32(ctx, 5, FAST_READ32(0x43FF04u));
    // 0x1a1ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ef8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1a1efc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a1efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a1f00: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x1A1F00u;
    SET_GPR_U32(ctx, 31, 0x1A1F08u);
    ctx->pc = 0x1A1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F00u;
    // 0x1a1f04: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A1F00u, 0x1A1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F08u;
label_1a1f08:
    // 0x1a1f08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1F08u;
    {
        const bool branch_taken_0x1a1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F08u;
        // 0x1a1f0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f08) {
            ctx->pc = 0x1A1F58u;
            goto label_1a1f58;
        }
    }
    ctx->pc = 0x1A1F10u;
label_1a1f10:
    // 0x1a1f10: 0x8c62f010  lw          $v0, -0xFF0($v1)
    ctx->pc = 0x1a1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x1a1f14: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a1f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1f18: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1F18u;
    {
        const bool branch_taken_0x1a1f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f18) {
            ctx->pc = 0x1A1F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F18u;
            // 0x1a1f1c: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F30u;
            goto label_1a1f30;
        }
    }
    ctx->pc = 0x1A1F20u;
    // 0x1a1f20: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A1F20u;
    SET_GPR_U32(ctx, 31, 0x1A1F28u);
    ctx->pc = 0x1A1F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F20u;
    // 0x1a1f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A1F20u, 0x1A1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F28u;
label_1a1f28:
    // 0x1a1f28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1F28u;
    {
        const bool branch_taken_0x1a1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F28u;
        // 0x1a1f2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f28) {
            ctx->pc = 0x1A1F58u;
            goto label_1a1f58;
        }
    }
    ctx->pc = 0x1A1F30u;
label_1a1f30:
    // 0x1a1f30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a1f34: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1a1f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1a1f38: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1F38u;
    {
        const bool branch_taken_0x1a1f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f38) {
            ctx->pc = 0x1A1F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F38u;
            // 0x1a1f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F58u;
            goto label_1a1f58;
        }
    }
    ctx->pc = 0x1A1F40u;
    // 0x1a1f40: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1F40u;
    SET_GPR_U32(ctx, 31, 0x1A1F48u);
    ctx->pc = 0x1A1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F40u;
    // 0x1a1f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1F40u, 0x1A1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F48u;
label_1a1f48:
    // 0x1a1f48: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1a1f4c: 0xc068eb8  jal         func_1A3AE0
    ctx->pc = 0x1A1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F54u);
    ctx->pc = 0x1A1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F4Cu;
    // 0x1a1f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AE0u, 0x1A1F4Cu, 0x1A1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F54u;
label_1a1f54:
    // 0x1a1f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1f58:
    // 0x1a1f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F68u;
}
