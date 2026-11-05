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

// Function: sub_002C1E88
// Address: 0x2c1e88 - 0x2c2060
void sub_002C1E88_0x2c1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1E88_0x2c1e88");
#endif

    switch (ctx->pc) {
        case 0x2c1ea0u: goto label_2c1ea0;
        case 0x2c1ea8u: goto label_2c1ea8;
        case 0x2c1ed0u: goto label_2c1ed0;
        case 0x2c1edcu: goto label_2c1edc;
        case 0x2c1ef4u: goto label_2c1ef4;
        case 0x2c1f00u: goto label_2c1f00;
        case 0x2c1f14u: goto label_2c1f14;
        case 0x2c1f28u: goto label_2c1f28;
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f3cu: goto label_2c1f3c;
        case 0x2c1f44u: goto label_2c1f44;
        case 0x2c1f4cu: goto label_2c1f4c;
        case 0x2c1f54u: goto label_2c1f54;
        case 0x2c1f5cu: goto label_2c1f5c;
        case 0x2c1f64u: goto label_2c1f64;
        case 0x2c1f6cu: goto label_2c1f6c;
        case 0x2c1f74u: goto label_2c1f74;
        case 0x2c1f7cu: goto label_2c1f7c;
        case 0x2c1f84u: goto label_2c1f84;
        case 0x2c1f8cu: goto label_2c1f8c;
        case 0x2c1f94u: goto label_2c1f94;
        case 0x2c1f9cu: goto label_2c1f9c;
        case 0x2c1fa4u: goto label_2c1fa4;
        case 0x2c1facu: goto label_2c1fac;
        case 0x2c1fb4u: goto label_2c1fb4;
        case 0x2c1fbcu: goto label_2c1fbc;
        case 0x2c1fc4u: goto label_2c1fc4;
        case 0x2c1fccu: goto label_2c1fcc;
        case 0x2c1fd4u: goto label_2c1fd4;
        case 0x2c1fdcu: goto label_2c1fdc;
        case 0x2c1fe4u: goto label_2c1fe4;
        case 0x2c1fecu: goto label_2c1fec;
        case 0x2c1ff4u: goto label_2c1ff4;
        case 0x2c1ffcu: goto label_2c1ffc;
        case 0x2c2004u: goto label_2c2004;
        case 0x2c200cu: goto label_2c200c;
        case 0x2c2014u: goto label_2c2014;
        case 0x2c201cu: goto label_2c201c;
        case 0x2c2024u: goto label_2c2024;
        case 0x2c202cu: goto label_2c202c;
        case 0x2c2034u: goto label_2c2034;
        case 0x2c203cu: goto label_2c203c;
        case 0x2c2044u: goto label_2c2044;
        case 0x2c204cu: goto label_2c204c;
        default: break;
    }

    ctx->pc = 0x2c1e88u;

    // 0x2c1e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c1e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1e98: 0xc0b0b44  jal         func_2C2D10
    ctx->pc = 0x2C1E98u;
    SET_GPR_U32(ctx, 31, 0x2C1EA0u);
    ctx->pc = 0x2C1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E98u;
    // 0x2c1e9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D10u, 0x2C1E98u, 0x2C1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EA0u;
label_2c1ea0:
    // 0x2c1ea0: 0xc0b05d2  jal         func_2C1748
    ctx->pc = 0x2C1EA0u;
    SET_GPR_U32(ctx, 31, 0x2C1EA8u);
    ctx->pc = 0x2C1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EA0u;
    // 0x2c1ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1748u, 0x2C1EA0u, 0x2C1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EA8u;
label_2c1ea8:
    // 0x2c1ea8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2c1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c1eac: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1EACu;
    {
        const bool branch_taken_0x2c1eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EACu;
        // 0x2c1eb0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1eac) {
            ctx->pc = 0x2C1EF4u;
            goto label_2c1ef4;
        }
    }
    ctx->pc = 0x2C1EB4u;
    // 0x2c1eb4: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x2c1eb8: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2c1eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c1ebc: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x2c1ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c1ec0: 0x50b0000a  beql        $a1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C1EC0u;
    {
        const bool branch_taken_0x2c1ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c1ec0) {
            ctx->pc = 0x2C1EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1EC0u;
            // 0x2c1ec4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1EECu;
            goto label_2c1eec;
        }
    }
    ctx->pc = 0x2C1EC8u;
    // 0x2c1ec8: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x2c1ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x2c1ecc: 0x0  nop
    ctx->pc = 0x2c1eccu;
    // NOP
label_2c1ed0:
    // 0x2c1ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ed4: 0xc0b057c  jal         func_2C15F0
    ctx->pc = 0x2C1ED4u;
    SET_GPR_U32(ctx, 31, 0x2C1EDCu);
    ctx->pc = 0x2C1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ED4u;
    // 0x2c1ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F0u, 0x2C1ED4u, 0x2C1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EDCu;
label_2c1edc:
    // 0x2c1edc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c1ee0: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C1EE0u;
    {
        const bool branch_taken_0x2c1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c1ee0) {
            ctx->pc = 0x2C1EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1EE0u;
            // 0x2c1ee4: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1ed0;
        }
    }
    ctx->pc = 0x2C1EE8u;
    // 0x2c1ee8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2c1ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c1eec:
    // 0x2c1eec: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C1EECu;
    SET_GPR_U32(ctx, 31, 0x2C1EF4u);
    ctx->pc = 0x2C1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EECu;
    // 0x2c1ef0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C1EECu, 0x2C1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EF4u;
label_2c1ef4:
    // 0x2c1ef4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2c1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2c1ef8: 0xc0b05d2  jal         func_2C1748
    ctx->pc = 0x2C1EF8u;
    SET_GPR_U32(ctx, 31, 0x2C1F00u);
    ctx->pc = 0x2C1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EF8u;
    // 0x2c1efc: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1748u, 0x2C1EF8u, 0x2C1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F00u;
label_2c1f00:
    // 0x2c1f00: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x2c1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2c1f04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1F04u;
    {
        const bool branch_taken_0x2c1f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f04) {
            ctx->pc = 0x2C1F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F04u;
            // 0x2c1f08: 0x8e2400e4  lw          $a0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F18u;
            goto label_2c1f18;
        }
    }
    ctx->pc = 0x2C1F0Cu;
    // 0x2c1f0c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C1F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F14u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C1F0Cu, 0x2C1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F14u;
label_2c1f14:
    // 0x2c1f14: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_2c1f18:
    // 0x2c1f18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1F18u;
    {
        const bool branch_taken_0x2c1f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F18u;
        // 0x2c1f1c: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f18) {
            ctx->pc = 0x2C1F28u;
            goto label_2c1f28;
        }
    }
    ctx->pc = 0x2C1F20u;
    // 0x2c1f20: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C1F20u;
    SET_GPR_U32(ctx, 31, 0x2C1F28u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C1F20u, 0x2C1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F28u;
label_2c1f28:
    // 0x2c1f28: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2c1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x2c1f2c: 0xc0fb046  jal         func_3EC118
    ctx->pc = 0x2C1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F34u);
    ctx->pc = 0x2C1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F2Cu;
    // 0x2c1f30: 0x262400ec  addiu       $a0, $s1, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC118u, 0x2C1F2Cu, 0x2C1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F34u;
label_2c1f34:
    // 0x2c1f34: 0xc0fb04e  jal         func_3EC138
    ctx->pc = 0x2C1F34u;
    SET_GPR_U32(ctx, 31, 0x2C1F3Cu);
    ctx->pc = 0x2C1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F34u;
    // 0x2c1f38: 0x26240138  addiu       $a0, $s1, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC138u, 0x2C1F34u, 0x2C1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F3Cu;
label_2c1f3c:
    // 0x2c1f3c: 0xc0fb056  jal         func_3EC158
    ctx->pc = 0x2C1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F44u);
    ctx->pc = 0x2C1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F3Cu;
    // 0x2c1f40: 0x26240184  addiu       $a0, $s1, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC158u, 0x2C1F3Cu, 0x2C1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F44u;
label_2c1f44:
    // 0x2c1f44: 0xc0fb05e  jal         func_3EC178
    ctx->pc = 0x2C1F44u;
    SET_GPR_U32(ctx, 31, 0x2C1F4Cu);
    ctx->pc = 0x2C1F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F44u;
    // 0x2c1f48: 0x262401d0  addiu       $a0, $s1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC178u, 0x2C1F44u, 0x2C1F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F4Cu;
label_2c1f4c:
    // 0x2c1f4c: 0xc0fb066  jal         func_3EC198
    ctx->pc = 0x2C1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F54u);
    ctx->pc = 0x2C1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F4Cu;
    // 0x2c1f50: 0x2624021c  addiu       $a0, $s1, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC198u, 0x2C1F4Cu, 0x2C1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F54u;
label_2c1f54:
    // 0x2c1f54: 0xc0fb06e  jal         func_3EC1B8
    ctx->pc = 0x2C1F54u;
    SET_GPR_U32(ctx, 31, 0x2C1F5Cu);
    ctx->pc = 0x2C1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F54u;
    // 0x2c1f58: 0x26240268  addiu       $a0, $s1, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC1B8u, 0x2C1F54u, 0x2C1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F5Cu;
label_2c1f5c:
    // 0x2c1f5c: 0xc0fb076  jal         func_3EC1D8
    ctx->pc = 0x2C1F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F64u);
    ctx->pc = 0x2C1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F5Cu;
    // 0x2c1f60: 0x2624034c  addiu       $a0, $s1, 0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC1D8u, 0x2C1F5Cu, 0x2C1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F64u;
label_2c1f64:
    // 0x2c1f64: 0xc0fb07e  jal         func_3EC1F8
    ctx->pc = 0x2C1F64u;
    SET_GPR_U32(ctx, 31, 0x2C1F6Cu);
    ctx->pc = 0x2C1F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F64u;
    // 0x2c1f68: 0x26240398  addiu       $a0, $s1, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC1F8u, 0x2C1F64u, 0x2C1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F6Cu;
label_2c1f6c:
    // 0x2c1f6c: 0xc0fb086  jal         func_3EC218
    ctx->pc = 0x2C1F6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F74u);
    ctx->pc = 0x2C1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F6Cu;
    // 0x2c1f70: 0x26240300  addiu       $a0, $s1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC218u, 0x2C1F6Cu, 0x2C1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F74u;
label_2c1f74:
    // 0x2c1f74: 0xc0fb08e  jal         func_3EC238
    ctx->pc = 0x2C1F74u;
    SET_GPR_U32(ctx, 31, 0x2C1F7Cu);
    ctx->pc = 0x2C1F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F74u;
    // 0x2c1f78: 0x262402b4  addiu       $a0, $s1, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC238u, 0x2C1F74u, 0x2C1F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F7Cu;
label_2c1f7c:
    // 0x2c1f7c: 0xc0fb096  jal         func_3EC258
    ctx->pc = 0x2C1F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F84u);
    ctx->pc = 0x2C1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F7Cu;
    // 0x2c1f80: 0x262403e4  addiu       $a0, $s1, 0x3E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 996));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC258u, 0x2C1F7Cu, 0x2C1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F84u;
label_2c1f84:
    // 0x2c1f84: 0xc0fb09e  jal         func_3EC278
    ctx->pc = 0x2C1F84u;
    SET_GPR_U32(ctx, 31, 0x2C1F8Cu);
    ctx->pc = 0x2C1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F84u;
    // 0x2c1f88: 0x26240430  addiu       $a0, $s1, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC278u, 0x2C1F84u, 0x2C1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F8Cu;
label_2c1f8c:
    // 0x2c1f8c: 0xc0fb0a6  jal         func_3EC298
    ctx->pc = 0x2C1F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F94u);
    ctx->pc = 0x2C1F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F8Cu;
    // 0x2c1f90: 0x2624047c  addiu       $a0, $s1, 0x47C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC298u, 0x2C1F8Cu, 0x2C1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F94u;
label_2c1f94:
    // 0x2c1f94: 0xc0fb0ae  jal         func_3EC2B8
    ctx->pc = 0x2C1F94u;
    SET_GPR_U32(ctx, 31, 0x2C1F9Cu);
    ctx->pc = 0x2C1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F94u;
    // 0x2c1f98: 0x262404c8  addiu       $a0, $s1, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC2B8u, 0x2C1F94u, 0x2C1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F9Cu;
label_2c1f9c:
    // 0x2c1f9c: 0xc0fb0b6  jal         func_3EC2D8
    ctx->pc = 0x2C1F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C1FA4u);
    ctx->pc = 0x2C1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F9Cu;
    // 0x2c1fa0: 0x26240514  addiu       $a0, $s1, 0x514 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC2D8u, 0x2C1F9Cu, 0x2C1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FA4u;
label_2c1fa4:
    // 0x2c1fa4: 0xc0fb0be  jal         func_3EC2F8
    ctx->pc = 0x2C1FA4u;
    SET_GPR_U32(ctx, 31, 0x2C1FACu);
    ctx->pc = 0x2C1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FA4u;
    // 0x2c1fa8: 0x26240560  addiu       $a0, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC2F8u, 0x2C1FA4u, 0x2C1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FACu;
label_2c1fac:
    // 0x2c1fac: 0xc0fb0c6  jal         func_3EC318
    ctx->pc = 0x2C1FACu;
    SET_GPR_U32(ctx, 31, 0x2C1FB4u);
    ctx->pc = 0x2C1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FACu;
    // 0x2c1fb0: 0x262405ac  addiu       $a0, $s1, 0x5AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC318u, 0x2C1FACu, 0x2C1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FB4u;
label_2c1fb4:
    // 0x2c1fb4: 0xc0fb0ce  jal         func_3EC338
    ctx->pc = 0x2C1FB4u;
    SET_GPR_U32(ctx, 31, 0x2C1FBCu);
    ctx->pc = 0x2C1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FB4u;
    // 0x2c1fb8: 0x262405f8  addiu       $a0, $s1, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC338u, 0x2C1FB4u, 0x2C1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FBCu;
label_2c1fbc:
    // 0x2c1fbc: 0xc0fb0d6  jal         func_3EC358
    ctx->pc = 0x2C1FBCu;
    SET_GPR_U32(ctx, 31, 0x2C1FC4u);
    ctx->pc = 0x2C1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FBCu;
    // 0x2c1fc0: 0x26240644  addiu       $a0, $s1, 0x644 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC358u, 0x2C1FBCu, 0x2C1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FC4u;
label_2c1fc4:
    // 0x2c1fc4: 0xc0fb0de  jal         func_3EC378
    ctx->pc = 0x2C1FC4u;
    SET_GPR_U32(ctx, 31, 0x2C1FCCu);
    ctx->pc = 0x2C1FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FC4u;
    // 0x2c1fc8: 0x26240690  addiu       $a0, $s1, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC378u, 0x2C1FC4u, 0x2C1FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FCCu;
label_2c1fcc:
    // 0x2c1fcc: 0xc0fb0e6  jal         func_3EC398
    ctx->pc = 0x2C1FCCu;
    SET_GPR_U32(ctx, 31, 0x2C1FD4u);
    ctx->pc = 0x2C1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FCCu;
    // 0x2c1fd0: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC398u, 0x2C1FCCu, 0x2C1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FD4u;
label_2c1fd4:
    // 0x2c1fd4: 0xc0fb0ee  jal         func_3EC3B8
    ctx->pc = 0x2C1FD4u;
    SET_GPR_U32(ctx, 31, 0x2C1FDCu);
    ctx->pc = 0x2C1FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FD4u;
    // 0x2c1fd8: 0x26240728  addiu       $a0, $s1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC3B8u, 0x2C1FD4u, 0x2C1FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FDCu;
label_2c1fdc:
    // 0x2c1fdc: 0xc0fb0f6  jal         func_3EC3D8
    ctx->pc = 0x2C1FDCu;
    SET_GPR_U32(ctx, 31, 0x2C1FE4u);
    ctx->pc = 0x2C1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FDCu;
    // 0x2c1fe0: 0x26240774  addiu       $a0, $s1, 0x774 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC3D8u, 0x2C1FDCu, 0x2C1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FE4u;
label_2c1fe4:
    // 0x2c1fe4: 0xc0fb0fe  jal         func_3EC3F8
    ctx->pc = 0x2C1FE4u;
    SET_GPR_U32(ctx, 31, 0x2C1FECu);
    ctx->pc = 0x2C1FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FE4u;
    // 0x2c1fe8: 0x262407c0  addiu       $a0, $s1, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC3F8u, 0x2C1FE4u, 0x2C1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FECu;
label_2c1fec:
    // 0x2c1fec: 0xc0fb106  jal         func_3EC418
    ctx->pc = 0x2C1FECu;
    SET_GPR_U32(ctx, 31, 0x2C1FF4u);
    ctx->pc = 0x2C1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FECu;
    // 0x2c1ff0: 0x2624080c  addiu       $a0, $s1, 0x80C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC418u, 0x2C1FECu, 0x2C1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FF4u;
label_2c1ff4:
    // 0x2c1ff4: 0xc0fb10e  jal         func_3EC438
    ctx->pc = 0x2C1FF4u;
    SET_GPR_U32(ctx, 31, 0x2C1FFCu);
    ctx->pc = 0x2C1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FF4u;
    // 0x2c1ff8: 0x26240858  addiu       $a0, $s1, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC438u, 0x2C1FF4u, 0x2C1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FFCu;
label_2c1ffc:
    // 0x2c1ffc: 0xc0fb116  jal         func_3EC458
    ctx->pc = 0x2C1FFCu;
    SET_GPR_U32(ctx, 31, 0x2C2004u);
    ctx->pc = 0x2C2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FFCu;
    // 0x2c2000: 0x262408a4  addiu       $a0, $s1, 0x8A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC458u, 0x2C1FFCu, 0x2C2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2004u;
label_2c2004:
    // 0x2c2004: 0xc0fb11e  jal         func_3EC478
    ctx->pc = 0x2C2004u;
    SET_GPR_U32(ctx, 31, 0x2C200Cu);
    ctx->pc = 0x2C2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2004u;
    // 0x2c2008: 0x262408f0  addiu       $a0, $s1, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC478u, 0x2C2004u, 0x2C200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C200Cu;
label_2c200c:
    // 0x2c200c: 0xc0fb126  jal         func_3EC498
    ctx->pc = 0x2C200Cu;
    SET_GPR_U32(ctx, 31, 0x2C2014u);
    ctx->pc = 0x2C2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C200Cu;
    // 0x2c2010: 0x2624093c  addiu       $a0, $s1, 0x93C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC498u, 0x2C200Cu, 0x2C2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2014u;
label_2c2014:
    // 0x2c2014: 0xc0fb12e  jal         func_3EC4B8
    ctx->pc = 0x2C2014u;
    SET_GPR_U32(ctx, 31, 0x2C201Cu);
    ctx->pc = 0x2C2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2014u;
    // 0x2c2018: 0x26240988  addiu       $a0, $s1, 0x988 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC4B8u, 0x2C2014u, 0x2C201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C201Cu;
label_2c201c:
    // 0x2c201c: 0xc0fb136  jal         func_3EC4D8
    ctx->pc = 0x2C201Cu;
    SET_GPR_U32(ctx, 31, 0x2C2024u);
    ctx->pc = 0x2C2020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C201Cu;
    // 0x2c2020: 0x262409d4  addiu       $a0, $s1, 0x9D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC4D8u, 0x2C201Cu, 0x2C2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2024u;
label_2c2024:
    // 0x2c2024: 0xc0fb13e  jal         func_3EC4F8
    ctx->pc = 0x2C2024u;
    SET_GPR_U32(ctx, 31, 0x2C202Cu);
    ctx->pc = 0x2C2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2024u;
    // 0x2c2028: 0x26240a20  addiu       $a0, $s1, 0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC4F8u, 0x2C2024u, 0x2C202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C202Cu;
label_2c202c:
    // 0x2c202c: 0xc0fb146  jal         func_3EC518
    ctx->pc = 0x2C202Cu;
    SET_GPR_U32(ctx, 31, 0x2C2034u);
    ctx->pc = 0x2C2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C202Cu;
    // 0x2c2030: 0x26240a6c  addiu       $a0, $s1, 0xA6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC518u, 0x2C202Cu, 0x2C2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2034u;
label_2c2034:
    // 0x2c2034: 0xc0fb14e  jal         func_3EC538
    ctx->pc = 0x2C2034u;
    SET_GPR_U32(ctx, 31, 0x2C203Cu);
    ctx->pc = 0x2C2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2034u;
    // 0x2c2038: 0x26240ab8  addiu       $a0, $s1, 0xAB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC538u, 0x2C2034u, 0x2C203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C203Cu;
label_2c203c:
    // 0x2c203c: 0xc0fb156  jal         func_3EC558
    ctx->pc = 0x2C203Cu;
    SET_GPR_U32(ctx, 31, 0x2C2044u);
    ctx->pc = 0x2C2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C203Cu;
    // 0x2c2040: 0x26240b04  addiu       $a0, $s1, 0xB04 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC558u, 0x2C203Cu, 0x2C2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2044u;
label_2c2044:
    // 0x2c2044: 0xc0fb15e  jal         func_3EC578
    ctx->pc = 0x2C2044u;
    SET_GPR_U32(ctx, 31, 0x2C204Cu);
    ctx->pc = 0x2C2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2044u;
    // 0x2c2048: 0x26240b50  addiu       $a0, $s1, 0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC578u, 0x2C2044u, 0x2C204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C204Cu;
label_2c204c:
    // 0x2c204c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c204cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c2050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2058: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2058u;
        // 0x2c205c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2060u;
}
